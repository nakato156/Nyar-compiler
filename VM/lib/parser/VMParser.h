
// Generated from ./VMParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  VMParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleStat = 1, RuleExpr = 2, RuleVariable = 3, RuleFor = 4, 
    RuleIf = 5, RuleElse = 6, RuleStruct = 7, RuleArray = 8, RuleArrayblock = 9, 
    RuleBlock = 10, RuleFunctionparameters = 11, RuleFunctionblock = 12, 
    RuleFunctiondefinition = 13, RuleReturnexpression = 14, RuleFunctionarguments = 15, 
    RuleAccessObject = 16, RuleFunctioncall = 17
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
  class ForContext;
  class IfContext;
  class ElseContext;
  class StructContext;
  class ArrayContext;
  class ArrayblockContext;
  class BlockContext;
  class FunctionparametersContext;
  class FunctionblockContext;
  class FunctiondefinitionContext;
  class ReturnexpressionContext;
  class FunctionargumentsContext;
  class AccessObjectContext;
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
    ForContext *for_();
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

  class  LogicExpContext : public ExprContext {
  public:
    LogicExpContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LESSEQUAL();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *GREATEREQUAL();
    antlr4::tree::TerminalNode *EQEQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringExpContext : public ExprContext {
  public:
    StringExpContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AccessObjectExpContext : public ExprContext {
  public:
    AccessObjectExpContext(ExprContext *ctx);

    AccessObjectContext *accessObject();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExpContext : public ExprContext {
  public:
    ParenExpContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NullExpContext : public ExprContext {
  public:
    NullExpContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NULL_();

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
    VMParser::ExprContext *val = nullptr;
    VMParser::ExprContext *ref = nullptr;
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ForContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *CONTROL = nullptr;
    antlr4::Token *FROM = nullptr;
    antlr4::Token *TO = nullptr;
    ForContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  ForContext* for_();

  class  IfContext : public antlr4::ParserRuleContext {
  public:
    VMParser::ExprContext *cond = nullptr;
    IfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RW_IF();
    antlr4::tree::TerminalNode *SEMICOLON();
    BlockContext *block();
    ElseContext *else_();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfContext* if_();

  class  ElseContext : public antlr4::ParserRuleContext {
  public:
    ElseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RW_IFELSE();
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseContext* else_();

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

  class  AccessObjectContext : public antlr4::ParserRuleContext {
  public:
    AccessObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessObjectContext* accessObject();

  class  FunctioncallContext : public antlr4::ParserRuleContext {
  public:
    FunctioncallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RW_CALLFUNCTION();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionargumentsContext *functionarguments();


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

