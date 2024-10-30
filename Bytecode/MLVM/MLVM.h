#ifndef MVLM_VALUE_H
#define MVLM_VALUE_H

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

namespace MVLM {
    // Clase base para todos los valores y variables
    class Value {
    public:
        virtual std::string toBytecode() const = 0;
        virtual ~Value() = default;
    };

    // Variable
    class Variable : public Value {
    private:
        std::string name;
        std::string computedValue;
    public:
        Variable(const std::string& name, const std::string& computedVal)
            : name(name), computedValue(computedVal) {}

        std::string toBytecode() const override {
            return name + ";" + computedValue + ";";
        }
        std::string getName() const {
            return name;
        }
        std::string getValue() const {
            return computedValue;
        }
    };

    class Function {
    private:
        std::string name;
        std::vector<std::shared_ptr<Value>> arguments;
        std::vector<std::string> body;
    public:
        Function(const std::string& funcName, const std::vector<std::shared_ptr<Value>>& args)
            : name(funcName), arguments(args) {}

        void appendStatement(const std::string& statement) {
            body.push_back(statement);
        }

        std::string toBytecode() const {
            std::string bytecode = "funcion " + name + "(";
            for (const auto& arg : arguments) {
                bytecode += arg->toBytecode() + ",";
            }
            bytecode.back() = ')';  // Reemplaza la última coma
            bytecode += " {\n";

            for (const auto& stmt : body) {
                bytecode += stmt + "\n";
            }

            bytecode += "}\n";
            return bytecode;
        }
    };

    // line, recount, valor
    struct SymbolInfo {
        int line;
        int recount;
        std::any value;
    };

    class IRBuilder {
    private:
        std::vector<std::string> code;
        std::unordered_map<std::string, std::shared_ptr<SymbolInfo>> symbol_table;
        int line = 0;
        template <typename Func, typename... Args>
        auto decorador(Func func, Args&&... args) {
            return [this, func, &args...]() {
                auto res = func(std::forward<Args>(args)...);
                line++;
                return res;
            };
        }

    public:
        void createVariable(const std::shared_ptr<MVLM::Variable>& var) {
            code.push_back(var->toBytecode());
            auto name = var->getName();
            if (symbol_table.find(name) == symbol_table.end()) {
                symbol_table[name] = std::make_shared<SymbolInfo>(SymbolInfo{line++, 0, var->getValue()});
            }
            else {
                symbol_table[name]->recount += 1;
            }
        }

        std::shared_ptr<Function> createFunction(const std::string& name, const std::vector<std::shared_ptr<Value>>& args) {
            return std::make_shared<Function>(name, args);
        }

        void createPrint(const std::string& data) {
            code.push_back("@imprimir;" + data + ";");
            line++;
        }

        void createIf(const std::string& condition, const std::string& statement) {
            code.push_back("@_si;" + condition + ":");
            code.push_back(statement);
            code.push_back("@_end");
        }

        void createWhile(const std::string& condition1, const std::string& condition2, const std::string& statement) {
            code.push_back("@/iterar;" + condition1 + ";" + condition2 + ":");
            code.push_back(statement);
            code.push_back("@_end");
        }

        void generateBytecode(std::string filename) const {
            std::ofstream file(filename);
            for (const auto& line : code) {
                std::cout << line << std::endl;
                file << line << std::endl;            
            }
            file.close();
        }
    };
}

#endif // MVLM_VALUE_H
