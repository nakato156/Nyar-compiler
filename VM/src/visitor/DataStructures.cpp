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


std::any VMVisitor::visitArrayExp(VMParser::ArrayExpContext *ctx) { 
    std::vector<llvm::Constant *> values;
    llvm::Type *elementType = llvm::Type::getInt32Ty(*Context); // Por ejemplo
    llvm::ArrayType *arrayType = llvm::ArrayType::get(elementType, ctx->array()->arrayblock()->expr().size());

    for (auto &element : ctx->array()->arrayblock()->expr())
    {
        llvm::Constant *value = std::any_cast<llvm::Constant*>(visit(element));
        values.push_back(value);
    }

    llvm::Constant *arrayConstant = llvm::ConstantArray::get(arrayType, values);
    Builder->CreateGlobalStringPtr(arrayConstant->getName());
    return arrayConstant;
}

// Christian TASKETE
// AIUDA
std::any VMVisitor::visitStringExp(VMParser::StringExpContext *ctx)
{
    std::cout << "Processing STRING expression" << std::endl;

    // Extract the string value and clean it6 (remove quotes)
    std::string value = ctx->getText();
    std::string cleanValue = value.substr(1, value.size() - 2);

    std::cout << "Cleaned String: " << cleanValue << std::endl;

    // Create a string constant in LLVM
    llvm::Constant *strConstant = llvm::ConstantDataArray::getString(*Context, cleanValue);

    // Define a global variable to hold the string
    std::string varName = "str_" + std::to_string(counterStrike++);
    llvm::GlobalVariable *strVar = new llvm::GlobalVariable(
        *Module,
        strConstant->getType(),
        true, // isConstant
        llvm::GlobalValue::PrivateLinkage,
        strConstant,
        varName);

    std::cout << "Global String Variable: " << strVar->getName().str() << std::endl;

    // Return a pointer to the string's beginning (as a Value*)
    llvm::Constant *zero = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Context), 0);
    std::vector<llvm::Constant *> indices = {zero, zero};

    llvm::Value *strPtr = llvm::ConstantExpr::getGetElementPtr(
        strConstant->getType(),
        strVar,
        indices);

    return strPtr;
}
std::any VMVisitor::visitNullExp(VMParser::NullExpContext *ctx)
{
    llvm::Value *returnValue = llvm::ConstantInt::getSigned((llvm::Type::getInt32Ty(*Context)), 0);

    // NULL ARE 0, because of time xd
    return returnValue;
}

std::any VMVisitor::visitNumberExp(VMParser::NumberExpContext *ctx)
{
    std::string value = ctx->getText();
    std::cout << "Numero: " << value << std::endl;

    if (value.find('.') != std::string::npos)
    {
        std::cout << "Variable DOUBLE" << std::endl;
        return DoubleValue(std::stod(value));
    }
    else if (value.find_first_not_of("0123456789") == std::string::npos)
    {
        std::cout << "Variable INTEGER" << std::endl;
        return LongLongValue(std::stoll(value));
    }
    else
    {
        return LongLongValue(std::stoll(ctx->getText()));
    }
}

std::any VMVisitor::visitAccessObjectExp(VMParser::AccessObjectExpContext *ctx)
{
    return visitChildren(ctx);
}

std::any VMVisitor::visitArray(VMParser::ArrayContext *ctx) { return visitChildren(ctx); }

std::any VMVisitor::visitArrayblock(VMParser::ArrayblockContext *ctx) { return visitChildren(ctx); }

std::any VMVisitor::visitStruct(VMParser::StructContext *ctx) { return visitChildren(ctx); }

std::any VMVisitor::visitAccessObject(VMParser::AccessObjectContext *ctx) { return visitChildren(ctx); }