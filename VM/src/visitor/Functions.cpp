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

std::any VMVisitor::visitFunctionparameters(VMParser::FunctionparametersContext *ctx)
{
    std::cout << "Procesando parámetros de función..." << std::endl;

    for (auto param : ctx->ID())
    {
        std::cout << "Parámetro: " << param->getText() << std::endl;
        llvm::Value *paramValue = Builder->CreateAlloca(llvm::Type::getDoubleTy(*Context), nullptr, param->getText());
        SymbolTable[param->getText()] = paramValue;
    }
    return visitChildren(ctx);
}

std::any VMVisitor::visitFunctionblock(VMParser::FunctionblockContext *ctx)
{
    std::cout << "Procesando el bloque de la función..." << std::endl;

    return visitChildren(ctx);
}

std::any VMVisitor::visitFunctiondefinition(VMParser::FunctiondefinitionContext *ctx)
{
    std::cout << "Definiendo la función: " << ctx->ID()->getText() << std::endl;

    llvm::Type *returnType = llvm::Type::getDoubleTy(*Context);
    std::vector<llvm::Type *> paramTypes(ctx->functionparameters()->ID().size(), llvm::Type::getDoubleTy(*Context));

    llvm::FunctionType *functionType = llvm::FunctionType::get(returnType, paramTypes, false);
    llvm::Function *function = llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, ctx->ID()->getText(), *Module);

    llvm::BasicBlock *block = llvm::BasicBlock::Create(*Context, "entry", function);
    Builder->SetInsertPoint(block);

    auto paramNames = ctx->functionparameters()->ID();
    auto argIt = function->arg_begin();
    for (size_t i = 0; i < paramNames.size(); ++i, ++argIt)
    {
        argIt->setName(paramNames[i]->getText());
        llvm::Value *alloca = Builder->CreateAlloca(llvm::Type::getDoubleTy(*Context), nullptr, paramNames[i]->getText());
        Builder->CreateStore(&*argIt, alloca);
        SymbolTable[paramNames[i]->getText()] = alloca;
    }

    visit(ctx->functionblock());

    if (!block->getTerminator())
    {
        llvm::Value *defaultValue = llvm::ConstantFP::get(*Context, llvm::APFloat(0.0));
        Builder->CreateRet(defaultValue);
    }

    llvm::verifyFunction(*function);

    return function;
}

std::any VMVisitor::visitReturnexpression(VMParser::ReturnexpressionContext *ctx)
{
    std::cout << "Procesando expresión de retorno..." << std::endl;

    llvm::Value *returnValue = std::any_cast<llvm::Value *>(visit(ctx->expr()));
    Builder->CreateRet(returnValue);

    return returnValue;
}

std::any VMVisitor::visitFunctionarguments(VMParser::FunctionargumentsContext *ctx)
{
    std::cout << "Procesando argumentos de función..." << std::endl;

    std::vector<llvm::Value *> args;
    for (auto expr : ctx->expr())
    {
        llvm::Value *argValue = std::any_cast<llvm::Value *>(visit(expr));
        args.push_back(argValue);
    }

    return args;
}

std::any VMVisitor::visitFunctioncall(VMParser::FunctioncallContext *ctx)
{
    std::string functionName = ctx->ID()->getText();
    if (functionName != "imprimir")
    {
        return visitChildren(ctx);
    }

    std::string format;
    std::vector<llvm::Value *> args;
    for (auto expr : ctx->functionarguments()->expr())
    {
        llvm::Value *argValue = std::any_cast<llvm::Value *>(visit(expr));
        llvm::Type *argType = argValue->getType();

        if (argType->isIntegerTy())
        {
            format += "%llu ";
        }
        else if (argType->isDoubleTy())
        {
            format += "%f ";
        }
        else if (argType->isPointerTy())
        {
            std::cout << "Pointer???" << std::endl;
            // llvm::Type *containedType = argType->getPointerElementType();
            // if (containedType && containedType->isIntegerTy(8))
            // {
            //     format += "%s ";
            // }
            // else
            // {
            //     LogsErrorsV("Puntero no compatible con cadenas.");
            //     return nullptr;
            // }
        }
        else
        {
            LogsErrorsV("Tipo no soportado para imprimir");
            return nullptr;
        }
        args.push_back(argValue);
    }
    format += "\n";

    llvm::Value *formatStr = Builder->CreateGlobalStringPtr(format);

    args.insert(args.begin(), formatStr);

    llvm::Function *printfFunc = Module->getFunction("printf");
    if (!printfFunc)
    {
        llvm::FunctionType *printfType = llvm::FunctionType::get(
            llvm::IntegerType::getInt32Ty(*Context),                       // printf devuelve int
            llvm::PointerType::getUnqual(llvm::Type::getInt8Ty(*Context)), // Primer argumento es i8*
            true                                                           // printf tiene un número variable de argumentos
        );
        printfFunc = llvm::Function::Create(printfType, llvm::Function::ExternalLinkage, "printf", *Module);
    }

    Builder->CreateCall(printfFunc, args);

    return nullptr;
}

std::any VMVisitor::visitFunctionCallExp(VMParser::FunctionCallExpContext *ctx) { return visitChildren(ctx); }

