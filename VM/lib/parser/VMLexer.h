
// Generated from ./VMLexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  VMLexer : public antlr4::Lexer {
public:
  enum {
    LPAREN = 1, RPAREN = 2, START_BLOCK = 3, END_BLOCK = 4, SUM = 5, SUB = 6, 
    MUL = 7, DIV = 8, LESS = 9, LESSEQUAL = 10, GREATER = 11, GREATEREQUAL = 12, 
    EQUAL = 13, NEQ = 14, EQEQ = 15, AND = 16, OR = 17, RW_FOR = 18, RW_IF = 19, 
    RW_IFELSE = 20, RW_END = 21, RW_DECLAREFUNCTION = 22, RW_CALLFUNCTION = 23, 
    RW_RETURN = 24, RW_STRUCTURE = 25, RW_ARRAY = 26, RESERVEDWORDS = 27, 
    COMMA = 28, SEMICOLON = 29, COLON = 30, LBRACKET = 31, RBRACKET = 32, 
    LINE_COMMENT = 33, STRING = 34, COMMENT = 35, ID = 36, NUMBER = 37, 
    BOOL = 38, NULL_ = 39, WS = 40, DOT = 41
  };

  explicit VMLexer(antlr4::CharStream *input);

  ~VMLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

