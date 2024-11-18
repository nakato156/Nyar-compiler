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
    std::cout << ctx->CONTROL->getText() << " " << ctx->FROM->getText() << " " << ctx->TO->getText() << 
            ctx->block()->getText() << std::endl;
    
    std::string varName = ctx->CONTROL->getText();

    if(ctx->CONTROL == nullptr) {
        return nullptr;
    }

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
    llvm::Value *conditionalValue = std::any_cast<llvm::Value *> (visit(ctx->cond));

    conditionalValue = Builder->CreateFCmpONE(conditionalValue, llvm::ConstantFP::get(*Context, llvm::APFloat(0.0)), "ifcond");

    llvm::Function *FunctionBlock = Builder->GetInsertBlock()->getParent();

    llvm::BasicBlock *ThenBasicBlock = llvm::BasicBlock::Create(*Context, "then", FunctionBlock);
    llvm::BasicBlock *ElseBasicBlock = llvm::BasicBlock::Create(*Context, "else");
    llvm::BasicBlock *MergeBasicBlock = llvm::BasicBlock::Create(*Context, "ifcont");

    Builder->CreateCondBr(conditionalValue, ThenBasicBlock, ElseBasicBlock);

    Builder->SetInsertPoint(ThenBasicBlock);

    // Then block
    llvm::Value *thenValue = nullptr;
    if (ctx->block() != nullptr)
    {
        thenValue = std::any_cast<llvm::Value *> (visit(ctx->block()));
        if(!thenValue) {
            thenValue = llvm::ConstantFP::get(*Context, llvm::APFloat(0.0));
        }
    }
    //llvm::Value *thenValue = std::any_cast<llvm::Value *>(visit(ctx->block()));
  

    Builder->CreateBr(MergeBasicBlock);
    ThenBasicBlock = Builder->GetInsertBlock();

    FunctionBlock->insert(FunctionBlock->end(), ElseBasicBlock);
    Builder->SetInsertPoint(ElseBasicBlock);

    // Else block
    llvm::Value *elseValue = nullptr;
    if (ctx->else_() != nullptr)
    {
        elseValue = std::any_cast<llvm::Value *>(visit(ctx->else_()));
        if (!elseValue)
        {
            elseValue = llvm::ConstantFP::get(*Context, llvm::APFloat(0.0));
        }
    }

    Builder->CreateBr(MergeBasicBlock);
    ElseBasicBlock = Builder->GetInsertBlock();

    FunctionBlock->insert(FunctionBlock->end(), MergeBasicBlock);
    Builder->SetInsertPoint(MergeBasicBlock);

    llvm::PHINode *PhiNo = Builder->CreatePHI(llvm::Type::getDoubleTy(*Context), 2, "iftmp");

    if (thenValue->getType() != PhiNo->getType())
    {
        thenValue = Builder->CreateFPCast(thenValue, PhiNo->getType(), "thencast");
    }
    if (elseValue->getType() != PhiNo->getType())
    {
        elseValue = Builder->CreateFPCast(elseValue, PhiNo->getType(), "elsecast");
    }

    PhiNo->addIncoming(thenValue, ThenBasicBlock);
    PhiNo->addIncoming(elseValue, ElseBasicBlock);

    return PhiNo;
}

std::any VMVisitor::visitElse(VMParser::ElseContext *ctx)
{
    std::cout << "\tBloque Else"<< std::endl;
    std::cout << ctx->block()->getText() << std::endl;

    if(ctx->block() != nullptr) {
        return visit(ctx->block());
    }

    return llvm::ConstantFP::get(*Context, llvm::APFloat(0.0));
}

std::any VMVisitor::visitBlock(VMParser::BlockContext *ctx) { 
    std::cout << "\tBloque" << std::endl;
    llvm::Value * lastValue = nullptr;

    for (auto it: ctx->stat())
    {
       std::cout << it->getText() << std::endl;
       lastValue = std::any_cast<llvm::Value *> (visit(it));
    }

    return lastValue ? lastValue : llvm::ConstantFP::get(*Context, llvm::APFloat(0.0));
}
