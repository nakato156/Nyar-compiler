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
#include "llvm/IR/Type.h"

std::any VMVisitor::visitProgram(VMParser::ProgramContext *ctx)
{
    std::cout << ctx->getText() << std::endl;
    llvm::FunctionType *functionType = llvm::FunctionType::get(llvm::Type::getInt64Ty(*Context), false);
    function = llvm::Function::Create(functionType, llvm::Function::ExternalLinkage, "main", *Module);

    Builder = new llvm::IRBuilder<>(llvm::BasicBlock::Create(*Context, "begin", function));

    visitChildren(ctx);

    auto EndBasicBlock = llvm::BasicBlock::Create(*Context, "end", function);
    Builder->CreateBr(EndBasicBlock);
    Builder->SetInsertPoint(EndBasicBlock);

    llvm::ReturnInst::Create(*Context, llvm::ConstantInt::get(*Context, llvm::APInt(64, 0)), EndBasicBlock);
    llvm::verifyModule(*Module, &llvm::errs());

    return nullptr;
}

std::any VMVisitor::visitStat(VMParser::StatContext *ctx)
{
    std::cout << ctx->getText() << std::endl;
    return visitChildren(ctx);
}

std::any VMVisitor::visitIdExp(VMParser::IdExpContext *ctx) { return visitChildren(ctx); }

std::any VMVisitor::visitVariable(VMParser::VariableContext *ctx)
{
    std::cout << "\tAsignacion de Variable\t" << std::endl;
    std::cout << ctx->ID(0)->getText() << " " << ctx->expr(0)->getText() << " " << ctx->ref->getText() << std::endl;

    llvm::Value *dataValue = nullptr;
    llvm::Type *dataType = nullptr;
    llvm::Value *Allocation = nullptr;

    if (ctx->hint == nullptr)
    {
        /*
            Tipos de datos que pueden ingresar,
                Strings, Integers, Doubles, NULLS
                Punteros
        */

        /*
            Se va a asumir que son double si hay un punto,
            si no tiene punto integer
        */

        std::cout << "La variable no contiene hints" << std::endl;

        // Christian TASKETE
        //AIUDA
        std::string value = ctx->expr(0)->getText();

        if (value.find('.') != std::string::npos)
        {
            std::cout << "Variable DOUBLE" << std::endl;
            dataType = llvm::Type::getDoubleTy(*Context);
        }
        else if (value.find_first_not_of("0123456789") == std::string::npos)
        {
            std::cout << "Variable INTEGER" << std::endl;
            dataType = llvm::Type::getInt64Ty(*Context);
        }
        else if (value.front() == '"' && value.back() == '"')
        {
            //AIUDA
            std::cout << "Variable STRING" << std::endl;
            
            //Nota - Se que es erroneo pero para que no me bote error xd
            dataType = llvm::Type::getInt64Ty(*Context);
            // dataType = llvm::Type::getInt8PtrTy(*Context);
        }
        else
        {
            LogsErrorsV("Unknown Type of Variable");
        }
    }
    else
    {
        /*
            Tipos de datos aceptados como hint en nyar
                Integers, Float y Boolean
        */

        std::cout << "La variable contiene hints" << std::endl;
        if (languageDataTypes.find(ctx->hint->getText()) != languageDataTypes.end())
        {
            switch (languageDataTypes[ctx->hint->getText()])
            {
            case 0:
                dataType = llvm::Type::getInt32Ty(*Context);
                dataValue = IntValue(std::stoi(ctx->expr(0)->getText()));
                break;

            case 1:
                dataType = llvm::Type::getFloatTy(*Context);
                dataValue = FloatValue(std::stof(ctx->expr(0)->getText()));
                break;

            case 2:
                dataType = llvm::Type::getInt1Ty(*Context);
                dataValue = BoolValue(std::stoi(ctx->expr(0)->getText()));
                break;
            }
        }
        else
        {
            LogsErrorsV("Nyar doesn't support this type of hint for the language.");
        }
    }
    Allocation = Builder->CreateAlloca(dataType, nullptr, ctx->ID(0)->getText());

    // Asign data to symboltable

    SymbolTable[ctx->ID(0)->getText()] = dataValue;
    return nullptr;
}