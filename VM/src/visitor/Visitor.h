#include "antlr4-runtime.h"
#include "../../lib/parser/VMParserBaseVisitor.h"

#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"

class VMVisitor : public VMParserBaseVisitor
{
    private:
        llvm::LLVMContext Context;
        llvm::Module *Module;
        llvm::IRBuilder<> *Builder;
    public:
        VMVisitor(){};
        ~VMVisitor(){};

        void saveModule(const std::string &filePath);
};