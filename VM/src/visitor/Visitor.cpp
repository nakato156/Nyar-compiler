#include "Visitor.h"

void VMVisitor::saveModule(const std::string &filePath)
{
    std::error_code errorCode;
    llvm::raw_fd_ostream outLL(filePath, errorCode);
    Module->print(outLL, nullptr);
}