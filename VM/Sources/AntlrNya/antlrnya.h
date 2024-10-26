#ifndef ANTLRNYA_H
#define ANTLRNYA_H

#include "antlr4-runtime.h"
#include "include/lib/VMLexer.h"
#include "include/lib/VMParser.h"
#include "include/lib/VMParserBaseVisitor.h"
#include "include/lib/VMParserVisitor.h"

namespace AntlrNya
{
    class Parser
    {
    public:
        static antlr4::ANTLRInputStream createInputStream(const std::string &input);
        static antlr4::CommonTokenStream createTokenStream(VMLexer &lexer);
        static VMLexer createLexer(antlr4::ANTLRInputStream &input);
        static VMParser createParser(antlr4::CommonTokenStream &tokens);
    };
}

#endif // ANTLRNYA_H