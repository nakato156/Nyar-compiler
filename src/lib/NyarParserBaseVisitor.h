
// Generated from NyarParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "NyarParserVisitor.h"


/**
 * This class provides an empty implementation of NyarParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NyarParserBaseVisitor : public NyarParserVisitor {
public:

  virtual antlrcpp::Any visitProgram(NyarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(NyarParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(NyarParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqExp(NyarParser::EqExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolean(NyarParser::BooleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAritExp(NyarParser::AritExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(NyarParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenExp(NyarParser::ParenExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFCall(NyarParser::FCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId(NyarParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArreglo(NyarParser::ArregloContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqEqExp(NyarParser::EqEqExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray(NyarParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(NyarParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncParams(NyarParser::FuncParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncDef(NyarParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncArgs(NyarParser::FuncArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncCall(NyarParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterar(NyarParser::IterarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondicion(NyarParser::CondicionContext *ctx) override {
    return visitChildren(ctx);
  }


};

