
// Generated from NyarParser.g4 by ANTLR 4.9.2

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
    virtual antlrcpp::Any visitProgram(NyarParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStat(NyarParser::StatContext *context) = 0;

    virtual antlrcpp::Any visitNumber(NyarParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitEqExp(NyarParser::EqExpContext *context) = 0;

    virtual antlrcpp::Any visitBoolean(NyarParser::BooleanContext *context) = 0;

    virtual antlrcpp::Any visitAritExp(NyarParser::AritExpContext *context) = 0;

    virtual antlrcpp::Any visitString(NyarParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitParenExp(NyarParser::ParenExpContext *context) = 0;

    virtual antlrcpp::Any visitFCall(NyarParser::FCallContext *context) = 0;

    virtual antlrcpp::Any visitId(NyarParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitArreglo(NyarParser::ArregloContext *context) = 0;

    virtual antlrcpp::Any visitEqEqExp(NyarParser::EqEqExpContext *context) = 0;

    virtual antlrcpp::Any visitArray(NyarParser::ArrayContext *context) = 0;

    virtual antlrcpp::Any visitVariable(NyarParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitFuncParams(NyarParser::FuncParamsContext *context) = 0;

    virtual antlrcpp::Any visitFuncDef(NyarParser::FuncDefContext *context) = 0;

    virtual antlrcpp::Any visitFuncArgs(NyarParser::FuncArgsContext *context) = 0;

    virtual antlrcpp::Any visitFuncCall(NyarParser::FuncCallContext *context) = 0;

    virtual antlrcpp::Any visitIterar(NyarParser::IterarContext *context) = 0;

    virtual antlrcpp::Any visitCondicion(NyarParser::CondicionContext *context) = 0;


};

