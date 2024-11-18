#ifndef MVLM_VALUE_H
#define MVLM_VALUE_H

#include "antlr4-runtime.h"
#include "./nyar_types.h"
#include <vector>
#include <string>
#include <memory>
#include <unordered_map>
#include <iostream>
#include <tuple>
#include <any>
#include <ostream>
#include <fstream>
#include <sstream>
#include <stack>
#include <variant>

std::string bytecodeToString(const antlrcpp::Any &value);

namespace MLVM
{
    class Function;
    class Struct;
    class Variable;

    // Clase base para todos los valores y variables
    class Value
    {
    public:
        virtual std::string toBytecode() const = 0;
        virtual ~Value() = default;
    };

    class Null
    {
    public:
        Null() = default;
        std::string toBytecode() const;
    };

    // Variable
    class Variable : public Value
    {
    protected:
        std::string name;
        std::string computedValue;
        int references = 0;
        bool canEvaluated = false;
        std::string type;

    public:
        Variable() = default;
        Variable(const std::string &name, const std::string &computedVal)
            : name(name), computedValue(computedVal) {}

        void setTypeHint(const std::string &hint)
        {
            type = hint;
        }

        void addReference()
        {
            std::cout << "Adding reference to " << name << std::endl;
            references++;
        }

        bool isEvaluable()
        {
            return canEvaluated;
        }

        void notEvaluate()
        {
            canEvaluated = false;
        }

        std::string toBytecode() const override
        {
            std::string type_hint = !type.empty() ? ":" + type : "";
            return name + type_hint + ";" + computedValue + ";" + std::to_string(references) + ";";
        }

        std::string getVar() const
        {
            return name;
        }

        std::string getName() const
        {
            return name;
        }
        std::string getValue() const
        {
            return computedValue;
        }
        int getReferences() const
        {
            return references;
        }

        operator int() const
        {
            return std::stoi(computedValue);
        }
        operator float() const
        {
            return std::stof(computedValue);
        }
        operator std::string() const
        {
            return computedValue;
        }
    };

    class UnEvaluable : public Variable
    {
    private:
        std::string expressions;

    public:
        UnEvaluable() = default;
        UnEvaluable(const std::string &exp) : expressions(exp)
        {
            name = expressions;
        }
        std::string toBytecode() const { return expressions; }
        void add(const std::string &exp)
        {
            std::cout << "Adding " << exp << " to " << expressions << std::endl;
            if(exp.at(0) == '+' || exp.at(0) == '-' || exp.at(0) == '*' || exp.at(0) == '/'){
                expressions += exp;
            }else{
                expressions =  exp + expressions;
            }
        }
    };

    using CodeInstruction = std::variant<
        std::shared_ptr<Variable>, // Para variables
        std::string,               // Para comandos simples (como print, comparaciones, etc.)
        std::shared_ptr<Function>, // Para funciones
        std::shared_ptr<Struct>    // Para estructuras, si las manejas de esta manera
        >;

    class Function
    {
    private:
        std::string name;
        std::vector<std::shared_ptr<UnEvaluable>> arguments;
        std::vector<CodeInstruction> body;

    public:
        Function() = default;
        Function(const std::string &funcName, const std::vector<std::shared_ptr<UnEvaluable>> &args)
            : name(funcName), arguments(args) {}

        void appendCode(const CodeInstruction &code)
        {
            body.push_back(code);
        }

        std::string toBytecode() const
        {
            std::string bytecode = "@declare funcion " + name + "( ";
            for (const auto &arg : arguments)
            {
                bytecode += arg->toBytecode() + ",";
            }
            bytecode.back() = ')'; // Reemplaza la última coma
            bytecode += " {\n";

            for (const auto &stmt : body)
            {
                std::visit([&bytecode](auto &&arg)
                           {
                using T = std::decay_t<decltype(arg)>;
                if constexpr (std::is_same_v<T, std::shared_ptr<Variable>>) {
                    if (arg->getReferences() > 0) {
                        std::string varBytecode = arg->toBytecode();
                        bytecode += varBytecode;
                    }
                } else if constexpr (std::is_same_v<T, std::shared_ptr<Function>>) {
                    std::string funcBytecode = arg->toBytecode();
                    bytecode += funcBytecode;
                } else if constexpr (std::is_same_v<T, std::shared_ptr<Struct>>) {
                    // Asume que la clase Struct tiene un método toBytecode()
                    // Implementa este método si aún no lo tienes
                    std::string structBytecode = arg->toBytecode();
                    bytecode += structBytecode;
                } else if constexpr (std::is_same_v<T, std::string>) {
                    // Para comandos simples, escribir directamente
                    bytecode += arg + "\n";
                }
                else if constexpr (std::is_same_v<T, std::shared_ptr<UnEvaluable>>) {
                    bytecode += arg->toBytecode();
                }
                else if constexpr (std::is_same_v<T, antlrcpp::Any>){
                    bytecode += arg->toBytecode();
                } }, stmt);
                bytecode+= "\n";
            }

            bytecode += "}\n";
            return bytecode;
        }
    };
    class Struct : public Value
    {
        int references;
        std::string name;
        std::vector<Value> values;

    public:
        Struct() = default;
        std::string toBytecode() const override
        {
            std::string bytecode = "@estructura;" + name + ";";
            for (const auto &value : values)
            {
                bytecode += "@" + value.toBytecode(); // Asume que Value tiene toBytecode()
            }
            bytecode += "@_end";
            return bytecode;
        }
    };

    template <typename T>
    class Array : public std::vector<T>
    {
    public:
        Array() = default;
        using std::vector<T>::vector;

        std::string toBytecode() const
        {
            std::string bytecode = "@array{";
            for (const auto &elemento : *this)
            {
                bytecode += bytecodeToString(elemento);
                bytecode += ';';
            }
            if (bytecode.substr(bytecode.size() - 1) == ";")
            {
                bytecode.pop_back();
            }
            bytecode += "}";
            return bytecode;
        }
    };

    // recount, valor
    struct SymbolInfo
    {
        int recount;
        std::any value;
    };

    class IRBuilder
    {
    private:
        std::vector<CodeInstruction> code;
        std::unordered_map<std::string, std::shared_ptr<SymbolInfo>> symbol_table;
        std::stack<std::shared_ptr<Function>> functionStack;

        void appendCode(const CodeInstruction &instruction)
        {
            if (!functionStack.empty())
            {
                functionStack.top()->appendCode(instruction); // Agregar a la función actual en el stack
            }
            else
            {
                code.push_back(instruction); // Agregar al IRBuilder si no hay ninguna función en el stack
            }
        }

    public:
        IRBuilder() = default;

        std::shared_ptr<Variable> createTempVal(const std::string &computedVal){
            auto temp = std::make_shared<Variable>("temp" + std::to_string(code.size()), computedVal);
            temp.get()->addReference();
            createVariable(temp);
            return temp;
        }

        void createVariable(const std::shared_ptr<Variable> &var)
        {
            appendCode(var);
            auto name = var->getName();

            if (symbol_table.find(name) == symbol_table.end())
            {
                symbol_table[name] = std::make_shared<SymbolInfo>(SymbolInfo{0, var});
            }
            else
            {
                symbol_table[name]->recount += 1;
            }
        }

        void createPrint(const std::string &data)
        {
            appendCode("@imprimir;" + data + ";");
        }

        void createReturn(const antlrcpp::Any &data) {
            if (functionStack.empty()) {
                throw std::runtime_error("No se puede usar return fuera de una función");
            }
            appendCode("@retornar;" + bytecodeToString(data) + ";");
        }

        void createComp(const std::string &op1, const std::string &op2, const std::string &symb) {
            appendCode("@comparar;" + op1 + ";" + symb + ";" + op2 + ";");
        }

        void createBeginForBlockRange(const std::string &control, const std::string &inicio, const std::string &fin) {
            appendCode("@_for;" + control + ";" + inicio + ";" + fin + ":");
        }

        void createEndForBlock() {
            appendCode("@_end");
        }

        void startIfBlock(const std::string &condition) {
            appendCode("@si;" + condition + ":");
        }
        void endBlock() {
            appendCode("@_end");
        }

        void startFunctionScope(const std::string &name, const std::vector<std::shared_ptr<UnEvaluable>> &args) {
            auto newFunction = std::make_shared<Function>(name, args);
            if (!functionStack.empty()) {
                functionStack.top()->appendCode(newFunction->toBytecode());
            }
            functionStack.push(newFunction);
        }

        void endFunctionScope()
        {
            if (!functionStack.empty())
            {
                auto completedFunction = functionStack.top();
                functionStack.pop();

                if (functionStack.empty())
                {
                    // Si no hay funciones anidadas, agregar el bytecode de la función al nivel principal de IRBuilder
                    code.push_back(completedFunction->toBytecode());
                }
                else
                {
                    // Si todavía hay una función activa, agregar la función actual a la función en el tope de la pila
                    functionStack.top()->appendCode(completedFunction->toBytecode());
                }
            }
        }

        void createiterar(const std::string &condition1, const std::string &condition2, const std::string &statement)
        {
            appendCode("@/iterar;" + condition1 + ";" + condition2 + ":");
            appendCode(statement);
            appendCode("@_end");
        }

        void createWhile(const std::string &condition, const std::string &statement)
        {
            appendCode("@_mientras;" + condition + ":");
            appendCode(statement);
            appendCode("@_end");
        }

        void startStructBlock(const std::string &name)
        {
            appendCode("@estructura;" + name + "{");
        }
        void endStructBlock()
        {
            appendCode("}");
        }

        void createStartSino()
        {
            appendCode("@_end\n@sino:");
        }

        std::string createCallFunc(const std::string &name, const std::vector<std::string> &args)
        {
            std::string str_args = "@call;" + name + "(";
            for (const auto &arg : args)
            {
                str_args += arg;
                if (arg != args.back())
                    str_args += ",";
            }
            str_args += ")";
            appendCode(str_args);
            return str_args;
        }

        void generateBytecode(std::string filename) const
        {
            std::ofstream file(filename);
            for (const auto &instruction : code)
            {
                std::visit([&file](auto &&arg) {
                    using T = std::decay_t<decltype(arg)>;
                    if constexpr (std::is_same_v<T, std::shared_ptr<Variable>>) {
                        // if (arg->getReferences() > 0) {
                            std::string varBytecode = arg->toBytecode();
                            std::cout << varBytecode << std::endl;
                            file << varBytecode << std::endl;
                        // }
                    }
                    else if constexpr (std::is_same_v<T, std::shared_ptr<Function>>) {
                        std::string funcBytecode = arg->toBytecode();
                        std::cout << funcBytecode << std::endl;
                        file << funcBytecode << std::endl;
                    }
                    else if constexpr (std::is_same_v<T, std::shared_ptr<Struct>>) {
                        // Asume que la clase Struct tiene un método toBytecode()
                        // Implementa este método si aún no lo tienes
                        std::string structBytecode = arg->toBytecode();
                        std::cout << structBytecode << std::endl;
                        file << structBytecode << std::endl;
                    }
                    else if constexpr (std::is_same_v<T, std::string>) {
                        // Para comandos simples, escribir directamente
                        std::cout << arg << std::endl;
                        file << arg << std::endl;
                    } }, instruction);
            }
            file.close();
        }
    };
}

#endif // MVLM_VALUE_H