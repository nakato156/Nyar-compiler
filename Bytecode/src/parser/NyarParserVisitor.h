
// Generated from NyarParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "NyarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by NyarParser.
 */
class  NyarParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by NyarParser.
   */
    virtual std::any visitProgram(NyarParser::ProgramContext *context) = 0;

    virtual std::any visitStat(NyarParser::StatContext *context) = 0;

    virtual std::any visitReturnExp(NyarParser::ReturnExpContext *context) = 0;

    virtual std::any visitMemberAccess(NyarParser::MemberAccessContext *context) = 0;

    virtual std::any visitAritExp(NyarParser::AritExpContext *context) = 0;

    virtual std::any visitString(NyarParser::StringContext *context) = 0;

    virtual std::any visitLogicalAndExp(NyarParser::LogicalAndExpContext *context) = 0;

    virtual std::any visitNumber(NyarParser::NumberContext *context) = 0;

    virtual std::any visitLogicalOrExp(NyarParser::LogicalOrExpContext *context) = 0;

    virtual std::any visitBoolean(NyarParser::BooleanContext *context) = 0;

    virtual std::any visitNnull(NyarParser::NnullContext *context) = 0;

    virtual std::any visitComparisonExp(NyarParser::ComparisonExpContext *context) = 0;

    virtual std::any visitParenExp(NyarParser::ParenExpContext *context) = 0;

    virtual std::any visitFCall(NyarParser::FCallContext *context) = 0;

    virtual std::any visitId(NyarParser::IdContext *context) = 0;

    virtual std::any visitArreglo(NyarParser::ArregloContext *context) = 0;

    virtual std::any visitEstructura(NyarParser::EstructuraContext *context) = 0;

    virtual std::any visitHint(NyarParser::HintContext *context) = 0;

    virtual std::any visitArray(NyarParser::ArrayContext *context) = 0;

    virtual std::any visitVariable(NyarParser::VariableContext *context) = 0;

    virtual std::any visitFuncParams(NyarParser::FuncParamsContext *context) = 0;

    virtual std::any visitFuncBlock(NyarParser::FuncBlockContext *context) = 0;

    virtual std::any visitFuncDef(NyarParser::FuncDefContext *context) = 0;

    virtual std::any visitFuncArgs(NyarParser::FuncArgsContext *context) = 0;

    virtual std::any visitFuncCall(NyarParser::FuncCallContext *context) = 0;

    virtual std::any visitBlock(NyarParser::BlockContext *context) = 0;

    virtual std::any visitStruct(NyarParser::StructContext *context) = 0;

    virtual std::any visitIterar(NyarParser::IterarContext *context) = 0;

    virtual std::any visitElse(NyarParser::ElseContext *context) = 0;

    virtual std::any visitElseif(NyarParser::ElseifContext *context) = 0;

    virtual std::any visitCondicion(NyarParser::CondicionContext *context) = 0;


};

