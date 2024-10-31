#include "Include/SymbolTable.h"

void SymbolTable::defineFunction(const std::string  &name, const std::vector<std::string> &params, llvm::Function *func){
    functions [name]=FunctionInfo{name,params, func};
}
SymbolTable::FunctionInfo* SymbolTable::getFunction(const std::string &name){
    if(functions.find(name)!=functions.end()){
        return &functions[name];
    }
    if (parentScope){

        return parentScope->getFunction(name);
    }
    return nullptr;
}
SymbolTable* SymbolTable::createChildScope(){
    auto* childScope=new SymbolTable();
    childScope->parentScope=this;
    return childScope;
}
