#include "NyarVisitor.h"

#include "antlr4-runtime.h"
#include "utils/strfunctions.h"
#include <optional>
#include "MLVM/MLVM.h"
#include <llvm/Support/raw_ostream.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Value.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Function.h>
#include "Include/SymbolTable.h"
#include <iostream>
#include <typeinfo> 

std::shared_ptr<SymbolTable>currentScope=std::make_shared<SymbolTable>();

antlrcpp::Any NyarVisitor::visitProgram(NyarParser::ProgramContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitStat(NyarParser::StatContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitNumber(NyarParser::NumberContext *ctx) {
    auto value = ctx->NUM()->getText();
    if(value.find('.') != std::string::npos){
        return std::stod(value);
    }
    return std::stoi(value);
}

antlrcpp::Any NyarVisitor::visitVariable(NyarParser::VariableContext *ctx) {
    // Obtén el identificador de la variable
    std::string varName = ctx->ID()->getText();

    // Visita la expresión y obtiene su valor (esto puede ser un valor o un puntero a un valor en la memoria)
    auto exprValue = visit(ctx->expr());
    std::string computedValue;
    
    if (exprValue.type() == typeid(double)) {
        computedValue = std::to_string(std::any_cast<double>(exprValue));
    } else if (exprValue.type() == typeid(int)) {
        computedValue = std::to_string(std::any_cast<int>(exprValue));
    } else if (exprValue.type() == typeid(std::string)) {
        computedValue = std::any_cast<std::string>(exprValue);
    } else {
        throw std::runtime_error("Unexpected type in exprValue");
    }

    std::cout << "varName: " << varName << " computedValue: " << computedValue << std::endl;
    // Crea la entrada en la memoria para la variable
    auto var = std::make_shared<MVLM::Variable>(varName, computedValue);
    
    // Almacena el valor de la expresión en la memoria
    MVLMBuilder->createVariable(var);
    memory[varName] = exprValue;

    return var;
}

antlrcpp::Any NyarVisitor::visitBoolean(NyarParser::BooleanContext *ctx) {
    std::string varName = ctx->getText();
    std::cout << "boolName: " << varName << std::endl;
    // bool vars
    return int(varName == "verdadero");
}

antlrcpp::Any NyarVisitor::visitString(NyarParser::StringContext *ctx) {
    std::string str = ctx->STRING()->getText();
    str = str.substr(1, str.size() - 2);  // Quitar comillas
   return str;
}

antlrcpp::Any NyarVisitor::visitEqExp(NyarParser::EqExpContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitAritExp(NyarParser::AritExpContext *ctx) {
    // Visita las expresiones izquierda y derecha
    auto leftAny = visit(ctx->expr(0));
    auto rightAny = visit(ctx->expr(1));

    // Determina los valores numéricos (convertir a double para manejo uniforme)
    std::optional<double> leftNumVal;
    std::optional<double> rightNumVal;
    
    std::optional<std::string> leftStrVal;
    std::optional<std::string> rightStrVal;
    
    // Manejar tipo de left
    if (leftAny.type() == typeid(int)) {
        leftNumVal = static_cast<double>(std::any_cast<int>(leftAny));
    } else if (leftAny.type() == typeid(double)) {
        leftNumVal = std::any_cast<double>(leftAny);
    } else if (leftAny.type() == typeid(std::string)) {
        leftStrVal = std::any_cast<std::string>(leftAny);
    } else {
        throw std::runtime_error("Unsupported type for left operand in arithmetic expression");
    }

    // Manejar tipo de right
    if (rightAny.type() == typeid(int)) {
        rightNumVal = static_cast<double>(std::any_cast<int>(rightAny));
    } else if (rightAny.type() == typeid(double)) {
        rightNumVal = std::any_cast<double>(rightAny);
    } else if (rightAny.type() == typeid(std::string)){
        rightStrVal = std::any_cast<std::string>(rightAny);
    } else {
        throw std::runtime_error("Unsupported type for right operand in arithmetic expression");
    }


    // Obtener el operador
    std::string op = ctx->op->getText();

    // Calcular el resultado
    std::optional<double> resultNum;
    std::optional<std::string> resultStr;

    if (op == "+") {
        if (leftNumVal && rightNumVal) {
            resultNum = *leftNumVal + *rightNumVal;
        } else if (leftStrVal && rightStrVal) {
            resultStr = *leftStrVal + *rightStrVal;
        } else {
            throw std::runtime_error("Operación de suma no soportada para los tipos de operandos");
        }
    } else if (op == "-") {
       if (leftNumVal && rightNumVal) {
            resultNum = *leftNumVal - *rightNumVal;
        } else {
            throw std::runtime_error("Operación de suma no soportada para los tipos de operandos");
        }
    } else if (op == "*") {
       if (leftNumVal && rightNumVal) {
            resultNum = *leftNumVal + *rightNumVal;
        } else if (leftStrVal && rightNumVal) {
            resultStr = Strfunctions::repetir(*leftStrVal, *rightNumVal);
        } else if (leftNumVal && rightStrVal) {
            resultStr = Strfunctions::repetir(*rightStrVal, *leftNumVal);
        } else {
            throw std::runtime_error("Operación de suma no soportada para los tipos de operandos");
        }
    } else if (op == "/") {
        if (leftStrVal || rightStrVal) {
            throw std::runtime_error("Operación de división no soportada para cadenas");
        }
        if (rightNumVal == 0.0) {
            throw std::runtime_error("Division por cero");
        }
        resultNum = *leftNumVal / *rightNumVal;
    } else {
        throw std::runtime_error("Operador aritmético no soportado: " + op);
    }

    std::cout << "aritExp result Num: " << *resultNum << std::endl;
    std::cout << "aritExp result Str: " << *resultStr << std::endl;
    if(resultNum) return *resultNum;
    else return *resultStr;
}

antlrcpp::Any NyarVisitor::visitParenExp(NyarParser::ParenExpContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitFCall(NyarParser::FCallContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any NyarVisitor::visitId(NyarParser::IdContext *ctx) {
    std::string varName = ctx->ID()->getText();
    std::cout << "id: " << varName << std::endl;

    // Busca la variable en la tabla de símbolos
    if (memory.find(varName) != memory.end()) {
        return memory[varName];
    } else {
        throw std::runtime_error("Variable no encontrada: " + varName);
    }
}

// Joaquin
//visita el arreglo y retorna sus elementos
antlrcpp::Any NyarVisitor::visitArreglo(NyarParser::ArregloContext *ctx) {
    std::vector<antlrcpp::Any> elements;
    // for (auto expr: ctx->expr()){
            // elements.push_back(visit(expr));
    // }
    return elements;
}

antlrcpp::Any NyarVisitor::visitEqEqExp(NyarParser::EqEqExpContext *ctx) {
}
 
antlrcpp::Any NyarVisitor::visitArray(NyarParser::ArrayContext *ctx) {
    
}

//visita los parametros de una funcion y devuelve la lista de nombres de estos
antlrcpp::Any NyarVisitor::visitFuncParams(NyarParser::FuncParamsContext *ctx) {
    std::vector<std::string> params;
    for (auto id : ctx->ID()) {
        params.push_back(id->getText());
    }
    return params;
}
//la definicion de una funcion y la agrega a la tabla de simbolos
antlrcpp::Any NyarVisitor::visitFuncDef(NyarParser::FuncDefContext *ctx) {
    std::string funcName = ctx->ID()->getText();
    std::vector<std::string> params;
    for (auto param : ctx->funcParams()->ID()) {
        params.push_back(param->getText());
    }

    llvm::FunctionType *funcType = llvm::FunctionType::get(builder->getVoidTy(), false); 
    llvm::Function *function = llvm::Function::Create(funcType, llvm::Function::ExternalLinkage, funcName, module.get());

    //se guardaa el nombre de las funciones en la tabla de simbolos
    currentScope->defineFunction(funcName, params, function);
    return nullptr;
}
//visita los argumentos de una funcion durante la llamada
antlrcpp::Any NyarVisitor::visitFuncArgs(NyarParser::FuncArgsContext *ctx) {
    std::vector<llvm::Value *> args;
    for (auto expr : ctx->expr()) {
        llvm::Value *argValue = std::any_cast<llvm::Value *>(visit(expr));
        args.push_back(argValue);
    }
    return args;
}

// Visita la llamada a la funcion y genera el codigo ir 
antlrcpp::Any NyarVisitor::visitFuncCall(NyarParser::FuncCallContext *ctx) {
    //traemos el nombre de la funcion
    std::string funcName = ctx->ID()->getText();

    //traemos a la funcion de la tabla de simbolos
    auto funcSymbol = currentScope->getFunction(funcName);

    // Ccomprobamos si la funcion existe en este ambito
    if (funcSymbol) {
        llvm::Function *llvmFunc = funcSymbol->llvmFunc;
        std::vector<llvm::Value *> args;

        // evaluamos cada argumento de la llamada y los pasa como argumentos al crear la llamada
        if (ctx->funcArgs()) {
            for (auto expr : ctx->funcArgs()->expr()) {
                llvm::Value *argValue = std::any_cast<llvm::Value *>(visit(expr));
                args.push_back(argValue);
            }
        }
        
        // Crea la llamada a la func con los argumentos evaluados
        builder->CreateCall(llvmFunc, args);
    } else {
        throw std::runtime_error("Error: La función '" + funcName + "' no está definida.\n");
    }

    return nullptr;
}

antlrcpp::Any NyarVisitor::visitIterar(NyarParser::IterarContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitCondicion(NyarParser::CondicionContext *ctx) {return visitChildren(ctx);}