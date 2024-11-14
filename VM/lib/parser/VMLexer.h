
// Generated from ./VMLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  VMLexer : public antlr4::Lexer {
public:
  enum {
    LPAREN = 1, RPAREN = 2, START_BLOCK = 3, END_BLOCK = 4, SUM = 5, SUB = 6, 
    MUL = 7, DIV = 8, LESS = 9, GREATER = 10, EQUAL = 11, NEQ = 12, EQEQ = 13, 
    AND = 14, OR = 15, RW_FOR = 16, RW_IF = 17, RW_END = 18, RW_DECLAREFUNCTION = 19, 
    RW_CALLFUNCTION = 20, RW_RETURN = 21, RW_STRUCTURE = 22, RW_ARRAY = 23, 
    RESERVEDWORDS = 24, COMMA = 25, SEMICOLON = 26, COLON = 27, LBRACKET = 28, 
    RBRACKET = 29, LINE_COMMENT = 30, STRING = 31, COMMENT = 32, ID = 33, 
    NUMBER = 34, BOOL = 35, NULL_ = 36, WS = 37
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

