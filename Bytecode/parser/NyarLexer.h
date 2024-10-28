
// Generated from ./NyarLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  NyarLexer : public antlr4::Lexer {
public:
  enum {
    LAPREN = 1, RPAREN = 2, ADD = 3, RESTA = 4, MUL = 5, DIV = 6, LESS = 7, 
    GREATER = 8, EQUAL = 9, NEQ = 10, EQEQ = 11, COMMA = 12, SEMI = 13, 
    LBRACKET = 14, RBRACKET = 15, LINE_COMMENT = 16, START_BLOCK = 17, END_BLOCK = 18, 
    STRING = 19, COMMENT = 20, IMPORT = 21, FUNC = 22, FOR = 23, WHILE = 24, 
    DESDE = 25, HASTA = 26, EN = 27, COND = 28, ID = 29, NUM = 30, BOOL = 31, 
    NADA = 32, RETURN = 33, WS = 34
  };

  explicit NyarLexer(antlr4::CharStream *input);

  ~NyarLexer() override;


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

