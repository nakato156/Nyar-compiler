
// Generated from ./VMParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "VMParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by VMParser.
 */
class  VMParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by VMParser.
   */
    virtual std::any visitProgram(VMParser::ProgramContext *context) = 0;

    virtual std::any visitStat(VMParser::StatContext *context) = 0;

    virtual std::any visitNumber(VMParser::NumberContext *context) = 0;

    virtual std::any visitEqExp(VMParser::EqExpContext *context) = 0;

    virtual std::any visitBoolean(VMParser::BooleanContext *context) = 0;

    virtual std::any visitAritExp(VMParser::AritExpContext *context) = 0;

    virtual std::any visitString(VMParser::StringContext *context) = 0;

    virtual std::any visitParenExp(VMParser::ParenExpContext *context) = 0;

    virtual std::any visitFCall(VMParser::FCallContext *context) = 0;

    virtual std::any visitId(VMParser::IdContext *context) = 0;

    virtual std::any visitNeqExp(VMParser::NeqExpContext *context) = 0;

    virtual std::any visitArreglo(VMParser::ArregloContext *context) = 0;

    virtual std::any visitEqEqExp(VMParser::EqEqExpContext *context) = 0;

    virtual std::any visitArray(VMParser::ArrayContext *context) = 0;

    virtual std::any visitVariable(VMParser::VariableContext *context) = 0;

    virtual std::any visitFuncParams(VMParser::FuncParamsContext *context) = 0;

    virtual std::any visitFuncDef(VMParser::FuncDefContext *context) = 0;

    virtual std::any visitFuncArgs(VMParser::FuncArgsContext *context) = 0;

    virtual std::any visitFuncCall(VMParser::FuncCallContext *context) = 0;

    virtual std::any visitIterar(VMParser::IterarContext *context) = 0;

    virtual std::any visitCondicion(VMParser::CondicionContext *context) = 0;


};

