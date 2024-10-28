#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include <unordered_map>
#include <string>
#include <optional>
#include <variant>
#include <vector>
#include <memory>
#include <llvm/IR/Value.h>
#include <llvm/IR/Function.h>
#include "antlr4-runtime.h"

// enum para simbolos
enum class SymbolType {
    Function
    // Variable // comentado si es que se requiere xd
};

// Estructura para una función
struct FunctionSymbol {
    std::string name;
    std::vector<std::string> params;
    llvm::Function *llvmFunc;
};

// Tipo de símbolo usando `std::variant`
using Symbol = std::variant<FunctionSymbol>;

class SymbolTable {
private:
    std::unordered_map<std::string, Symbol> functions;
    std::shared_ptr<SymbolTable> parent;

public:
    SymbolTable(std::shared_ptr<SymbolTable> parentScope = nullptr)
        : parent(parentScope) {}

    void defineFunction(const std::string& name, const std::vector<std::string>& params, llvm::Function *llvmFunc) {
        functions[name] = FunctionSymbol{name, params, llvmFunc};
    }

    std::optional<FunctionSymbol> getFunction(const std::string& name) {
        if (functions.count(name)) {
            return std::get<FunctionSymbol>(functions[name]);
        }
        return parent ? parent->getFunction(name) : std::nullopt;
    }

    // para las variables
    // void defineVariable(const std::string& name, llvm::Value *value);
    // std::optional<llvm::Value*> getVariable(const std::string& name);
};

#endif