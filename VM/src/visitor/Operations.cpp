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

std::any VMVisitor::visitLogicExp(VMParser::LogicExpContext *ctx)
{
    std::cout << "Operacion Logica" << std::endl;
    std::cout << ctx->expr(0)->getText() << " " << ctx->op->getText() << " " << ctx->expr(1)->getText() << std::endl;

    visitChildren(ctx);

    if (logicOperations.find(ctx->op->getText()) != logicOperations.end())
    {

        llvm::Value *leftValue = searchOrCast(ctx->expr(0)->getText());
        llvm::Value *rightValue = searchOrCast(ctx->expr(1)->getText());

        std::tie(leftValue, rightValue) = castOrNotCast(leftValue, rightValue);


        llvm::Value * result = nullptr;

        switch (logicOperations[ctx->op->getText()])
        {
        case 0:
            result = Builder->CreateFCmpULT(leftValue, rightValue, "cmplttmp");
            break;

        case 1:
            result = Builder->CreateFCmpULE(leftValue,rightValue,"cmpletmp");
            break;

        case 2:
            result = Builder->CreateFCmpUGT(leftValue,rightValue,"cmpgttmp");
            break;

        case 3:
            result = Builder->CreateFCmpUGE(leftValue,rightValue,"cmpgetmp");
            break;

        case 4:
            result = Builder->CreateFCmpUEQ(leftValue,rightValue,"cmpeqtmp");
            break;

        case 5:
            result = Builder->CreateFCmpUNE(leftValue,rightValue,"cmpneqtmp");
            break;

        case 6:
            break;
            result = Builder->CreateFCmpUEQ(leftValue, rightValue, "cmpneqtmp");

        case 7:
            result = Builder->CreateOr(leftValue, rightValue, "cmportmp");
            break;

        default:
            break;
        }

        Builder->CreateUIToFP(result, llvm::Type::getDoubleTy(*Context), "booltmp");
    }
    else
    {
        std::cout << "Value not found" << std::endl;
    }

    return nullptr;
}

std::any VMVisitor::visitMathExp(VMParser::MathExpContext *ctx)
{
    std::cout << "\tOperacion Matematica\t" << std::endl;
    std::cout << ctx->expr(0)->getText() << " " << ctx->op->getText() << " " << ctx->expr(1)->getText() << std::endl;

    visitChildren(ctx);

    if (mathOperations.find(ctx->op->getText()) != mathOperations.end())
    {
        llvm::Value *leftValue = searchOrCast(ctx->expr(0)->getText());
        llvm::Value *rightValue = searchOrCast(ctx->expr(1)->getText());

        std::tie(leftValue, rightValue) = castOrNotCast(leftValue, rightValue);

        switch (mathOperations[ctx->op->getText()])
        {
        case 0:
            std::cout << "Aplicando suma" << std::endl;
            Builder->CreateFAdd(leftValue, rightValue, "addtmp");
            break;

        case 1:
            std::cout << "Aplicando Resta" << std::endl;
            Builder->CreateFSub(leftValue, rightValue, "subtmp");
            break;

        case 2:
            std::cout << "Aplicando Multiplicacion" << std::endl;
            Builder->CreateFMul(leftValue, rightValue, "multmp");
            break;

        case 3:
            // TODO Fix Denominator 0
            std::cout << "Aplicando Division" << std::endl;
            if (std::stoi(ctx->expr(1)->getText()) != 0)
            {
                Builder->CreateFDiv(leftValue, rightValue, "divtmp");
            }
            else
            {
                std::cerr << "ERROR: Division entre 0" << std::endl;
            }

            break;

        default:
            break;
        }
    }
    else
    {
        std::cout << "Value not found" << std::endl;
    }

    return nullptr;
}
