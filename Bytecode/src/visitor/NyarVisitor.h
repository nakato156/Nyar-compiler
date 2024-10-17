#ifndef __KC_VISITOR_IMPL__
#define __KC_VISITOR_IMPL__

#include <memory>
#include <any>
#include <string>
#include <system_error>

#include "../lib/NyarParserBaseVisitor.h"

#include "antlr4-runtime.h"
#include <llvm/Support/raw_ostream.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Value.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Function.h>

class NyarVisitor : public NyarParserBaseVisitor
{
private:
    std::map<std::string, std::any> memory;
    std::unique_ptr<llvm::LLVMContext> context;
    std::unique_ptr<llvm::Module> module;
    std::unique_ptr<llvm::IRBuilder<>> builder;

    llvm::Function *F;
    llvm::AllocaInst *CreateEntryBlockAlloca(llvm::StringRef varName)
    {
        llvm::IRBuilder<> TmpB(&F->getEntryBlock(), F->getEntryBlock().begin());
        return TmpB.CreateAlloca(llvm::Type::getDoubleTy(*context), nullptr, varName);
    }

public:
    NyarVisitor() : 
        context(std::make_unique<llvm::LLVMContext>()),
        module(std::make_unique<llvm::Module>("NyarModule", *context)),
        builder(std::make_unique<llvm::IRBuilder<>>(*context)) {}

    void compile() {
        std::error_code error;
        llvm::raw_fd_ostream outLL("maid.ll", error);
        module->print(outLL, nullptr);
    }

    virtual antlrcpp::Any visitProgram(NyarParser::ProgramContext *ctx) override;

    virtual antlrcpp::Any visitStat(NyarParser::StatContext *ctx) override;

    virtual antlrcpp::Any visitNumber(NyarParser::NumberContext *ctx) override;

    virtual antlrcpp::Any visitEqExp(NyarParser::EqExpContext *ctx) override;

    virtual antlrcpp::Any visitBoolean(NyarParser::BooleanContext *ctx) override;

    virtual antlrcpp::Any visitAritExp(NyarParser::AritExpContext *ctx) override;

    virtual antlrcpp::Any visitString(NyarParser::StringContext *ctx) override;

    virtual antlrcpp::Any visitParenExp(NyarParser::ParenExpContext *ctx) override;

    virtual antlrcpp::Any visitFCall(NyarParser::FCallContext *ctx) override;

    virtual antlrcpp::Any visitId(NyarParser::IdContext *ctx) override;

    virtual antlrcpp::Any visitArreglo(NyarParser::ArregloContext *ctx) override;

    virtual antlrcpp::Any visitEqEqExp(NyarParser::EqEqExpContext *ctx) override;

    virtual antlrcpp::Any visitArray(NyarParser::ArrayContext *ctx) override;

    virtual antlrcpp::Any visitVariable(NyarParser::VariableContext *ctx) override;

    virtual antlrcpp::Any visitFuncParams(NyarParser::FuncParamsContext *ctx) override;

    virtual antlrcpp::Any visitFuncDef(NyarParser::FuncDefContext *ctx) override;

    virtual antlrcpp::Any visitFuncArgs(NyarParser::FuncArgsContext *ctx) override;

    virtual antlrcpp::Any visitFuncCall(NyarParser::FuncCallContext *ctx) override;

    virtual antlrcpp::Any visitIterar(NyarParser::IterarContext *ctx) override;

    virtual antlrcpp::Any visitCondicion(NyarParser::CondicionContext *ctx) override;
};
#endif