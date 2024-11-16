#include <iostream>
#include <vector>
#include <string>
#include <sstream>

namespace Strfunctions {
    std::string repetir(const std::string& str, double veces);
    std::string repetir(double veces, const std::string& str);
    std::string join(const std::vector<std::string>&, const std::string&);
}