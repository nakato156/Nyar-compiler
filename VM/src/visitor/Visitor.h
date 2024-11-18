//For someone

#include "antlr4-runtime.h"
#include "../../lib/parser/VMParserBaseVisitor.h"
#include "../JIT.h"

#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"

#include "llvm/IR/PassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Analysis/LoopAnalysisManager.h"
#include "llvm/Analysis/CGSCCPassManager.h"
#include "llvm/Passes/StandardInstrumentations.h"
#include "llvm/Transforms/Scalar/Reassociate.h"
#include "llvm/Transforms/Scalar/GVN.h"
#include "llvm/Transforms/Scalar/SimplifyCFG.h"
#include "llvm/Transforms/InstCombine/InstCombine.h"

class VMVisitor : public VMParserBaseVisitor
{
private:
    llvm::LLVMContext * Context;
    llvm::Module * Module;
    llvm::IRBuilder<> * Builder;
    
    std::unique_ptr<llvm::orc::KaleidoscopeJIT> KJIT;
    std::unique_ptr<llvm::FunctionPassManager> TheFPM;
    std::unique_ptr<llvm::LoopAnalysisManager> TheLAM;
    std::unique_ptr<llvm::FunctionAnalysisManager> TheFAM;
    std::unique_ptr<llvm::CGSCCAnalysisManager> TheCGAM;
    std::unique_ptr<llvm::ModuleAnalysisManager> TheMAM;
    std::unique_ptr<llvm::PassInstrumentationCallbacks> ThePIC;
    std::unique_ptr<llvm::StandardInstrumentations> TheSI;

    std::map<std::string, llvm::Value*> SymbolTable;

    std::map<std::string, int> logicOperations;
    std::map<std::string, int> mathOperations;
    std::map<std::string, int> languageDataTypes;

    llvm::Function * function;

    int counterStrike = 0;
public:
    VMVisitor()
    {
        Context = new llvm::LLVMContext();
        Module = new llvm::Module("NyarJIT", *Context);
        //Module->setDataLayout(KJIT->getDataLayout());

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
            {"||", 7},
            {"T",8},   // For internal purposes    
            {"F",9}    // For internal purposes
            };

        languageDataTypes = {
            {"int", 0},
            {"float", 1},
            {"bool", 2}
        };

        TheFPM = std::make_unique<llvm::FunctionPassManager>();
        TheLAM = std::make_unique<llvm::LoopAnalysisManager>();
        TheFAM = std::make_unique<llvm::FunctionAnalysisManager>();
        TheCGAM =std::make_unique<llvm::CGSCCAnalysisManager>();
        TheMAM = std::make_unique<llvm::ModuleAnalysisManager>();
        ThePIC = std::make_unique<llvm::PassInstrumentationCallbacks>();
        TheSI =  std::make_unique<llvm::StandardInstrumentations>(*Context, true);
        TheSI->registerCallbacks(*ThePIC, TheMAM.get());

        TheFPM->addPass(llvm::InstCombinePass());
        TheFPM->addPass(llvm::ReassociatePass());
        TheFPM->addPass(llvm::GVNPass());
        TheFPM->addPass(llvm::SimplifyCFGPass());

        llvm::PassBuilder PB;
        PB.registerModuleAnalyses(*TheMAM);
        PB.registerFunctionAnalyses(*TheFAM);
        PB.crossRegisterProxies(*TheLAM, *TheFAM, *TheCGAM, *TheMAM);
    };
    ~VMVisitor() = default;

    void saveModule(const std::string &filePath);

    virtual antlrcpp::Any visitProgram(VMParser::ProgramContext *ctx);
    virtual antlrcpp::Any visitStat(VMParser::StatContext *ctx);
    virtual antlrcpp::Any visitIdExp(VMParser::IdExpContext *ctx);
    virtual antlrcpp::Any visitFunctionCallExp(VMParser::FunctionCallExpContext *ctx);
    virtual antlrcpp::Any visitLogicExp(VMParser::LogicExpContext *ctx);
    virtual antlrcpp::Any visitStringExp(VMParser::StringExpContext *ctx);
    virtual antlrcpp::Any visitAccessObjectExp(VMParser::AccessObjectExpContext *ctx);
    virtual antlrcpp::Any visitNullExp(VMParser::NullExpContext *ctx);
    virtual antlrcpp::Any visitNumberExp(VMParser::NumberExpContext *ctx);
    virtual antlrcpp::Any visitMathExp(VMParser::MathExpContext *ctx);
    virtual antlrcpp::Any visitArrayExp(VMParser::ArrayExpContext *ctx);
    virtual antlrcpp::Any visitVariable(VMParser::VariableContext *ctx);
    virtual antlrcpp::Any visitFor(VMParser::ForContext *ctx);
    virtual antlrcpp::Any visitIf(VMParser::IfContext *ctx);
    virtual antlrcpp::Any visitStruct(VMParser::StructContext *ctx);
    virtual antlrcpp::Any visitArray(VMParser::ArrayContext *ctx);
    virtual antlrcpp::Any visitArrayblock(VMParser::ArrayblockContext *ctx);
    virtual antlrcpp::Any visitBlock(VMParser::BlockContext *ctx);
    virtual antlrcpp::Any visitFunctionparameters(VMParser::FunctionparametersContext *ctx);
    virtual antlrcpp::Any visitFunctionblock(VMParser::FunctionblockContext *ctx);
    virtual antlrcpp::Any visitFunctiondefinition(VMParser::FunctiondefinitionContext *ctx);
    virtual antlrcpp::Any visitReturnexpression(VMParser::ReturnexpressionContext *ctx);
    virtual antlrcpp::Any visitFunctionarguments(VMParser::FunctionargumentsContext *ctx);
    virtual antlrcpp::Any visitAccessObject(VMParser::AccessObjectContext *ctx);
    virtual antlrcpp::Any visitFunctioncall(VMParser::FunctioncallContext *ctx);
    virtual antlrcpp::Any visitElse(VMParser::ElseContext *ctx);

    llvm::Value *BoolValue(bool Value);
    llvm::Value *IntValue(int Value);
    llvm::Value *DoubleValue(double Value);
    llvm::Value *FloatValue(float Value);
    llvm::Value *LongLongValue(unsigned long long Value);

    llvm::Value *SearchVariable(std::string Variable);

    llvm::Value * searchOrCast(std::string valueString);
    std::tuple<llvm::Value *, llvm::Value *> castOrNotCast(llvm::Value *leftValue, llvm::Value *rightValue);
    llvm::Value *LogsErrorsV(const char *Str);
    void LogError(const char *Str);

    llvm::Value *RetLogOp(llvm::Value *leftValue, llvm::Value *rightValue, std::string caseLog);

    void createPrintFunction(llvm::Module &module, llvm::LLVMContext &context);
};
