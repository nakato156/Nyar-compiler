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
    std::string value = ctx->getText();
    std::string cleanValue = value.substr(1, value.size() - 2); // Remover comillas

    llvm::Constant *strConstant = llvm::ConstantDataArray::getString(*Context, cleanValue, true);
    std::string varName = "str_" + std::to_string(counterStrike++);

    llvm::GlobalVariable *strVar = new llvm::GlobalVariable(
        *Module,
        strConstant->getType(),
        true, // isConstant
        llvm::GlobalValue::PrivateLinkage,
        strConstant,
        varName);

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

std::any VMVisitor::visitArray(VMParser::ArrayContext *ctx)
{
    std::cout << "Visiting Array Declaration" << std::endl;

    auto arrayBlockResult = visit(ctx->arrayblock());

    if (arrayBlockResult.has_value())
    {
        auto arrayElements = std::any_cast<std::vector<llvm::Value *>>(arrayBlockResult);

        llvm::ArrayType *arrayType = llvm::ArrayType::get(
            arrayElements[0]->getType(), // Tipo del primer elemento
            arrayElements.size());       // Tamaño del array

        std::cout << "Array of size " << arrayElements.size() << " created." << std::endl;
        return arrayType;
    }

    std::cerr << "Error: Unable to process array block." << std::endl;
    return nullptr;
}

std::any VMVisitor::visitArrayblock(VMParser::ArrayblockContext *ctx)
{
    std::cout << "Visiting Array Block" << std::endl;

    std::vector<llvm::Value *> elements;

    for (auto expr : ctx->expr())
    {
        auto value = visit(expr);
        if (value.has_value())
        {
            elements.push_back(std::any_cast<llvm::Value *>(value));
        }
    }

    std::cout << "Array Block with " << elements.size() << " elements processed." << std::endl;
    return elements;
}

std::any VMVisitor::visitStruct(VMParser::StructContext *ctx)
{
    visitChildren(ctx);
}

std::any VMVisitor::visitAccessObject(VMParser::AccessObjectContext *ctx)
{
    visitChildren(ctx);
}