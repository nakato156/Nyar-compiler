#include <string>
#include <unordered_map>
#include <vector>
#include <memory>
#include "../MLVM/MLVM.h"

class SymbolTable {
public:
    SymbolTable* createChildScope();
    
    void defineFunction(const std::string &name, MLVM::Function *func);
    MLVM::Function* getFunction(const std::string &name);

private:
    std::unordered_map<std::string, MLVM::Function*> functions;  // Mapa de funciones
    SymbolTable* parentScope = nullptr;  // Scope padre para herencia de contexto
};
