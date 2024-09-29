#include "NyarVisitor.h"

#include "antlr4-runtime.h"
#include <llvm/Support/raw_ostream.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Value.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Function.h>

antlrcpp::Any NyarVisitor::visitProgram(NyarParser::ProgramContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitStat(NyarParser::StatContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitNumber(NyarParser::NumberContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitEqExp(NyarParser::EqExpContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitBoolean(NyarParser::BooleanContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitAritExp(NyarParser::AritExpContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitString(NyarParser::StringContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitParenExp(NyarParser::ParenExpContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitFCall(NyarParser::FCallContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitId(NyarParser::IdContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitArreglo(NyarParser::ArregloContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitEqEqExp(NyarParser::EqEqExpContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitArray(NyarParser::ArrayContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitVariable(NyarParser::VariableContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitFuncParams(NyarParser::FuncParamsContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitFuncDef(NyarParser::FuncDefContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitFuncArgs(NyarParser::FuncArgsContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitFuncCall(NyarParser::FuncCallContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitIterar(NyarParser::IterarContext *ctx) {return visitChildren(ctx);}

antlrcpp::Any NyarVisitor::visitCondicion(NyarParser::CondicionContext *ctx) {return visitChildren(ctx);}
