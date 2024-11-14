#ifndef M_NYAR_TYPES_H
#define M_NYAR_TYPES_H
#include <unordered_map>
#include <string>

// Enum for equeals comparations
enum class SymCompare {
    Equal,
    NotEqual,
    LessThan,
    LessThanOrEqual,
    GreaterThan,
    GreaterThanOrEqual
};

enum class SymType {
    Int,
    Float,
    String,
    Bool,
    None,
    EXTERNAL,
    NULLN,
};

extern std::unordered_map<SymType, std::string> TYPES_NYAR;

#endif