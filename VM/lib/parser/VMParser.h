
// Generated from ./VMParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  VMParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleStat = 1, RuleExpr = 2, RuleVariable = 3, RuleWhile = 4, 
    RuleIf = 5, RuleStruct = 6, RuleArray = 7, RuleArrayblock = 8, RuleBlock = 9, 
    RuleFunctionparameters = 10, RuleFunctionblock = 11, RuleFunctiondefinition = 12, 
    RuleReturnexpression = 13, RuleFunctionarguments = 14, RuleFunctioncall = 15
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
  class VariableContext;
  class WhileContext;
  class IfContext;
  class StructContext;
  class ArrayContext;
  class ArrayblockContext;
  class BlockContext;
  class FunctionparametersContext;
  class FunctionblockContext;
  class FunctiondefinitionContext;
  class ReturnexpressionContext;
  class FunctionargumentsContext;
  class FunctioncallContext; 

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
    WhileContext *while_();
    FunctiondefinitionContext *functiondefinition();
    ExprContext *expr();
    IfContext *if_();
    StructContext *struct_();
    ReturnexpressionContext *returnexpression();


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

  class  IdExpContext : public ExprContext {
  public:
    IdExpContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallExpContext : public ExprContext {
  public:
    FunctionCallExpContext(ExprContext *ctx);

    FunctioncallContext *functioncall();

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

  class  StringExpContext : public ExprContext {
  public:
    StringExpContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanExpContext : public ExprContext {
  public:
    BooleanExpContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *BOOL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NullExpContext : public ExprContext {
  public:
    NullExpContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NULL_();

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

  class  EqEqExpContext : public ExprContext {
  public:
    EqEqExpContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EQEQ();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberExpContext : public ExprContext {
  public:
    NumberExpContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NUMBER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MathExpContext : public ExprContext {
  public:
    MathExpContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayExpContext : public ExprContext {
  public:
    ArrayExpContext(ExprContext *ctx);

    ArrayContext *array();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *hint = nullptr;
    VMParser::ExprContext *REF = nullptr;
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    antlr4::tree::TerminalNode *NUMBER();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  WhileContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *CONTROL = nullptr;
    antlr4::Token *FROM = nullptr;
    antlr4::Token *TO = nullptr;
    WhileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RW_FOR();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    BlockContext *block();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileContext* while_();

  class  IfContext : public antlr4::ParserRuleContext {
  public:
    VMParser::ExprContext *cond = nullptr;
    IfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RW_IF();
    antlr4::tree::TerminalNode *SEMICOLON();
    BlockContext *block();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfContext* if_();

  class  StructContext : public antlr4::ParserRuleContext {
  public:
    StructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RW_STRUCTURE();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *ID();
    FunctionblockContext *functionblock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructContext* struct_();

  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    ArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RW_ARRAY();
    ArrayblockContext *arrayblock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayContext* array();

  class  ArrayblockContext : public antlr4::ParserRuleContext {
  public:
    ArrayblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START_BLOCK();
    antlr4::tree::TerminalNode *END_BLOCK();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayblockContext* arrayblock();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *RW_END();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  FunctionparametersContext : public antlr4::ParserRuleContext {
  public:
    FunctionparametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionparametersContext* functionparameters();

  class  FunctionblockContext : public antlr4::ParserRuleContext {
  public:
    FunctionblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START_BLOCK();
    antlr4::tree::TerminalNode *END_BLOCK();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionblockContext* functionblock();

  class  FunctiondefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctiondefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RW_DECLAREFUNCTION();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionblockContext *functionblock();
    FunctionparametersContext *functionparameters();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctiondefinitionContext* functiondefinition();

  class  ReturnexpressionContext : public antlr4::ParserRuleContext {
  public:
    ReturnexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RW_RETURN();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnexpressionContext* returnexpression();

  class  FunctionargumentsContext : public antlr4::ParserRuleContext {
  public:
    FunctionargumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionargumentsContext* functionarguments();

  class  FunctioncallContext : public antlr4::ParserRuleContext {
  public:
    FunctioncallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RW_CALLFUNCTION();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    FunctionargumentsContext *functionarguments();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctioncallContext* functioncall();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

