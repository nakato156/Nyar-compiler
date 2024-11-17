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

std::any VMVisitor::visitWhile(VMParser::WhileContext *ctx)
{
    llvm::BasicBlock *WhileConditionBB = llvm::BasicBlock::Create(*Context, "while.condition", function);
    llvm::BasicBlock *WhileBodyBB = llvm::BasicBlock::Create(*Context, "while.body", function);
    llvm::BasicBlock *WhileAfterBB = llvm::BasicBlock::Create(*Context, "after.while", function);
}

std::any VMVisitor::visitIf(VMParser::IfContext *ctx)
{
    std::cout << "\tBloque IF" << std::endl;
    std::cout << ctx->cond->getText() << " " << ctx->block()->getText() << std::endl;

    llvm::Value *conditionalValue;
    conditionalValue = Builder->CreateFCmpONE(conditionalValue, llvm::ConstantFP::get(*Context, llvm::APFloat(0.0)), "ifcond");

    llvm::Function *FunctionBlock = Builder->GetInsertBlock()->getParent();

    llvm::BasicBlock *ThenBasicBlock = llvm::BasicBlock::Create(*Context, "then", FunctionBlock);
    llvm::BasicBlock *ElseBasicBlock = llvm::BasicBlock::Create(*Context, "else");
    llvm::BasicBlock *MergeBasicBlock = llvm::BasicBlock::Create(*Context, "ifcont");

    Builder->CreateCondBr(conditionalValue, ThenBasicBlock, ElseBasicBlock);

    Builder->SetInsertPoint(ThenBasicBlock);

    visitChildren(ctx);

    return nullptr;
}

std::any VMVisitor::visitElse(VMParser::ElseContext *ctx)
{
    std::cout << "\tBloque ELSE" << std::endl;
    std::cout << ctx->block()->getText() << std::endl;

    return visitChildren(ctx);
}

std::any VMVisitor::visitBlock(VMParser::BlockContext *ctx) { return visitChildren(ctx); }
