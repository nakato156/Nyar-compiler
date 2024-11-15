#include "antlr4-runtime.h"
#include "../../lib/parser/VMParserBaseVisitor.h"

#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"

class VMVisitor : public VMParserBaseVisitor
{
private:
    std::unique_ptr<llvm::LLVMContext> Context;
    std::unique_ptr<llvm::Module> Module;
    std::unique_ptr<llvm::IRBuilder<>> Builder;

public:
    VMVisitor()
    {
        Context = std::make_unique<llvm::LLVMContext>();
        Module = std::make_unique<llvm::Module>("LLVMProject", *Context);
        Builder = std::make_unique<llvm::IRBuilder<>>(*Context);
    };
    ~VMVisitor() {

    };

    void saveModule(const std::string &filePath);

    virtual std::any visitProgram(VMParser::ProgramContext *ctx);
    virtual std::any visitStat(VMParser::StatContext *ctx);
    virtual std::any visitIdExp(VMParser::IdExpContext *ctx);
    virtual std::any visitFunctionCallExp(VMParser::FunctionCallExpContext *ctx);
    virtual std::any visitLogicExp(VMParser::LogicExpContext *ctx);
    virtual std::any visitStringExp(VMParser::StringExpContext *ctx);
    virtual std::any visitAccessObjectExp(VMParser::AccessObjectExpContext *ctx);
    virtual std::any visitBooleanExp(VMParser::BooleanExpContext *ctx);
    virtual std::any visitNullExp(VMParser::NullExpContext *ctx);
    virtual std::any visitNumberExp(VMParser::NumberExpContext *ctx);
    virtual std::any visitMathExp(VMParser::MathExpContext *ctx);
    virtual std::any visitArrayExp(VMParser::ArrayExpContext *ctx);
    virtual std::any visitVariable(VMParser::VariableContext *ctx);
    virtual std::any visitWhile(VMParser::WhileContext *ctx);
    virtual std::any visitIf(VMParser::IfContext *ctx);
    virtual std::any visitStruct(VMParser::StructContext *ctx);
    virtual std::any visitArray(VMParser::ArrayContext *ctx);
    virtual std::any visitArrayblock(VMParser::ArrayblockContext *ctx);
    virtual std::any visitBlock(VMParser::BlockContext *ctx);
    virtual std::any visitFunctionparameters(VMParser::FunctionparametersContext *ctx);
    virtual std::any visitFunctionblock(VMParser::FunctionblockContext *ctx);
    virtual std::any visitFunctiondefinition(VMParser::FunctiondefinitionContext *ctx);
    virtual std::any visitReturnexpression(VMParser::ReturnexpressionContext *ctx);
    virtual std::any visitFunctionarguments(VMParser::FunctionargumentsContext *ctx);
    virtual std::any visitAccessObject(VMParser::AccessObjectContext *ctx);
    virtual std::any visitFunctioncall(VMParser::FunctioncallContext *ctx);
};