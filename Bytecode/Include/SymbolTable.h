#include <string>
#include <unordered_map>
#include <vector>
#include <memory>
#include <llvm/IR/Function.h>

class SymbolTable {
public:
    struct FunctionInfo {
        //nombre de la funcion
        std::string name;
        //lista de parametros
        std::vector<std::string> params;
        llvm::Function *llvmFunc;
    };

    SymbolTable* createChildScope();
    
    void defineFunction(const std::string &name, const std::vector<std::string> &params, llvm::Function *func);
    FunctionInfo* getFunction(const std::string &name);

private:
    std::unordered_map<std::string, FunctionInfo> functions;  // Mapa de funciones
    SymbolTable* parentScope = nullptr;  // Scope padre para herencia de contexto
};
