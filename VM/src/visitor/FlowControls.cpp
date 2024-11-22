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

    if (ctx->CONTROL == nullptr || ctx->block() == nullptr)
    {
        return nullptr;
    }

    std::string varName = ctx->CONTROL->getText();

    llvm::Value *startValue = llvm::ConstantFP::get(*Context, llvm::APFloat(std::stod(ctx->FROM->getText())));
    llvm::Value *endValue = llvm::ConstantFP::get(*Context, llvm::APFloat(std::stod(ctx->TO->getText())));

    llvm::Function *TheFunction = Builder->GetInsertBlock()->getParent();

    llvm::BasicBlock *PreheaderBB = Builder->GetInsertBlock();
    llvm::BasicBlock *LoopBB = llvm::BasicBlock::Create(*Context, "loop", TheFunction);
    llvm::BasicBlock *AfterLoopBB = llvm::BasicBlock::Create(*Context, "afterloop", TheFunction);

    Builder->CreateBr(LoopBB);
    Builder->SetInsertPoint(LoopBB);

    llvm::PHINode *Variable = Builder->CreatePHI(llvm::Type::getDoubleTy(*Context), 2, varName);
    Variable->addIncoming(startValue, PreheaderBB);

    llvm::Value *oldValue = SymbolTable[varName];
    SymbolTable[varName] = Variable;

    visitChildren(ctx->block());

    llvm::Value *StepValue = llvm::ConstantFP::get(*Context, llvm::APFloat(1.0));
    llvm::Value *NextVar = Builder->CreateFAdd(Variable, StepValue, "nextvar");

    llvm::Value *EndCond = Builder->CreateFCmpOLE(NextVar, endValue, "loopcond");

    llvm::BasicBlock *LoopEndBB = Builder->GetInsertBlock();
    Builder->CreateCondBr(EndCond, LoopBB, AfterLoopBB);

    Variable->addIncoming(NextVar, LoopEndBB);

    SymbolTable[varName] = oldValue;
    Builder->SetInsertPoint(AfterLoopBB);

    return nullptr;
}

std::any VMVisitor::visitIf(VMParser::IfContext *ctx)
{
    std::cout << "\tBloque IF" << std::endl;
    std::cout << ctx->cond->getText() << " " << ctx->block()->getText() << std::endl;

    if (ctx->cond == nullptr)
    {
        return nullptr;
    }

    // Evaluar la condición
    llvm::Value *conditionalValue = std::any_cast<llvm::Value *>(visit(ctx->cond));
    if (!conditionalValue)
    {
        std::cerr << "Error: La condición del bloque IF no devuelve un valor válido." << std::endl;
        return nullptr;
    }

    conditionalValue = Builder->CreateFCmpONE(
        conditionalValue, llvm::ConstantFP::get(*Context, llvm::APFloat(0.0)), "ifcond");

    // Configurar los bloques THEN, ELSE y MERGE
    llvm::Function *FunctionBlock = Builder->GetInsertBlock()->getParent();
    llvm::BasicBlock *ThenBasicBlock = llvm::BasicBlock::Create(*Context, "then", FunctionBlock);
    llvm::BasicBlock *ElseBasicBlock = llvm::BasicBlock::Create(*Context, "else", FunctionBlock);
    llvm::BasicBlock *MergeBasicBlock = llvm::BasicBlock::Create(*Context, "ifcont", FunctionBlock);

    Builder->CreateCondBr(conditionalValue, ThenBasicBlock, ElseBasicBlock);

    // Generar el bloque THEN
    Builder->SetInsertPoint(ThenBasicBlock);
    llvm::Value *thenValue = nullptr;
    if (ctx->block() != nullptr)
    {
        thenValue = std::any_cast<llvm::Value *>(visit(ctx->block()));
    }
    if (!thenValue)
    {
        thenValue = llvm::ConstantFP::get(*Context, llvm::APFloat(0.0));
    }
    Builder->CreateBr(MergeBasicBlock);
    ThenBasicBlock = Builder->GetInsertBlock();

    // Generar el bloque ELSE
    Builder->SetInsertPoint(ElseBasicBlock);
    llvm::Value *elseValue = nullptr;
    if (ctx->else_() != nullptr)
    {
        elseValue = std::any_cast<llvm::Value *>(visit(ctx->else_()));
    }
    if (!elseValue)
    {
        elseValue = llvm::ConstantFP::get(*Context, llvm::APFloat(0.0));
    }
    Builder->CreateBr(MergeBasicBlock);
    ElseBasicBlock = Builder->GetInsertBlock();

    // Generar el bloque MERGE
    Builder->SetInsertPoint(MergeBasicBlock);
    llvm::PHINode *PhiNo = Builder->CreatePHI(llvm::Type::getDoubleTy(*Context), 2, "iftmp");

    if (thenValue->getType() != llvm::Type::getDoubleTy(*Context))
    {
        thenValue = Builder->CreateFPCast(thenValue, llvm::Type::getDoubleTy(*Context), "thencast");
    }
    if (elseValue->getType() != llvm::Type::getDoubleTy(*Context))
    {
        elseValue = Builder->CreateFPCast(elseValue, llvm::Type::getDoubleTy(*Context), "elsecast");
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