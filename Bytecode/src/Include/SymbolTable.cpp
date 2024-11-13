#include "Include/SymbolTable.h"

void SymbolTable::defineFunction(const std::string  &name, MLVM::Function *func){
    functions[name] = func;
}
MLVM::Function* SymbolTable::getFunction(const std::string &name){
    if(functions.find(name)!=functions.end()){
        return functions[name];
    }
    if (parentScope){

        return parentScope->getFunction(name);
    }
    return nullptr;
}

SymbolTable* SymbolTable::createChildScope(){
    auto* childScope = new SymbolTable();
    childScope->parentScope = this;
    return childScope;
}
