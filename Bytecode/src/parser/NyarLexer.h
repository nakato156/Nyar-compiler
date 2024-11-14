
// Generated from NyarLexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  NyarLexer : public antlr4::Lexer {
public:
  enum {
    LAPREN = 1, RPAREN = 2, ADD = 3, RESTA = 4, MUL = 5, DIV = 6, LESS = 7, 
    LESS_EQUAL = 8, GREATER = 9, GREATER_EQUAL = 10, EQUAL = 11, NEQ = 12, 
    EQEQ = 13, COMMA = 14, SEMI = 15, LBRACKET = 16, RBRACKET = 17, OR = 18, 
    AND = 19, DOT = 20, HINT_INDICATOR = 21, LINE_COMMENT = 22, START_BLOCK = 23, 
    END_BLOCK = 24, STRING = 25, COMMENT = 26, IMPORT = 27, STRUCTDef = 28, 
    FUNC = 29, FOR = 30, WHILE = 31, DESDE = 32, HASTA = 33, EN = 34, COND = 35, 
    ELSE_COND = 36, BOOL = 37, NADA = 38, RETURN = 39, ID = 40, NUM = 41, 
    WS = 42
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

