
// Generated from ./VMParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  SWIFT_SHARED_REFERENCE(, ) VMParser : public antlr4::Parser {
public:
  enum {
    LAPREN = 1, RPAREN = 2, ADD = 3, RESTA = 4, MUL = 5, DIV = 6, LESS = 7, 
    GREATER = 8, EQUAL = 9, NEQ = 10, EQEQ = 11, COMMA = 12, SEMI = 13, 
    LBRACKET = 14, RBRACKET = 15, LINE_COMMENT = 16, START_BLOCK = 17, END_BLOCK = 18, 
    STRING = 19, COMMENT = 20, IMPORT = 21, FUNC = 22, FOR = 23, WHILE = 24, 
    DESDE = 25, HASTA = 26, EN = 27, COND = 28, ID = 29, NUM = 30, BOOL = 31, 
    NADA = 32, RETURN = 33, WS = 34
  };

  enum {
    RuleProgram = 0, RuleStat = 1, RuleExpr = 2, RuleArray = 3, RuleVariable = 4, 
    RuleFuncParams = 5, RuleFuncDef = 6, RuleFuncArgs = 7, RuleFuncCall = 8, 
    RuleIterar = 9, RuleCondicion = 10
  };

  explicit VMParser(antlr4::TokenStream *input);

  VMParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~VMParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StatContext;
  class ExprContext;
  class ArrayContext;
  class VariableContext;
  class FuncParamsContext;
  class FuncDefContext;
  class FuncArgsContext;
  class FuncCallContext;
  class IterarContext;
  class CondicionContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *SEMI();
    ExprContext *expr();
    FuncDefContext *funcDef();
    IterarContext *iterar();
    antlr4::tree::TerminalNode *END_BLOCK();
    CondicionContext *condicion();
    ArrayContext *array();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatContext* stat();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumberContext : public ExprContext {
  public:
    NumberContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NUM();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqExpContext : public ExprContext {
  public:
    EqExpContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *GREATER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanContext : public ExprContext {
  public:
    BooleanContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *BOOL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AritExpContext : public ExprContext {
  public:
    AritExpContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *RESTA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringContext : public ExprContext {
  public:
    StringContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExpContext : public ExprContext {
  public:
    ParenExpContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LAPREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FCallContext : public ExprContext {
  public:
    FCallContext(ExprContext *ctx);

    FuncCallContext *funcCall();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdContext : public ExprContext {
  public:
    IdContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NeqExpContext : public ExprContext {
  public:
    NeqExpContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *NEQ();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArregloContext : public ExprContext {
  public:
    ArregloContext(ExprContext *ctx);

    ArrayContext *array();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqEqExpContext : public ExprContext {
  public:
    EqEqExpContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EQEQ();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    ArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayContext* array();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  FuncParamsContext : public antlr4::ParserRuleContext {
  public:
    FuncParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncParamsContext* funcParams();

  class  FuncDefContext : public antlr4::ParserRuleContext {
  public:
    FuncDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LAPREN();
    FuncParamsContext *funcParams();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *START_BLOCK();
    antlr4::tree::TerminalNode *END_BLOCK();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDefContext* funcDef();

  class  FuncArgsContext : public antlr4::ParserRuleContext {
  public:
    FuncArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncArgsContext* funcArgs();

  class  FuncCallContext : public antlr4::ParserRuleContext {
  public:
    FuncCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LAPREN();
    FuncArgsContext *funcArgs();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncCallContext* funcCall();

  class  IterarContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *i = nullptr;
    antlr4::Token *f = nullptr;
    IterarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *DESDE();
    antlr4::tree::TerminalNode *HASTA();
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *EN();
    ArrayContext *array();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterarContext* iterar();

  class  CondicionContext : public antlr4::ParserRuleContext {
  public:
    CondicionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COND();
    antlr4::tree::TerminalNode* COND(size_t i);
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> START_BLOCK();
    antlr4::tree::TerminalNode* START_BLOCK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> END_BLOCK();
    antlr4::tree::TerminalNode* END_BLOCK(size_t i);
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondicionContext* condicion();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

