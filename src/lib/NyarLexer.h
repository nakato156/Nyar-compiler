
// Generated from NyarLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  NyarLexer : public antlr4::Lexer {
public:
  enum {
    LAPREN = 1, RPAREN = 2, ADD = 3, RESTA = 4, MUL = 5, DIV = 6, LESS = 7, 
    GREATER = 8, EQUAL = 9, COMMA = 10, SEMI = 11, LBRACKET = 12, RBRACKET = 13, 
    LINE_COMMENT = 14, START_BLOCK = 15, END_BLOCK = 16, STRING = 17, COMMENT = 18, 
    IMPORT = 19, FUNC = 20, FOR = 21, WHILE = 22, DESDE = 23, HASTA = 24, 
    EN = 25, COND = 26, ID = 27, NUM = 28, BOOL = 29, NADA = 30, RETURN = 31, 
    WS = 32
  };

  explicit NyarLexer(antlr4::CharStream *input);
  ~NyarLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

