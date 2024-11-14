
// Generated from ./NyarParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NyarParserVisitor.h"


/**
 * This class provides an empty implementation of NyarParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NyarParserBaseVisitor : public NyarParserVisitor {
public:

  virtual std::any visitProgram(NyarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStat(NyarParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnExp(NyarParser::ReturnExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberAccess(NyarParser::MemberAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAritExp(NyarParser::AritExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(NyarParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalAndExp(NyarParser::LogicalAndExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(NyarParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalOrExp(NyarParser::LogicalOrExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolean(NyarParser::BooleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNnull(NyarParser::NnullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonExp(NyarParser::ComparisonExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExp(NyarParser::ParenExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFCall(NyarParser::FCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(NyarParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArreglo(NyarParser::ArregloContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEstructura(NyarParser::EstructuraContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHint(NyarParser::HintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray(NyarParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(NyarParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncParams(NyarParser::FuncParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncBlock(NyarParser::FuncBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDef(NyarParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncArgs(NyarParser::FuncArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCall(NyarParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(NyarParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct(NyarParser::StructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIterar(NyarParser::IterarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse(NyarParser::ElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseif(NyarParser::ElseifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondicion(NyarParser::CondicionContext *ctx) override {
    return visitChildren(ctx);
  }


};

