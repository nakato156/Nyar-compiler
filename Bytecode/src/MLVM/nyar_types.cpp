#include "./nyar_types.h"

std::unordered_map<SymType, std::string> TYPES_NYAR = {
    {SymType::Int, "int"},
    {SymType::Float, "float"},
    {SymType::String, "string"},
    {SymType::Bool, "bool"},
    {SymType::None, "none"},
    {SymType::EXTERNAL, "external"}
};