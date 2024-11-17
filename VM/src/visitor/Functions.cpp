#include "Visitor.h"

#include "antlr4-runtime.h"
#include "map"
#include "tuple"
#include "optional"

#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Value.h"
#include "llvm/IR/Verifier.h"

std::any VMVisitor::visitFunctionparameters(VMParser::FunctionparametersContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitFunctionblock(VMParser::FunctionblockContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitFunctiondefinition(VMParser::FunctiondefinitionContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitReturnexpression(VMParser::ReturnexpressionContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitFunctionarguments(VMParser::FunctionargumentsContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitFunctioncall(VMParser::FunctioncallContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitFunctionCallExp(VMParser::FunctionCallExpContext *ctx) { return visitChildren(ctx); }
