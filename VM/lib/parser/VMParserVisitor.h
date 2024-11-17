
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

    virtual std::any visitIdExp(VMParser::IdExpContext *context) = 0;

    virtual std::any visitFunctionCallExp(VMParser::FunctionCallExpContext *context) = 0;

    virtual std::any visitLogicExp(VMParser::LogicExpContext *context) = 0;

    virtual std::any visitStringExp(VMParser::StringExpContext *context) = 0;

    virtual std::any visitAccessObjectExp(VMParser::AccessObjectExpContext *context) = 0;

    virtual std::any visitNullExp(VMParser::NullExpContext *context) = 0;

    virtual std::any visitNumberExp(VMParser::NumberExpContext *context) = 0;

    virtual std::any visitMathExp(VMParser::MathExpContext *context) = 0;

    virtual std::any visitArrayExp(VMParser::ArrayExpContext *context) = 0;

    virtual std::any visitVariable(VMParser::VariableContext *context) = 0;

    virtual std::any visitWhile(VMParser::WhileContext *context) = 0;

    virtual std::any visitIf(VMParser::IfContext *context) = 0;

    virtual std::any visitElse(VMParser::ElseContext *context) = 0;

    virtual std::any visitStruct(VMParser::StructContext *context) = 0;

    virtual std::any visitArray(VMParser::ArrayContext *context) = 0;

    virtual std::any visitArrayblock(VMParser::ArrayblockContext *context) = 0;

    virtual std::any visitBlock(VMParser::BlockContext *context) = 0;

    virtual std::any visitFunctionparameters(VMParser::FunctionparametersContext *context) = 0;

    virtual std::any visitFunctionblock(VMParser::FunctionblockContext *context) = 0;

    virtual std::any visitFunctiondefinition(VMParser::FunctiondefinitionContext *context) = 0;

    virtual std::any visitReturnexpression(VMParser::ReturnexpressionContext *context) = 0;

    virtual std::any visitFunctionarguments(VMParser::FunctionargumentsContext *context) = 0;

    virtual std::any visitAccessObject(VMParser::AccessObjectContext *context) = 0;

    virtual std::any visitFunctioncall(VMParser::FunctioncallContext *context) = 0;


};

