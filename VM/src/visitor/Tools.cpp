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

void VMVisitor::saveModule(const std::string &filePath)
{
    std::error_code errorCode;
    llvm::raw_fd_ostream outLL(filePath, errorCode);
    Module->print(outLL, nullptr);
}

llvm::Value *VMVisitor::BoolValue(bool Value)
{
    return llvm::ConstantInt::getSigned((llvm::Type::getInt1Ty(*Context)), Value);
}

llvm::Value *VMVisitor::IntValue(int Value)
{
    return llvm::ConstantInt::getSigned((llvm::Type::getInt32Ty(*Context)), Value);
}

llvm::Value *VMVisitor::DoubleValue(double Value)
{
    return llvm::ConstantFP::get((llvm::Type::getDoubleTy(*Context)), Value);
}

llvm::Value *VMVisitor::FloatValue(float Value)
{
    return llvm::ConstantFP::get((llvm::Type::getFloatTy(*Context)), Value);
}

llvm::Value *VMVisitor::LongLongValue(unsigned long long Value)
{
    return llvm::ConstantInt::get((llvm::Type::getInt64Ty(*Context)), Value, false);
}

llvm::Value *VMVisitor::SearchVariable(std::string Variable)
{
    // std::cout << Variable << std::endl;
    auto it = SymbolTable.find(Variable);

    if (it != SymbolTable.end())
    {
        std::cout << "Found Variable: " << Variable << std::endl;
        std::cout << "Data: " << it->second << std::endl;
        return it->second;
    }
    return nullptr;
}

llvm::Value *VMVisitor::searchOrCast(std::string valueString)
{
    llvm::Value *value = SearchVariable(valueString);
    if (value == nullptr)
    {
        value = DoubleValue(std::stod(valueString));
    }
    return value;
}

std::tuple<llvm::Value *, llvm::Value *> VMVisitor::castOrNotCast(llvm::Value *leftValue, llvm::Value *rightValue)
{
    // Gets to see if the both of the are the same type, if not it cast them as double
    llvm::Type *doubleType = llvm::Type::getDoubleTy(*Context);

    if (leftValue->getType() != rightValue->getType())
    {
        if (!leftValue->getType()->isDoubleTy())
        {
            leftValue = Builder->CreateUIToFP(leftValue, doubleType, "castToDouble");
        }
        if (!rightValue->getType()->isDoubleTy())
        {
            rightValue = Builder->CreateUIToFP(rightValue, doubleType, "castToDouble");
        }
    }

    return std::tuple(leftValue, rightValue);
}

llvm::Value *VMVisitor::LogsErrorsV(const char *Str)
{
    LogError(Str);
    return nullptr;
}

void VMVisitor::LogError(const char *Str)
{
    fprintf(stderr, "LogError: %s\n", Str);
}