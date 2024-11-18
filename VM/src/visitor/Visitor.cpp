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

antlrcpp::Any VMVisitor::visitProgram(VMParser::ProgramContext *ctx)
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

antlrcpp::Any VMVisitor::visitStat(VMParser::StatContext *ctx)
{
    std::cout << ctx->getText() << std::endl;
    return visitChildren(ctx);
}

antlrcpp::Any VMVisitor::visitIdExp(VMParser::IdExpContext *ctx) { 
    std::cout << "Nombre Variable: " <<  ctx->ID()->getText() << std::endl;

    if(SymbolTable.find(ctx->ID()->getText()) != SymbolTable.end()) {
        return SymbolTable[ctx->ID()->getText()]; 
    }
    else {
        std::cout << "Variable no encontrada" << std::endl;
    }

    return nullptr;
}

antlrcpp::Any VMVisitor::visitVariable(VMParser::VariableContext *ctx)
{
    std::cout << "\tAsignacion de Variable\t" << std::endl;
    std::cout << ctx->ID(0)->getText() << " " 
              << (ctx->hint ? ctx->hint->getText() : "No Hint") 
              << " " 
              << (ctx->ref ? ctx->ref->getText() : "No Ref") 
              << std::endl;

    llvm::Value *dataValue = nullptr;
    llvm::Type *dataType = nullptr;

    if (ctx->hint == nullptr)
    {
        // Procesar la expresión asignada
        auto x = visit(ctx->expr(0));
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
        dataValue = std::any_cast<llvm::Value*>(x);
        if (!dataValue) {
            LogsErrorsV("Error al procesar la expresión de la variable");
            return nullptr;
        }
        dataType = dataValue->getType();
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

    std::string varName = ctx->ID(0)->getText();
    llvm::Value *Allocation = Builder->CreateAlloca(dataType, 0, varName.c_str());;
    Builder->CreateStore(dataValue, Allocation);

    // Manejar la referencia si existe
    if (ctx->ref) {
        llvm::Value *refValue = std::any_cast<llvm::Value*>(visit(ctx->ref));
        if (refValue) {
            // Implementar la lógica para manejar la referencia
            SymbolTable[ctx->ID(0)->getText()] = refValue;
        } else {
            LogsErrorsV("Error al procesar la referencia de la variable");
        }
    }
    
    // Asign data to symboltable
    // SymbolTable[ctx->ID(0)->getText()] = dataValue;
    return SymbolTable[ctx->ID(0)->getText()];
}