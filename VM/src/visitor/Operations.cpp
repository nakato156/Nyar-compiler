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

    llvm::Value *result = nullptr;

    if (logicOperations.find(ctx->op->getText()) != logicOperations.end())
    {
        llvm::Value *leftValue = std::any_cast<llvm::Value *>(visit(ctx->expr(0)));
        llvm::Value *rightValue = std::any_cast<llvm::Value *>(visit(ctx->expr(1)));

        std::tie(leftValue, rightValue) = castOrNotCast(leftValue, rightValue);

        result = RetLogOp(leftValue, rightValue, ctx->op->getText());
    }

    return result;
}

llvm::Value *VMVisitor::RetLogOp(llvm::Value *leftValue, llvm::Value *rightValue, std::string caseLog)
{
    llvm::Value *dataResult = nullptr;
    llvm::Type * dataType = nullptr;

    switch (logicOperations[caseLog])
    {
    case 0:
        dataResult = Builder->CreateFCmpULT(leftValue, rightValue, "cmplttmp");
        break;

    case 1:
        dataResult = Builder->CreateFCmpULE(leftValue, rightValue, "cmpletmp");
        break;

    case 2:
        dataResult = Builder->CreateFCmpUGT(leftValue, rightValue, "cmpgttmp");
        break;

    case 3:
        dataResult = Builder->CreateFCmpUGE(leftValue, rightValue, "cmpgetmp");
        break;
    case 4:
        dataResult = Builder->CreateFCmpUEQ(leftValue, rightValue, "cmpeqtmp");
        break;

    case 5:
        dataResult = Builder->CreateFCmpUNE(leftValue, rightValue, "cmpneqtmp");
        break;

    case 6:
        dataResult = Builder->CreateFCmpUEQ(leftValue, rightValue, "cmpneqtmp");
        break;

    case 7:
        dataResult = Builder->CreateOr(leftValue, rightValue, "cmportmp");
        break;

    //TODO - Add constant true or false
    default:
        LogsErrorsV("Logical operation not found");
        break;
    }

    Builder->CreateUIToFP(dataResult, llvm::Type::getDoubleTy(*Context), "booltmp");
    return dataResult;
}

antlrcpp::Any VMVisitor::visitMathExp(VMParser::MathExpContext *ctx)
{
    std::cout << "\tOperacion Matematica\t" << std::endl;
    std::cout << ctx->expr(0)->getText() << " " << ctx->op->getText() << " " << ctx->expr(1)->getText() << std::endl;

    llvm::Value *result = nullptr;
    if (mathOperations.find(ctx->op->getText()) != mathOperations.end())
    {
        llvm::Value *leftValue = std::any_cast<llvm::Value*>(visit(ctx->expr(0)));
        llvm::Value *rightValue = std::any_cast<llvm::Value*>(visit(ctx->expr(1)));


        std::tie(leftValue, rightValue) = castOrNotCast(leftValue, rightValue);

        switch (mathOperations[ctx->op->getText()])
        {
        case 0:
            std::cout << "Aplicando suma" << std::endl;
            result = Builder->CreateFAdd(leftValue, rightValue, "addtmp");
            break;

        case 1:
            std::cout << "Aplicando Resta" << std::endl;
            result = Builder->CreateFSub(leftValue, rightValue, "subtmp");
            break;

        case 2:
            std::cout << "Aplicando Multiplicacion" << std::endl;
            result = Builder->CreateFMul(leftValue, rightValue, "multmp");
            break;

        case 3:
            // TODO Fix Denominator 0
            std::cout << "Aplicando Division" << std::endl;
            if (std::stoi(ctx->expr(1)->getText()) != 0)
            {
                result = Builder->CreateFDiv(leftValue, rightValue, "divtmp");
            }
            else
            {
                //Agregarlo cuando suceda, Crack :D
                std::cerr << "ERROR: Division entre 0" << std::endl;
                throw std::runtime_error("Division entre 0 >-<");
            }

            break;

        default:
            break;
        }
    }
    else
    {
        LogsErrorsV("Mathematical operation not found");
    }
    std::cout << "TERMINADO" << std::endl;
    return result;
}
