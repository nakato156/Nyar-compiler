
// Generated from ./VMParser.g4 by ANTLR 4.13.2

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

  virtual std::any visitNumber(VMParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqExp(VMParser::EqExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolean(VMParser::BooleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAritExp(VMParser::AritExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(VMParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExp(VMParser::ParenExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFCall(VMParser::FCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(VMParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNeqExp(VMParser::NeqExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArreglo(VMParser::ArregloContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqEqExp(VMParser::EqEqExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray(VMParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(VMParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncParams(VMParser::FuncParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDef(VMParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncArgs(VMParser::FuncArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCall(VMParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIterar(VMParser::IterarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondicion(VMParser::CondicionContext *ctx) override {
    return visitChildren(ctx);
  }


};

