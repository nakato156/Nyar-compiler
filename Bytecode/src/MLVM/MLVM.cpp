#include "MLVM.h"

using namespace std;

string MLVM::Null::toBytecode() const {
    return "@NNULL";
}

string bytecodeToString(const antlrcpp::Any& value) {
    if (value.type() == typeid(std::shared_ptr<MLVM::Variable>)) {
        return std::any_cast<std::shared_ptr<MLVM::Variable>>(value)->getVar();
    }
    else if (value.type() == typeid(std::shared_ptr<MLVM::Function>)) {
        return std::any_cast<std::shared_ptr<MLVM::Function>>(value)->toBytecode();
    }
    else if (value.type() == typeid(std::shared_ptr<MLVM::UnEvaluable>)) {
        return std::any_cast<std::shared_ptr<MLVM::UnEvaluable>>(value)->getVar();
    }
    else if (value.type() == typeid(std::string)) {
        return '"' + std::any_cast<std::string>(value) + '"';
    }
}