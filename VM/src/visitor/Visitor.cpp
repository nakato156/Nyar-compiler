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
        // Process the expression assigned
        auto x = visit(ctx->expr(0));
        if (ctx->expr(0)->getText().front() == '"' && ctx->expr(0)->getText().back() == '"')
        {
            // Special handling for string types
            dataValue = std::any_cast<llvm::Value *>(x);
            dataType = llvm::PointerType::getUnqual(llvm::Type::getInt8Ty(*Context)); // i8* for string pointers
        }
        else
        {
            dataValue = std::any_cast<llvm::Value *>(x);
            if (!dataValue)
            {
                LogsErrorsV("Error processing the expression for the variable");
                return nullptr;
            }
            dataType = dataValue->getType();
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

    std::string varName = ctx->ID(0)->getText();
    llvm::Value *Allocation = Builder->CreateAlloca(dataType, 0, varName.c_str());;
    Builder->CreateStore(dataValue, Allocation);

    // Manejar la referencia si existe
    if (ctx->ref) {
        antlrcpp::Any refAny = visit(ctx->ref);
        std::cout << "Tipo de refAny: " << refAny.type().name() << std::endl;
        
        // Depuración
        if (refAny.type() == typeid(llvm::Value*)) {
            // Kami-sama tasukete
            // std::cout << "bien" << std::endl;
            llvm::Value *refValue = std::any_cast<llvm::Value*>(refAny);
            // std::cout << "mal: " << std::endl;
            if (refValue) {
                SymbolTable[ctx->ID(0)->getText()] = refValue;
            } else {
                LogsErrorsV("Error al procesar la referencia de la variable: refValue es nullptr");
            }
        } else {
            LogsErrorsV("Error: El tipo retornado por visit(ctx->ref) no es llvm::Value*");
            // Opcional: Asignar un valor por defecto o manejar el error según tu lógica
        }
    }
    
    return SymbolTable[ctx->ID(0)->getText()];
}

void VMVisitor::createPrintFunction(llvm::Module &module, llvm::LLVMContext &context)
{
    // Crear el prototipo de printf
    llvm::FunctionType *printfType = llvm::FunctionType::get(
        llvm::IntegerType::getInt32Ty(context),
        llvm::PointerType::getUnqual(llvm::Type::getInt8Ty(context)),
        true);
    llvm::Function *printfFunc = llvm::Function::Create(
        printfType, llvm::Function::ExternalLinkage, "printf", module);

    // Crear la función void print(int)
    llvm::FunctionType *printType = llvm::FunctionType::get(
        llvm::Type::getVoidTy(context),
        {llvm::Type::getInt32Ty(context)},
        false);
    llvm::Function *printFunc = llvm::Function::Create(
        printType, llvm::Function::ExternalLinkage, "print", module);

    // Crear un bloque básico para la función
    llvm::BasicBlock *block = llvm::BasicBlock::Create(context, "entry", printFunc);
    llvm::IRBuilder<> builder(block);

    // Obtener el argumento de la función
    llvm::Function::arg_iterator args = printFunc->arg_begin();
    llvm::Value *arg = &*args;
    arg->setName("value");

    // Crear el formato para printf
    llvm::Value *formatStr = builder.CreateGlobalStringPtr("%d\n");

    // Llamar a printf
    builder.CreateCall(printfFunc, {formatStr, arg});

    // Retornar void
    builder.CreateRetVoid();

    // Verificar la función
    llvm::verifyFunction(*printFunc);
    }

