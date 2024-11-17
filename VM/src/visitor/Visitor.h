#include "antlr4-runtime.h"
#include "../../lib/parser/VMParserBaseVisitor.h"

#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"

class VMVisitor : public VMParserBaseVisitor
{
private:
    llvm::LLVMContext * Context;
    llvm::Module * Module;
    llvm::IRBuilder<> * Builder;

    std::map<std::string, llvm::Value*> SymbolTable;

    std::map<std::string, int> logicOperations;
    std::map<std::string, int> mathOperations;
    std::map<std::string, int> languageDataTypes;

    llvm::Function * function;

public:
    VMVisitor()
    {
        Context = new llvm::LLVMContext();
        Module = new llvm::Module("LLVMProject", *Context);
        Builder = new llvm::IRBuilder<>(*Context);
        mathOperations = {
                {"+", 0},
                {"-", 1},
                {"*", 2},
                {"/", 3}};

        logicOperations = {
            {"< ", 0},
            {"<=", 1}, // Similar as 0, 7
            {"> ", 2},
            {">=", 3}, // Similar as 2, 7
            {"==", 4},
            {"!=", 5}, 
            {"&&", 6},
            {"||", 7}};

        languageDataTypes = {
            {"int", 0},
            {"float", 1},
            {"bool", 2}
        };
    };
    ~VMVisitor() {
        delete Context;
        delete Module;
        delete Builder;
    };

    void saveModule(const std::string &filePath);

    virtual std::any visitProgram(VMParser::ProgramContext *ctx);
    virtual std::any visitStat(VMParser::StatContext *ctx);
    virtual std::any visitIdExp(VMParser::IdExpContext *ctx);
    virtual std::any visitFunctionCallExp(VMParser::FunctionCallExpContext *ctx);
    virtual std::any visitLogicExp(VMParser::LogicExpContext *ctx);
    virtual std::any visitStringExp(VMParser::StringExpContext *ctx);
    virtual std::any visitAccessObjectExp(VMParser::AccessObjectExpContext *ctx);
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
    virtual std::any visitElse(VMParser::ElseContext *ctx) override;

    llvm::Value *BoolValue(bool Value);
    llvm::Value *IntValue(int Value);
    llvm::Value *DoubleValue(double Value);
    llvm::Value *FloatValue(float Value);
    llvm::Value *LongLongValue(unsigned long long Value);

    llvm::Value *SearchVariable(std::string Variable);
    std::tuple<std::optional<double>, std::optional<std::string>> detectValue(const antlrcpp::Any &value);

    llvm::Value * searchOrCast(std::string valueString);
    std::tuple<llvm::Value *, llvm::Value *> castOrNotCast(llvm::Value *leftValue, llvm::Value *rightValue);
};