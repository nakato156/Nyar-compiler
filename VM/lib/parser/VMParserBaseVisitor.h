
// Generated from ./VMParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "VMParserVisitor.h"


/**
 * This class provides an empty implementation of VMParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  VMParserBaseVisitor : public VMParserVisitor {
public:

  virtual std::any visitProgram(VMParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStat(VMParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdExp(VMParser::IdExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCallExp(VMParser::FunctionCallExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicExp(VMParser::LogicExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringExp(VMParser::StringExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessObjectExp(VMParser::AccessObjectExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExp(VMParser::ParenExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullExp(VMParser::NullExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumberExp(VMParser::NumberExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMathExp(VMParser::MathExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayExp(VMParser::ArrayExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(VMParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor(VMParser::ForContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf(VMParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse(VMParser::ElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct(VMParser::StructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray(VMParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayblock(VMParser::ArrayblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(VMParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionparameters(VMParser::FunctionparametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionblock(VMParser::FunctionblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctiondefinition(VMParser::FunctiondefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnexpression(VMParser::ReturnexpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionarguments(VMParser::FunctionargumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessObject(VMParser::AccessObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctioncall(VMParser::FunctioncallContext *ctx) override {
    return visitChildren(ctx);
  }


};

