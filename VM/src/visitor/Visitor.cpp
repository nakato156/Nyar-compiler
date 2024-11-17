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
    llvm::Value *dataValue = nullptr;
    llvm::Type *dataType = nullptr;
    llvm::Value *Allocation = nullptr;

    std::cout << "\tAsignacion de Variable\t" << std::endl;
    std::cout << ctx->ID(0)->getText() << " " << ctx->data->getText() << " " << ctx->ref->getText() << std::endl;

    visitChildren(ctx);

    if (ctx->hint == nullptr)
    {
        std::cout << "La variable no contiene hints" << std::endl;
        auto [baseNum, baseString] = detectValue(ctx->data);

        if (baseNum)
        {
            std::cout << "It is a NUM" << std::endl;
        }
        else if (baseString)
        {
            std::cout << "It is a STRING" << std::endl;
        }
    }
    else
    {
        std::cout << "La variable contiene hints" << std::endl;
        if (languageDataTypes.find(ctx->hint->getText()) != languageDataTypes.end())
        {
            switch (languageDataTypes[ctx->hint->getText()])
            {
            case 0:
                dataType = llvm::Type::getInt32Ty(*Context);
                Allocation = Builder->CreateAlloca(dataType, nullptr, ctx->ID(0)->getText());

                dataValue = IntValue(std::stoi(ctx->data->getText()));
                break;

            case 1:
                dataType = llvm::Type::getFloatTy(*Context);
                Allocation = Builder->CreateAlloca(dataType, nullptr, ctx->ID(0)->getText());

                dataValue = FloatValue(std::stof(ctx->data->getText()));
                break;

            case 2:
                dataType = llvm::Type::getInt1Ty(*Context);
                Allocation = Builder->CreateAlloca(dataType, nullptr, ctx->ID(0)->getText());

                dataValue = BoolValue(std::stoi(ctx->data->getText()));
                break;
            }
        }
        else
        {
            std::cout << "Nyar doesn't support this type of hint for the language." << std::endl;
        }
    }

    // Asign data to symboltable
    SymbolTable[ctx->ID(0)->getText()] = dataValue;
    //    std::cout << SymbolTable[ctx->ID(0)->getText()] << std::endl;

    return nullptr;
}

std::tuple<std::optional<double>, std::optional<std::string>> VMVisitor::detectValue(const antlrcpp::Any &value)
{
    std::optional<double> numVar;
    std::optional<std::string> stringValue;

    if (value.type() == typeid(int))
    {
        numVar = std::any_cast<int>(value);
    }
    else if (value.type() == typeid(double))
    {
        numVar = std::any_cast<double>(value);
    }
    else if (value.type() == typeid(std::string))
    {
        stringValue = std::any_cast<std::string>(value);
    }
    else
    {
        std::cout << "Type not supported." << value.type().name() << std::endl;
    }

    return std::make_tuple(numVar, stringValue);
}
