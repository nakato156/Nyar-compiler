#include "Visitor.h"

#include "antlr4-runtime.h"

void VMVisitor::saveModule(conststd::string &filePath)
{
   std::error_code errorCode;
    llvm::raw_fd_ostream outLL(filePath, errorCode);
    Module->print(outLL, nullptr);
}

std::any VMVisitor::visitProgram(VMParser::ProgramContext *ctx)
{
    return visitChildren(ctx);
}
std::any VMVisitor::visitStat(VMParser::StatContext *ctx)
{
    return visitChildren(ctx);
}

std::any VMVisitor::visitIdExp(VMParser::IdExpContext *ctx){}
std::any VMVisitor::visitFunctionCallExp(VMParser::FunctionCallExpContext *ctx){}
std::any VMVisitor::visitLogicExp(VMParser::LogicExpContext *ctx){}
std::any VMVisitor::visitStringExp(VMParser::StringExpContext *ctx){}
std::any VMVisitor::visitAccessObjectExp(VMParser::AccessObjectExpContext *ctx){}
std::any VMVisitor::visitBooleanExp(VMParser::BooleanExpContext *ctx){}
std::any VMVisitor::visitNullExp(VMParser::NullExpContext *ctx){}
std::any VMVisitor::visitNumberExp(VMParser::NumberExpContext *ctx){}
std::any VMVisitor::visitMathExp(VMParser::MathExpContext *ctx){}
std::any VMVisitor::visitArrayExp(VMParser::ArrayExpContext *ctx){}
std::any VMVisitor::visitVariable(VMParser::VariableContext *ctx){}
std::any VMVisitor::visitWhile(VMParser::WhileContext *ctx){}
std::any VMVisitor::visitIf(VMParser::IfContext *ctx){}
std::any VMVisitor::visitStruct(VMParser::StructContext *ctx){}
std::any VMVisitor::visitArray(VMParser::ArrayContext *ctx){}
std::any VMVisitor::visitArrayblock(VMParser::ArrayblockContext *ctx){}
std::any VMVisitor::visitBlock(VMParser::BlockContext *ctx){}
std::any VMVisitor::visitFunctionparameters(VMParser::FunctionparametersContext *ctx){}
std::any VMVisitor::visitFunctionblock(VMParser::FunctionblockContext *ctx){}
std::any VMVisitor::visitFunctiondefinition(VMParser::FunctiondefinitionContext *ctx){}
std::any VMVisitor::visitReturnexpression(VMParser::ReturnexpressionContext *ctx){}
std::any VMVisitor::visitFunctionarguments(VMParser::FunctionargumentsContext *ctx){}
std::any VMVisitor::visitAccessObject(VMParser::AccessObjectContext *ctx){}
std::any VMVisitor::visitFunctioncall(VMParser::FunctioncallContext *ctx){}