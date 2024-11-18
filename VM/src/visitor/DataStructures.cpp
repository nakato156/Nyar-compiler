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
//AIUDA
std::any VMVisitor::visitStringExp(VMParser::StringExpContext *ctx) { 
    std::cout << "Variable STRING" << std::endl;
    std::string value = ctx->getText();

    auto dataType = llvm::Type::getInt8Ty(*Context);
    std::string cleanValue = value.substr(1, value.size() - 2);
    
    std::cout << "Cadena: " << cleanValue << std::endl;

    llvm::Constant *strConstant = llvm::ConstantDataArray::getString(*Context, cleanValue);
    std::cout << "Cadena: " << strConstant->getName().str() << std::endl;

    // Asignar la cadena a memoria (en global o local)
    llvm::GlobalVariable *strVar = new llvm::GlobalVariable(
        *Module,
        strConstant->getType(),
        true,
        llvm::GlobalValue::PrivateLinkage,
        strConstant,
        "str_" + std::to_string(counterStrike++) + "_" + cleanValue.replace(cleanValue.find(" "), 1, "_")
    );
    std::cout << "Cadena Gblob: " << strVar->getName().str() << std::endl;

    llvm::Constant *zero = llvm::ConstantInt::get(llvm::Type::getInt32Ty(*Context), 0);
    std::vector<llvm::Constant*> indices = {zero, zero};
    llvm::Constant *strPtr = llvm::ConstantExpr::getGetElementPtr(
        strVar->getValueType(),
        strVar,
        indices
    );

    return strPtr;
}
std::any VMVisitor::visitNullExp(VMParser::NullExpContext *ctx) { return visitChildren(ctx); }
std::any VMVisitor::visitNumberExp(VMParser::NumberExpContext *ctx) { 
    std::string value = ctx->getText();
    std::cout << "Numero: " << value;

    if (value.find('.') != std::string::npos)
    {
        std::cout << "Variable DOUBLE" << std::endl;
        return DoubleValue(std::stod(value));
    }
    else if (value.find_first_not_of("0123456789") == std::string::npos)
    {
        std::cout << "Variable INTEGER" << std::endl;
        return LongLongValue(std::stoll(value));
    }else {
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