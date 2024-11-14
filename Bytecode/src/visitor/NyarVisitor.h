#ifndef __KC_VISITOR_IMPL__
#define __KC_VISITOR_IMPL__

#include <memory>
#include <any>
#include <string>
#include <system_error>
#include "Include/SymbolTable.h"
#include "parser/NyarParserBaseVisitor.h"
#include "antlr4-runtime.h"
#include "MLVM/MLVM.h"

class NyarVisitor : public NyarParserBaseVisitor
{
private:
    std::map<std::string, std::shared_ptr<MLVM::Variable>> memory;
    std::unique_ptr<MLVM::IRBuilder> MLVMBuilder;    
    std::shared_ptr<SymbolTable>currentScope=std::make_shared<SymbolTable>();

public:
    NyarVisitor() :
        MLVMBuilder(std::make_unique<MLVM::IRBuilder>()) {}

    void compile() {
        MLVMBuilder->generateBytecode("maid.ny");
    }

    virtual antlrcpp::Any visitProgram(NyarParser::ProgramContext *ctx) override;

    virtual antlrcpp::Any visitStat(NyarParser::StatContext *ctx) override;

    virtual antlrcpp::Any visitReturnExp(NyarParser::ReturnExpContext *ctx) override;

    virtual antlrcpp::Any visitMemberAccess(NyarParser::MemberAccessContext *ctx) override;

    virtual antlrcpp::Any visitNumber(NyarParser::NumberContext *ctx) override;

    virtual antlrcpp::Any visitComparisonExp(NyarParser::ComparisonExpContext *ctx) override;

    virtual antlrcpp::Any visitBoolean(NyarParser::BooleanContext *ctx) override;

    virtual antlrcpp::Any visitNnull(NyarParser::NnullContext *ctx) override;

    virtual antlrcpp::Any visitAritExp(NyarParser::AritExpContext *ctx) override;

    virtual antlrcpp::Any visitString(NyarParser::StringContext *ctx) override;

    virtual antlrcpp::Any visitParenExp(NyarParser::ParenExpContext *ctx) override;

    virtual antlrcpp::Any visitFCall(NyarParser::FCallContext *ctx) override;

    virtual antlrcpp::Any visitId(NyarParser::IdContext *ctx) override;

    virtual antlrcpp::Any visitArreglo(NyarParser::ArregloContext *ctx) override;
    
    virtual antlrcpp::Any visitEstructura(NyarParser::EstructuraContext *ctx) override;

    //virtual antlrcpp::Any visitArray(NyarParser::ArrayContext *ctx) override;

    virtual antlrcpp::Any visitVariable(NyarParser::VariableContext *ctx) override;

    virtual antlrcpp::Any visitFuncParams(NyarParser::FuncParamsContext *ctx) override;

    virtual antlrcpp::Any visitFuncDef(NyarParser::FuncDefContext *ctx) override;

    virtual antlrcpp::Any visitFuncArgs(NyarParser::FuncArgsContext *ctx) override;

    virtual antlrcpp::Any visitFuncCall(NyarParser::FuncCallContext *ctx) override;

    virtual antlrcpp::Any visitIterar(NyarParser::IterarContext *ctx) override;

    virtual antlrcpp::Any visitCondicion(NyarParser::CondicionContext *ctx) override;
};
#endif