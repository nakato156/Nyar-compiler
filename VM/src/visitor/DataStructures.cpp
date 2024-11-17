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

std::any VMVisitor::visitArrayExp(VMParser::ArrayExpContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitStringExp(VMParser::StringExpContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitNullExp(VMParser::NullExpContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitNumberExp(VMParser::NumberExpContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitAccessObjectExp(VMParser::AccessObjectExpContext *ctx)
{
    return visitChildren(ctx);
}

std::any VMVisitor::visitArray(VMParser::ArrayContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitArrayblock(VMParser::ArrayblockContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitStruct(VMParser::StructContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitAccessObject(VMParser::AccessObjectContext *ctx) { return visitChildren(ctx); }