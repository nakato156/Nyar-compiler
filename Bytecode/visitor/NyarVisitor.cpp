#include "NyarVisitor.h"

#include "antlr4-runtime.h"
#include <llvm/Support/raw_ostream.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Value.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Function.h>

antlrcpp::Any NyarVisitor::visitProgram(NyarParser::ProgramContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitStat(NyarParser::StatContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitNumber(NyarParser::NumberContext *ctx) {
    auto value = ctx->NUM()->getText();
    if(value.find('.') != std::string::npos){
        return llvm::ConstantFP::get(*context, llvm::APFloat(std::stod(value)));
    }
    return llvm::ConstantInt::get(*context, llvm::APInt(32, std::stoi(value), true));
}

antlrcpp::Any NyarVisitor::visitVariable(NyarParser::VariableContext *ctx) {
    // Obtén el identificador de la variable
    std::string varName = ctx->ID()->getText();

    // Visita la expresión y obtiene su valor (esto puede ser un valor o un puntero a un valor en la memoria)
    auto exprValue = visit(ctx->expr());

    // Verifica que el valor de la expresión sea del tipo esperado, aquí asumimos que es un double
    llvm::Value *value;
    if (exprValue.type() == typeid(llvm::Value*)) {
        value = std::any_cast<llvm::Value*>(exprValue);
    } else {
        std::cerr << exprValue.type().name() << std::endl;
        // Maneja el error si el tipo no es válido
        throw std::runtime_error("Invalid expression type");
    }

    // Crea la entrada en la memoria para la variable
    llvm::AllocaInst *alloca = CreateEntryBlockAlloca(varName);
    
    // Almacena el valor de la expresión en la memoria
    builder->CreateStore(value, alloca);

    // Guarda la variable en el mapa de memoria
    memory[varName] = std::any(alloca);

    return nullptr;
}

antlrcpp::Any NyarVisitor::visitBoolean(NyarParser::BooleanContext *ctx) {
    std::string varName = ctx->getText();
    // bool vars
    if(varName == "verdadero") {
        llvm::Value *val = llvm::ConstantInt::get(*context, llvm::APInt(1, 1));
        return val;
    }
    if(varName == "falso") {
        llvm::Value *val = llvm::ConstantInt::get(*context, llvm::APInt(1, 0));
        return val;
    }

    // Busca la variable en la memoria
    if (memory.find(varName) != memory.end()) {
        return memory[varName];  // Ahora memory almacena llvm::Value*
    } else {
        std::cerr << "Variable no encontrada: " << varName << std::endl;
        return nullptr;
    }
}

antlrcpp::Any NyarVisitor::visitString(NyarParser::StringContext *ctx) {
    std::string str = ctx->STRING()->getText();
    str = str.substr(1, str.size() - 2);  // Quitar comillas

    llvm::Constant *stringConstant = llvm::ConstantDataArray::getString(*context, str);
    llvm::GlobalVariable *stringGlobal = new llvm::GlobalVariable(
        *module,
        stringConstant->getType(),
        true, // Es constante
        llvm::GlobalValue::PrivateLinkage, // Tipo de enlace
        stringConstant, // Valor de la variable global
        "" // Nombre de la variable global
    );
    
    // Crear un puntero a la cadena global
    llvm::Value *stringPtr = builder->CreatePointerCast(stringGlobal, llvm::Type::getInt8Ty(*context));
    return stringPtr;
}

antlrcpp::Any NyarVisitor::visitEqExp(NyarParser::EqExpContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitAritExp(NyarParser::AritExpContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitParenExp(NyarParser::ParenExpContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitFCall(NyarParser::FCallContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitId(NyarParser::IdContext *ctx) {return visitChildren(ctx);}

// Joaquin
//no es lo mismo que visit array? xd
antlrcpp::Any NyarVisitor::visitArreglo(NyarParser::ArregloContext *ctx) {

}

antlrcpp::Any NyarVisitor::visitEqEqExp(NyarParser::EqEqExpContext *ctx) {
}

antlrcpp::Any NyarVisitor::visitArray(NyarParser::ArrayContext *ctx) {
    std::vector<antlrcpp::Any> elements;
    for (auto expr: ctx->expr()){
        elements.push_back(visit(expr));
    }
    return elements
}

antlrcpp::Any NyarVisitor::visitFuncParams(NyarParser::FuncParamsContext *ctx) {
std::vector<std::string>params;
for(auto id: ctx->ID()){
    params.push_back(id->getText());
 }   
 return params;
}

antlrcpp::Any NyarVisitor::visitFuncDef(NyarParser::FuncDefContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitFuncArgs(NyarParser::FuncArgsContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitFuncCall(NyarParser::FuncCallContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitIterar(NyarParser::IterarContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitCondicion(NyarParser::CondicionContext *ctx) {
    bool condition =visit(ctx->expr()).as<bool>();
    if (condition)
        return visitChildren(ctx->stat(0));
    else if (ctx->stat().size()>1)
        return visitChildren(ctx->stat(1));
    return nullptr;
}
