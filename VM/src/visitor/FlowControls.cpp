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

std::any VMVisitor::visitFor(VMParser::ForContext *ctx)
{
    std::cout << "\tBloque FOR" << std::endl;
    std::cout << ctx->CONTROL->getText() << " " << ctx->FROM->getText() << " " << ctx->TO->getText() << std::endl;
    
    if(ctx->CONTROL == nullptr) {
        return nullptr;
    }

    std::string varName = ctx->CONTROL->getText();

    llvm::Value * startValue;

    llvm::Function *FunctionBlock = Builder->GetInsertBlock()->getParent();
    llvm::BasicBlock *PreheaderBasicBlock  = Builder->GetInsertBlock();
    llvm::BasicBlock *LoopBasicBlock = llvm::BasicBlock::Create(*Context, "loop", FunctionBlock);

    Builder->CreateBr(LoopBasicBlock);
    Builder->SetInsertPoint(LoopBasicBlock);
    llvm::PHINode * Variable = Builder->CreatePHI(llvm::Type::getDoubleTy(*Context), 2, varName);

    Variable->addIncoming(startValue, PreheaderBasicBlock);
    llvm::Value * oldValue = SymbolTable[varName];
    SymbolTable[varName] = Variable;

    if(ctx->block() == nullptr) {
        return nullptr;
    }   

    llvm::Value *StepValue = nullptr;

    

    return nullptr;
}

std::any VMVisitor::visitIf(VMParser::IfContext *ctx)
{
    std::cout << "\tBloque IF" << std::endl;
    std::cout << ctx->cond->getText() << " " << ctx->block()->getText() << std::endl;

    // A condition doesn't exist
    if (ctx->cond == nullptr)
    {
        return nullptr;
    }
    llvm::Value *conditionalValue = nullptr;

    visit(ctx->cond);

    conditionalValue = Builder->CreateFCmpONE(conditionalValue, llvm::ConstantFP::get(*Context, llvm::APFloat(0.0)), "ifcond");

    llvm::Function *FunctionBlock = Builder->GetInsertBlock()->getParent();

    llvm::BasicBlock *ThenBasicBlock = llvm::BasicBlock::Create(*Context, "then", FunctionBlock);
    llvm::BasicBlock *ElseBasicBlock = llvm::BasicBlock::Create(*Context, "else");
    llvm::BasicBlock *MergeBasicBlock = llvm::BasicBlock::Create(*Context, "ifcont");

    Builder->CreateCondBr(conditionalValue, ThenBasicBlock, ElseBasicBlock);

    Builder->SetInsertPoint(ThenBasicBlock);

    // The block doesn't exist
    if (ctx->block() == nullptr)
    {
        return nullptr;
    }

    llvm::Value *thenValue = nullptr;
    visit(ctx->block());

    Builder->CreateBr(MergeBasicBlock);
    ThenBasicBlock = Builder->GetInsertBlock();

    FunctionBlock->insert(FunctionBlock->end(), ElseBasicBlock);
    Builder->SetInsertPoint(ElseBasicBlock);

    // If the else condition doesn't exist
    if (ctx->else_() == nullptr)
    {
        return nullptr;
    }
    visit(ctx->else_());
    llvm::Value *elseValue = nullptr;

    Builder->CreateBr(MergeBasicBlock);
    ElseBasicBlock = Builder->GetInsertBlock();

    FunctionBlock->insert(FunctionBlock->end(), MergeBasicBlock);
    Builder->SetInsertPoint(MergeBasicBlock);

    llvm::PHINode *PhiNo = Builder->CreatePHI(llvm::Type::getDoubleTy(*Context), 2, "iftmp");
    PhiNo->addIncoming(thenValue,ThenBasicBlock);
    PhiNo->addIncoming(elseValue,ElseBasicBlock);

    return nullptr;
}

std::any VMVisitor::visitElse(VMParser::ElseContext *ctx)
{
    std::cout << "\tBloque ELSE" << std::endl;
    std::cout << ctx->block()->getText() << std::endl;

    return visitChildren(ctx);
}

std::any VMVisitor::visitBlock(VMParser::BlockContext *ctx) { 
    std::cout << "\tBloque" << std::endl;
    std::cout << ctx->stat(0)->getText() << std::endl;

    return visitChildren(ctx);
}
