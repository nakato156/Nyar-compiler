#include "Visitor.h"

#include "antlr4-runtime.h"
#include "map"
#include "tuple"
#include "optional"

#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Value.h"
#include "llvm/IR/Verifier.h"

std::any VMVisitor::visitFunctionparameters(VMParser::FunctionparametersContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitFunctionblock(VMParser::FunctionblockContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitFunctiondefinition(VMParser::FunctiondefinitionContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitReturnexpression(VMParser::ReturnexpressionContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitFunctionarguments(VMParser::FunctionargumentsContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitFunctioncall(VMParser::FunctioncallContext *ctx) { 
    // Verificar si el nombre de la función es "imprimir"
    std::string functionName = ctx->ID()->getText();
    if (functionName != "imprimir") {
        return visitChildren(ctx); // Manejar otras funciones normalmente
    }

    // Crear el formato de impresión (ej. "%d %f %s\n")
    std::string format;
    std::vector<llvm::Value *> args;
    for (auto expr : ctx->functionarguments()->expr()) {
        llvm::Value *argValue = std::any_cast<llvm::Value *>(visit(expr));
        llvm::Type *argType = argValue->getType();

        if (argType->isIntegerTy()) {
            format += "%llu ";
        } else if (argType->isDoubleTy()) {
            format += "%f ";   
        } else {
            LogsErrorsV("Tipo no soportado para imprimir");
            return nullptr;
        }
        args.push_back(argValue);
    }
    format += "\n";

    // Crear el formato como una constante en el módulo
    llvm::Value *formatStr = Builder->CreateGlobalStringPtr(format);

    // Agregar el formato como el primer argumento
    args.insert(args.begin(), formatStr);

    // Obtener o declarar printf si aún no existe
    llvm::Function *printfFunc = Module->getFunction("printf");
    if (!printfFunc) {
        llvm::FunctionType *printfType = llvm::FunctionType::get(
            llvm::IntegerType::getInt64Ty(*Context), 
            llvm::PointerType::getUnqual(llvm::Type::getInt64Ty(*Context)), 
            true
        );
        printfFunc = llvm::Function::Create(printfType, llvm::Function::ExternalLinkage, "printf", *Module);
    }

    // Llamar a printf
    Builder->CreateCall(printfFunc, args);

    return nullptr;
}
std::any VMVisitor::visitFunctionCallExp(VMParser::FunctionCallExpContext *ctx) { return visitChildren(ctx); }

