
// Generated from ./VMParser.g4 by ANTLR 4.13.2


#include "VMParserVisitor.h"

#include "VMParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct VMParserStaticData final {
  VMParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  VMParserStaticData(const VMParserStaticData&) = delete;
  VMParserStaticData(VMParserStaticData&&) = delete;
  VMParserStaticData& operator=(const VMParserStaticData&) = delete;
  VMParserStaticData& operator=(VMParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag vmparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<VMParserStaticData> vmparserParserStaticData = nullptr;

void vmparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (vmparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(vmparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<VMParserStaticData>(
    std::vector<std::string>{
      "program", "stat", "expr", "variable", "while", "if", "struct", "array", 
      "arrayblock", "block", "functionparameters", "functionblock", "functiondefinition", 
      "returnexpression", "functionarguments", "functioncall"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'<'", 
      "'>'", "'='", "'!='", "'=='", "'&&'", "'||'", "'@_for'", "'@si'", 
      "'@_end'", "'@declare funcion'", "'@call'", "'@retornar'", "'@estructura'", 
      "'@array'", "'@'", "','", "';'", "':'", "'['", "']'", "", "", "", 
      "", "", "", "'@NNULL'"
    },
    std::vector<std::string>{
      "", "LPAREN", "RPAREN", "START_BLOCK", "END_BLOCK", "SUM", "SUB", 
      "MUL", "DIV", "LESS", "GREATER", "EQUAL", "NEQ", "EQEQ", "AND", "OR", 
      "RW_FOR", "RW_IF", "RW_END", "RW_DECLAREFUNCTION", "RW_CALLFUNCTION", 
      "RW_RETURN", "RW_STRUCTURE", "RW_ARRAY", "RESERVEDWORDS", "COMMA", 
      "SEMICOLON", "COLON", "LBRACKET", "RBRACKET", "LINE_COMMENT", "STRING", 
      "COMMENT", "ID", "NUMBER", "BOOL", "NULL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,37,191,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,1,0,5,0,34,8,0,10,0,12,0,37,9,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,3,1,48,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,58,8,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,73,8,2,10,2,12,2,
  	76,9,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,3,3,94,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,5,5,108,
  	8,5,10,5,12,5,111,9,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,8,1,8,
  	1,8,1,8,5,8,127,8,8,10,8,12,8,130,9,8,3,8,132,8,8,1,8,1,8,1,9,1,9,5,9,
  	138,8,9,10,9,12,9,141,9,9,1,9,1,9,1,10,1,10,1,10,5,10,148,8,10,10,10,
  	12,10,151,9,10,1,11,1,11,5,11,155,8,11,10,11,12,11,158,9,11,1,11,1,11,
  	1,12,1,12,1,12,1,12,3,12,166,8,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,
  	1,13,1,14,1,14,1,14,5,14,179,8,14,10,14,12,14,182,9,14,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,0,1,4,16,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,0,3,1,0,5,8,1,0,9,10,1,0,33,34,200,0,35,1,0,0,0,2,47,1,0,0,0,4,
  	57,1,0,0,0,6,93,1,0,0,0,8,95,1,0,0,0,10,104,1,0,0,0,12,114,1,0,0,0,14,
  	119,1,0,0,0,16,122,1,0,0,0,18,135,1,0,0,0,20,144,1,0,0,0,22,152,1,0,0,
  	0,24,161,1,0,0,0,26,170,1,0,0,0,28,175,1,0,0,0,30,183,1,0,0,0,32,34,3,
  	2,1,0,33,32,1,0,0,0,34,37,1,0,0,0,35,33,1,0,0,0,35,36,1,0,0,0,36,38,1,
  	0,0,0,37,35,1,0,0,0,38,39,5,0,0,1,39,1,1,0,0,0,40,48,3,6,3,0,41,48,3,
  	8,4,0,42,48,3,24,12,0,43,48,3,4,2,0,44,48,3,10,5,0,45,48,3,12,6,0,46,
  	48,3,26,13,0,47,40,1,0,0,0,47,41,1,0,0,0,47,42,1,0,0,0,47,43,1,0,0,0,
  	47,44,1,0,0,0,47,45,1,0,0,0,47,46,1,0,0,0,48,3,1,0,0,0,49,50,6,2,-1,0,
  	50,58,5,34,0,0,51,58,5,35,0,0,52,58,5,31,0,0,53,58,5,33,0,0,54,58,5,36,
  	0,0,55,58,3,14,7,0,56,58,3,30,15,0,57,49,1,0,0,0,57,51,1,0,0,0,57,52,
  	1,0,0,0,57,53,1,0,0,0,57,54,1,0,0,0,57,55,1,0,0,0,57,56,1,0,0,0,58,74,
  	1,0,0,0,59,60,10,4,0,0,60,61,7,0,0,0,61,73,3,4,2,5,62,63,10,3,0,0,63,
  	64,5,13,0,0,64,73,3,4,2,4,65,66,10,2,0,0,66,67,7,1,0,0,67,68,5,11,0,0,
  	68,73,3,4,2,3,69,70,10,1,0,0,70,71,5,12,0,0,71,73,3,4,2,2,72,59,1,0,0,
  	0,72,62,1,0,0,0,72,65,1,0,0,0,72,69,1,0,0,0,73,76,1,0,0,0,74,72,1,0,0,
  	0,74,75,1,0,0,0,75,5,1,0,0,0,76,74,1,0,0,0,77,78,5,33,0,0,78,79,5,27,
  	0,0,79,80,5,33,0,0,80,81,5,26,0,0,81,82,5,34,0,0,82,83,5,26,0,0,83,84,
  	3,4,2,0,84,85,5,26,0,0,85,94,1,0,0,0,86,87,5,33,0,0,87,88,5,26,0,0,88,
  	89,3,4,2,0,89,90,5,26,0,0,90,91,3,4,2,0,91,92,5,26,0,0,92,94,1,0,0,0,
  	93,77,1,0,0,0,93,86,1,0,0,0,94,7,1,0,0,0,95,96,5,16,0,0,96,97,5,26,0,
  	0,97,98,5,33,0,0,98,99,5,26,0,0,99,100,7,2,0,0,100,101,5,26,0,0,101,102,
  	7,2,0,0,102,103,3,18,9,0,103,9,1,0,0,0,104,105,5,17,0,0,105,109,5,26,
  	0,0,106,108,3,4,2,0,107,106,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,109,
  	110,1,0,0,0,110,112,1,0,0,0,111,109,1,0,0,0,112,113,3,18,9,0,113,11,1,
  	0,0,0,114,115,5,22,0,0,115,116,5,26,0,0,116,117,5,33,0,0,117,118,3,22,
  	11,0,118,13,1,0,0,0,119,120,5,23,0,0,120,121,3,16,8,0,121,15,1,0,0,0,
  	122,131,5,3,0,0,123,128,3,4,2,0,124,125,5,26,0,0,125,127,3,4,2,0,126,
  	124,1,0,0,0,127,130,1,0,0,0,128,126,1,0,0,0,128,129,1,0,0,0,129,132,1,
  	0,0,0,130,128,1,0,0,0,131,123,1,0,0,0,131,132,1,0,0,0,132,133,1,0,0,0,
  	133,134,5,4,0,0,134,17,1,0,0,0,135,139,5,27,0,0,136,138,3,2,1,0,137,136,
  	1,0,0,0,138,141,1,0,0,0,139,137,1,0,0,0,139,140,1,0,0,0,140,142,1,0,0,
  	0,141,139,1,0,0,0,142,143,5,18,0,0,143,19,1,0,0,0,144,149,5,33,0,0,145,
  	146,5,25,0,0,146,148,5,33,0,0,147,145,1,0,0,0,148,151,1,0,0,0,149,147,
  	1,0,0,0,149,150,1,0,0,0,150,21,1,0,0,0,151,149,1,0,0,0,152,156,5,3,0,
  	0,153,155,3,2,1,0,154,153,1,0,0,0,155,158,1,0,0,0,156,154,1,0,0,0,156,
  	157,1,0,0,0,157,159,1,0,0,0,158,156,1,0,0,0,159,160,5,4,0,0,160,23,1,
  	0,0,0,161,162,5,19,0,0,162,163,5,33,0,0,163,165,5,1,0,0,164,166,3,20,
  	10,0,165,164,1,0,0,0,165,166,1,0,0,0,166,167,1,0,0,0,167,168,5,2,0,0,
  	168,169,3,22,11,0,169,25,1,0,0,0,170,171,5,21,0,0,171,172,5,26,0,0,172,
  	173,3,4,2,0,173,174,5,26,0,0,174,27,1,0,0,0,175,180,3,4,2,0,176,177,5,
  	25,0,0,177,179,3,4,2,0,178,176,1,0,0,0,179,182,1,0,0,0,180,178,1,0,0,
  	0,180,181,1,0,0,0,181,29,1,0,0,0,182,180,1,0,0,0,183,184,5,20,0,0,184,
  	185,5,26,0,0,185,186,5,33,0,0,186,187,5,1,0,0,187,188,3,28,14,0,188,189,
  	5,2,0,0,189,31,1,0,0,0,14,35,47,57,72,74,93,109,128,131,139,149,156,165,
  	180
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  vmparserParserStaticData = std::move(staticData);
}

}

VMParser::VMParser(TokenStream *input) : VMParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

VMParser::VMParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  VMParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *vmparserParserStaticData->atn, vmparserParserStaticData->decisionToDFA, vmparserParserStaticData->sharedContextCache, options);
}

VMParser::~VMParser() {
  delete _interpreter;
}

const atn::ATN& VMParser::getATN() const {
  return *vmparserParserStaticData->atn;
}

std::string VMParser::getGrammarFileName() const {
  return "VMParser.g4";
}

const std::vector<std::string>& VMParser::getRuleNames() const {
  return vmparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& VMParser::getVocabulary() const {
  return vmparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView VMParser::getSerializedATN() const {
  return vmparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

VMParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::ProgramContext::EOF() {
  return getToken(VMParser::EOF, 0);
}

std::vector<VMParser::StatContext *> VMParser::ProgramContext::stat() {
  return getRuleContexts<VMParser::StatContext>();
}

VMParser::StatContext* VMParser::ProgramContext::stat(size_t i) {
  return getRuleContext<VMParser::StatContext>(i);
}


size_t VMParser::ProgramContext::getRuleIndex() const {
  return VMParser::RuleProgram;
}


std::any VMParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

VMParser::ProgramContext* VMParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, VMParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 131012952064) != 0)) {
      setState(32);
      stat();
      setState(37);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(38);
    match(VMParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

VMParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

VMParser::VariableContext* VMParser::StatContext::variable() {
  return getRuleContext<VMParser::VariableContext>(0);
}

VMParser::WhileContext* VMParser::StatContext::while_() {
  return getRuleContext<VMParser::WhileContext>(0);
}

VMParser::FunctiondefinitionContext* VMParser::StatContext::functiondefinition() {
  return getRuleContext<VMParser::FunctiondefinitionContext>(0);
}

VMParser::ExprContext* VMParser::StatContext::expr() {
  return getRuleContext<VMParser::ExprContext>(0);
}

VMParser::IfContext* VMParser::StatContext::if_() {
  return getRuleContext<VMParser::IfContext>(0);
}

VMParser::StructContext* VMParser::StatContext::struct_() {
  return getRuleContext<VMParser::StructContext>(0);
}

VMParser::ReturnexpressionContext* VMParser::StatContext::returnexpression() {
  return getRuleContext<VMParser::ReturnexpressionContext>(0);
}


size_t VMParser::StatContext::getRuleIndex() const {
  return VMParser::RuleStat;
}


std::any VMParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

VMParser::StatContext* VMParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, VMParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(47);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(40);
      variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(41);
      while_();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(42);
      functiondefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(43);
      expr(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(44);
      if_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(45);
      struct_();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(46);
      returnexpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

VMParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t VMParser::ExprContext::getRuleIndex() const {
  return VMParser::RuleExpr;
}

void VMParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdExpContext ------------------------------------------------------------------

tree::TerminalNode* VMParser::IdExpContext::ID() {
  return getToken(VMParser::ID, 0);
}

VMParser::IdExpContext::IdExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::IdExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitIdExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallExpContext ------------------------------------------------------------------

VMParser::FunctioncallContext* VMParser::FunctionCallExpContext::functioncall() {
  return getRuleContext<VMParser::FunctioncallContext>(0);
}

VMParser::FunctionCallExpContext::FunctionCallExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::FunctionCallExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqExpContext ------------------------------------------------------------------

std::vector<VMParser::ExprContext *> VMParser::EqExpContext::expr() {
  return getRuleContexts<VMParser::ExprContext>();
}

VMParser::ExprContext* VMParser::EqExpContext::expr(size_t i) {
  return getRuleContext<VMParser::ExprContext>(i);
}

tree::TerminalNode* VMParser::EqExpContext::EQUAL() {
  return getToken(VMParser::EQUAL, 0);
}

tree::TerminalNode* VMParser::EqExpContext::LESS() {
  return getToken(VMParser::LESS, 0);
}

tree::TerminalNode* VMParser::EqExpContext::GREATER() {
  return getToken(VMParser::GREATER, 0);
}

VMParser::EqExpContext::EqExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::EqExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitEqExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringExpContext ------------------------------------------------------------------

tree::TerminalNode* VMParser::StringExpContext::STRING() {
  return getToken(VMParser::STRING, 0);
}

VMParser::StringExpContext::StringExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::StringExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitStringExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanExpContext ------------------------------------------------------------------

tree::TerminalNode* VMParser::BooleanExpContext::BOOL() {
  return getToken(VMParser::BOOL, 0);
}

VMParser::BooleanExpContext::BooleanExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::BooleanExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitBooleanExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NullExpContext ------------------------------------------------------------------

tree::TerminalNode* VMParser::NullExpContext::NULL_() {
  return getToken(VMParser::NULL_, 0);
}

VMParser::NullExpContext::NullExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::NullExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitNullExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NeqExpContext ------------------------------------------------------------------

std::vector<VMParser::ExprContext *> VMParser::NeqExpContext::expr() {
  return getRuleContexts<VMParser::ExprContext>();
}

VMParser::ExprContext* VMParser::NeqExpContext::expr(size_t i) {
  return getRuleContext<VMParser::ExprContext>(i);
}

tree::TerminalNode* VMParser::NeqExpContext::NEQ() {
  return getToken(VMParser::NEQ, 0);
}

VMParser::NeqExpContext::NeqExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::NeqExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitNeqExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqEqExpContext ------------------------------------------------------------------

std::vector<VMParser::ExprContext *> VMParser::EqEqExpContext::expr() {
  return getRuleContexts<VMParser::ExprContext>();
}

VMParser::ExprContext* VMParser::EqEqExpContext::expr(size_t i) {
  return getRuleContext<VMParser::ExprContext>(i);
}

tree::TerminalNode* VMParser::EqEqExpContext::EQEQ() {
  return getToken(VMParser::EQEQ, 0);
}

VMParser::EqEqExpContext::EqEqExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::EqEqExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitEqEqExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberExpContext ------------------------------------------------------------------

tree::TerminalNode* VMParser::NumberExpContext::NUMBER() {
  return getToken(VMParser::NUMBER, 0);
}

VMParser::NumberExpContext::NumberExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::NumberExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitNumberExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MathExpContext ------------------------------------------------------------------

std::vector<VMParser::ExprContext *> VMParser::MathExpContext::expr() {
  return getRuleContexts<VMParser::ExprContext>();
}

VMParser::ExprContext* VMParser::MathExpContext::expr(size_t i) {
  return getRuleContext<VMParser::ExprContext>(i);
}

tree::TerminalNode* VMParser::MathExpContext::MUL() {
  return getToken(VMParser::MUL, 0);
}

tree::TerminalNode* VMParser::MathExpContext::DIV() {
  return getToken(VMParser::DIV, 0);
}

tree::TerminalNode* VMParser::MathExpContext::SUM() {
  return getToken(VMParser::SUM, 0);
}

tree::TerminalNode* VMParser::MathExpContext::SUB() {
  return getToken(VMParser::SUB, 0);
}

VMParser::MathExpContext::MathExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::MathExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitMathExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayExpContext ------------------------------------------------------------------

VMParser::ArrayContext* VMParser::ArrayExpContext::array() {
  return getRuleContext<VMParser::ArrayContext>(0);
}

VMParser::ArrayExpContext::ArrayExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::ArrayExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitArrayExp(this);
  else
    return visitor->visitChildren(this);
}

VMParser::ExprContext* VMParser::expr() {
   return expr(0);
}

VMParser::ExprContext* VMParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  VMParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  VMParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, VMParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(57);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VMParser::NUMBER: {
        _localctx = _tracker.createInstance<NumberExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(50);
        match(VMParser::NUMBER);
        break;
      }

      case VMParser::BOOL: {
        _localctx = _tracker.createInstance<BooleanExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(51);
        match(VMParser::BOOL);
        break;
      }

      case VMParser::STRING: {
        _localctx = _tracker.createInstance<StringExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(52);
        match(VMParser::STRING);
        break;
      }

      case VMParser::ID: {
        _localctx = _tracker.createInstance<IdExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(53);
        match(VMParser::ID);
        break;
      }

      case VMParser::NULL_: {
        _localctx = _tracker.createInstance<NullExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(54);
        match(VMParser::NULL_);
        break;
      }

      case VMParser::RW_ARRAY: {
        _localctx = _tracker.createInstance<ArrayExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(55);
        array();
        break;
      }

      case VMParser::RW_CALLFUNCTION: {
        _localctx = _tracker.createInstance<FunctionCallExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(56);
        functioncall();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(74);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(72);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MathExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(59);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(60);
          antlrcpp::downCast<MathExpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 480) != 0))) {
            antlrcpp::downCast<MathExpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(61);
          expr(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<EqEqExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(62);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(63);
          antlrcpp::downCast<EqEqExpContext *>(_localctx)->op = match(VMParser::EQEQ);
          setState(64);
          expr(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<EqExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(65);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(66);
          antlrcpp::downCast<EqExpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == VMParser::LESS

          || _la == VMParser::GREATER)) {
            antlrcpp::downCast<EqExpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(67);
          match(VMParser::EQUAL);
          setState(68);
          expr(3);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<NeqExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(69);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(70);
          antlrcpp::downCast<NeqExpContext *>(_localctx)->op = match(VMParser::NEQ);
          setState(71);
          expr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(76);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

VMParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> VMParser::VariableContext::ID() {
  return getTokens(VMParser::ID);
}

tree::TerminalNode* VMParser::VariableContext::ID(size_t i) {
  return getToken(VMParser::ID, i);
}

tree::TerminalNode* VMParser::VariableContext::COLON() {
  return getToken(VMParser::COLON, 0);
}

std::vector<tree::TerminalNode *> VMParser::VariableContext::SEMICOLON() {
  return getTokens(VMParser::SEMICOLON);
}

tree::TerminalNode* VMParser::VariableContext::SEMICOLON(size_t i) {
  return getToken(VMParser::SEMICOLON, i);
}

tree::TerminalNode* VMParser::VariableContext::NUMBER() {
  return getToken(VMParser::NUMBER, 0);
}

std::vector<VMParser::ExprContext *> VMParser::VariableContext::expr() {
  return getRuleContexts<VMParser::ExprContext>();
}

VMParser::ExprContext* VMParser::VariableContext::expr(size_t i) {
  return getRuleContext<VMParser::ExprContext>(i);
}


size_t VMParser::VariableContext::getRuleIndex() const {
  return VMParser::RuleVariable;
}


std::any VMParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

VMParser::VariableContext* VMParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 6, VMParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(93);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(77);
      match(VMParser::ID);
      setState(78);
      match(VMParser::COLON);
      setState(79);
      antlrcpp::downCast<VariableContext *>(_localctx)->hint = match(VMParser::ID);
      setState(80);
      match(VMParser::SEMICOLON);
      setState(81);
      match(VMParser::NUMBER);
      setState(82);
      match(VMParser::SEMICOLON);
      setState(83);
      antlrcpp::downCast<VariableContext *>(_localctx)->REF = expr(0);
      setState(84);
      match(VMParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(86);
      match(VMParser::ID);
      setState(87);
      match(VMParser::SEMICOLON);
      setState(88);
      expr(0);
      setState(89);
      match(VMParser::SEMICOLON);
      setState(90);
      antlrcpp::downCast<VariableContext *>(_localctx)->REF = expr(0);
      setState(91);
      match(VMParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileContext ------------------------------------------------------------------

VMParser::WhileContext::WhileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::WhileContext::RW_FOR() {
  return getToken(VMParser::RW_FOR, 0);
}

std::vector<tree::TerminalNode *> VMParser::WhileContext::SEMICOLON() {
  return getTokens(VMParser::SEMICOLON);
}

tree::TerminalNode* VMParser::WhileContext::SEMICOLON(size_t i) {
  return getToken(VMParser::SEMICOLON, i);
}

VMParser::BlockContext* VMParser::WhileContext::block() {
  return getRuleContext<VMParser::BlockContext>(0);
}

std::vector<tree::TerminalNode *> VMParser::WhileContext::ID() {
  return getTokens(VMParser::ID);
}

tree::TerminalNode* VMParser::WhileContext::ID(size_t i) {
  return getToken(VMParser::ID, i);
}

std::vector<tree::TerminalNode *> VMParser::WhileContext::NUMBER() {
  return getTokens(VMParser::NUMBER);
}

tree::TerminalNode* VMParser::WhileContext::NUMBER(size_t i) {
  return getToken(VMParser::NUMBER, i);
}


size_t VMParser::WhileContext::getRuleIndex() const {
  return VMParser::RuleWhile;
}


std::any VMParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}

VMParser::WhileContext* VMParser::while_() {
  WhileContext *_localctx = _tracker.createInstance<WhileContext>(_ctx, getState());
  enterRule(_localctx, 8, VMParser::RuleWhile);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(VMParser::RW_FOR);
    setState(96);
    match(VMParser::SEMICOLON);
    setState(97);
    antlrcpp::downCast<WhileContext *>(_localctx)->CONTROL = match(VMParser::ID);
    setState(98);
    match(VMParser::SEMICOLON);
    setState(99);
    antlrcpp::downCast<WhileContext *>(_localctx)->FROM = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == VMParser::ID

    || _la == VMParser::NUMBER)) {
      antlrcpp::downCast<WhileContext *>(_localctx)->FROM = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(100);
    match(VMParser::SEMICOLON);
    setState(101);
    antlrcpp::downCast<WhileContext *>(_localctx)->TO = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == VMParser::ID

    || _la == VMParser::NUMBER)) {
      antlrcpp::downCast<WhileContext *>(_localctx)->TO = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(102);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfContext ------------------------------------------------------------------

VMParser::IfContext::IfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::IfContext::RW_IF() {
  return getToken(VMParser::RW_IF, 0);
}

tree::TerminalNode* VMParser::IfContext::SEMICOLON() {
  return getToken(VMParser::SEMICOLON, 0);
}

VMParser::BlockContext* VMParser::IfContext::block() {
  return getRuleContext<VMParser::BlockContext>(0);
}

std::vector<VMParser::ExprContext *> VMParser::IfContext::expr() {
  return getRuleContexts<VMParser::ExprContext>();
}

VMParser::ExprContext* VMParser::IfContext::expr(size_t i) {
  return getRuleContext<VMParser::ExprContext>(i);
}


size_t VMParser::IfContext::getRuleIndex() const {
  return VMParser::RuleIf;
}


std::any VMParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}

VMParser::IfContext* VMParser::if_() {
  IfContext *_localctx = _tracker.createInstance<IfContext>(_ctx, getState());
  enterRule(_localctx, 10, VMParser::RuleIf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(VMParser::RW_IF);
    setState(105);
    match(VMParser::SEMICOLON);
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 131005939712) != 0)) {
      setState(106);
      antlrcpp::downCast<IfContext *>(_localctx)->cond = expr(0);
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(112);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructContext ------------------------------------------------------------------

VMParser::StructContext::StructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::StructContext::RW_STRUCTURE() {
  return getToken(VMParser::RW_STRUCTURE, 0);
}

tree::TerminalNode* VMParser::StructContext::SEMICOLON() {
  return getToken(VMParser::SEMICOLON, 0);
}

tree::TerminalNode* VMParser::StructContext::ID() {
  return getToken(VMParser::ID, 0);
}

VMParser::FunctionblockContext* VMParser::StructContext::functionblock() {
  return getRuleContext<VMParser::FunctionblockContext>(0);
}


size_t VMParser::StructContext::getRuleIndex() const {
  return VMParser::RuleStruct;
}


std::any VMParser::StructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitStruct(this);
  else
    return visitor->visitChildren(this);
}

VMParser::StructContext* VMParser::struct_() {
  StructContext *_localctx = _tracker.createInstance<StructContext>(_ctx, getState());
  enterRule(_localctx, 12, VMParser::RuleStruct);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(VMParser::RW_STRUCTURE);
    setState(115);
    match(VMParser::SEMICOLON);
    setState(116);
    match(VMParser::ID);
    setState(117);
    functionblock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayContext ------------------------------------------------------------------

VMParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::ArrayContext::RW_ARRAY() {
  return getToken(VMParser::RW_ARRAY, 0);
}

VMParser::ArrayblockContext* VMParser::ArrayContext::arrayblock() {
  return getRuleContext<VMParser::ArrayblockContext>(0);
}


size_t VMParser::ArrayContext::getRuleIndex() const {
  return VMParser::RuleArray;
}


std::any VMParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitArray(this);
  else
    return visitor->visitChildren(this);
}

VMParser::ArrayContext* VMParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 14, VMParser::RuleArray);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(VMParser::RW_ARRAY);
    setState(120);
    arrayblock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayblockContext ------------------------------------------------------------------

VMParser::ArrayblockContext::ArrayblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::ArrayblockContext::START_BLOCK() {
  return getToken(VMParser::START_BLOCK, 0);
}

tree::TerminalNode* VMParser::ArrayblockContext::END_BLOCK() {
  return getToken(VMParser::END_BLOCK, 0);
}

std::vector<VMParser::ExprContext *> VMParser::ArrayblockContext::expr() {
  return getRuleContexts<VMParser::ExprContext>();
}

VMParser::ExprContext* VMParser::ArrayblockContext::expr(size_t i) {
  return getRuleContext<VMParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> VMParser::ArrayblockContext::SEMICOLON() {
  return getTokens(VMParser::SEMICOLON);
}

tree::TerminalNode* VMParser::ArrayblockContext::SEMICOLON(size_t i) {
  return getToken(VMParser::SEMICOLON, i);
}


size_t VMParser::ArrayblockContext::getRuleIndex() const {
  return VMParser::RuleArrayblock;
}


std::any VMParser::ArrayblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitArrayblock(this);
  else
    return visitor->visitChildren(this);
}

VMParser::ArrayblockContext* VMParser::arrayblock() {
  ArrayblockContext *_localctx = _tracker.createInstance<ArrayblockContext>(_ctx, getState());
  enterRule(_localctx, 16, VMParser::RuleArrayblock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(VMParser::START_BLOCK);
    setState(131);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 131005939712) != 0)) {
      setState(123);
      expr(0);
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == VMParser::SEMICOLON) {
        setState(124);
        match(VMParser::SEMICOLON);
        setState(125);
        expr(0);
        setState(130);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(133);
    match(VMParser::END_BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

VMParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::BlockContext::COLON() {
  return getToken(VMParser::COLON, 0);
}

tree::TerminalNode* VMParser::BlockContext::RW_END() {
  return getToken(VMParser::RW_END, 0);
}

std::vector<VMParser::StatContext *> VMParser::BlockContext::stat() {
  return getRuleContexts<VMParser::StatContext>();
}

VMParser::StatContext* VMParser::BlockContext::stat(size_t i) {
  return getRuleContext<VMParser::StatContext>(i);
}


size_t VMParser::BlockContext::getRuleIndex() const {
  return VMParser::RuleBlock;
}


std::any VMParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

VMParser::BlockContext* VMParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 18, VMParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(VMParser::COLON);
    setState(139);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 131012952064) != 0)) {
      setState(136);
      stat();
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(142);
    match(VMParser::RW_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionparametersContext ------------------------------------------------------------------

VMParser::FunctionparametersContext::FunctionparametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> VMParser::FunctionparametersContext::ID() {
  return getTokens(VMParser::ID);
}

tree::TerminalNode* VMParser::FunctionparametersContext::ID(size_t i) {
  return getToken(VMParser::ID, i);
}

std::vector<tree::TerminalNode *> VMParser::FunctionparametersContext::COMMA() {
  return getTokens(VMParser::COMMA);
}

tree::TerminalNode* VMParser::FunctionparametersContext::COMMA(size_t i) {
  return getToken(VMParser::COMMA, i);
}


size_t VMParser::FunctionparametersContext::getRuleIndex() const {
  return VMParser::RuleFunctionparameters;
}


std::any VMParser::FunctionparametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitFunctionparameters(this);
  else
    return visitor->visitChildren(this);
}

VMParser::FunctionparametersContext* VMParser::functionparameters() {
  FunctionparametersContext *_localctx = _tracker.createInstance<FunctionparametersContext>(_ctx, getState());
  enterRule(_localctx, 20, VMParser::RuleFunctionparameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(VMParser::ID);
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == VMParser::COMMA) {
      setState(145);
      match(VMParser::COMMA);
      setState(146);
      match(VMParser::ID);
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionblockContext ------------------------------------------------------------------

VMParser::FunctionblockContext::FunctionblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::FunctionblockContext::START_BLOCK() {
  return getToken(VMParser::START_BLOCK, 0);
}

tree::TerminalNode* VMParser::FunctionblockContext::END_BLOCK() {
  return getToken(VMParser::END_BLOCK, 0);
}

std::vector<VMParser::StatContext *> VMParser::FunctionblockContext::stat() {
  return getRuleContexts<VMParser::StatContext>();
}

VMParser::StatContext* VMParser::FunctionblockContext::stat(size_t i) {
  return getRuleContext<VMParser::StatContext>(i);
}


size_t VMParser::FunctionblockContext::getRuleIndex() const {
  return VMParser::RuleFunctionblock;
}


std::any VMParser::FunctionblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitFunctionblock(this);
  else
    return visitor->visitChildren(this);
}

VMParser::FunctionblockContext* VMParser::functionblock() {
  FunctionblockContext *_localctx = _tracker.createInstance<FunctionblockContext>(_ctx, getState());
  enterRule(_localctx, 22, VMParser::RuleFunctionblock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(VMParser::START_BLOCK);
    setState(156);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 131012952064) != 0)) {
      setState(153);
      stat();
      setState(158);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(159);
    match(VMParser::END_BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondefinitionContext ------------------------------------------------------------------

VMParser::FunctiondefinitionContext::FunctiondefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::FunctiondefinitionContext::RW_DECLAREFUNCTION() {
  return getToken(VMParser::RW_DECLAREFUNCTION, 0);
}

tree::TerminalNode* VMParser::FunctiondefinitionContext::ID() {
  return getToken(VMParser::ID, 0);
}

tree::TerminalNode* VMParser::FunctiondefinitionContext::LPAREN() {
  return getToken(VMParser::LPAREN, 0);
}

tree::TerminalNode* VMParser::FunctiondefinitionContext::RPAREN() {
  return getToken(VMParser::RPAREN, 0);
}

VMParser::FunctionblockContext* VMParser::FunctiondefinitionContext::functionblock() {
  return getRuleContext<VMParser::FunctionblockContext>(0);
}

VMParser::FunctionparametersContext* VMParser::FunctiondefinitionContext::functionparameters() {
  return getRuleContext<VMParser::FunctionparametersContext>(0);
}


size_t VMParser::FunctiondefinitionContext::getRuleIndex() const {
  return VMParser::RuleFunctiondefinition;
}


std::any VMParser::FunctiondefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitFunctiondefinition(this);
  else
    return visitor->visitChildren(this);
}

VMParser::FunctiondefinitionContext* VMParser::functiondefinition() {
  FunctiondefinitionContext *_localctx = _tracker.createInstance<FunctiondefinitionContext>(_ctx, getState());
  enterRule(_localctx, 24, VMParser::RuleFunctiondefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(VMParser::RW_DECLAREFUNCTION);
    setState(162);
    match(VMParser::ID);
    setState(163);
    match(VMParser::LPAREN);
    setState(165);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VMParser::ID) {
      setState(164);
      functionparameters();
    }
    setState(167);
    match(VMParser::RPAREN);
    setState(168);
    functionblock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnexpressionContext ------------------------------------------------------------------

VMParser::ReturnexpressionContext::ReturnexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::ReturnexpressionContext::RW_RETURN() {
  return getToken(VMParser::RW_RETURN, 0);
}

std::vector<tree::TerminalNode *> VMParser::ReturnexpressionContext::SEMICOLON() {
  return getTokens(VMParser::SEMICOLON);
}

tree::TerminalNode* VMParser::ReturnexpressionContext::SEMICOLON(size_t i) {
  return getToken(VMParser::SEMICOLON, i);
}

VMParser::ExprContext* VMParser::ReturnexpressionContext::expr() {
  return getRuleContext<VMParser::ExprContext>(0);
}


size_t VMParser::ReturnexpressionContext::getRuleIndex() const {
  return VMParser::RuleReturnexpression;
}


std::any VMParser::ReturnexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitReturnexpression(this);
  else
    return visitor->visitChildren(this);
}

VMParser::ReturnexpressionContext* VMParser::returnexpression() {
  ReturnexpressionContext *_localctx = _tracker.createInstance<ReturnexpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, VMParser::RuleReturnexpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(VMParser::RW_RETURN);
    setState(171);
    match(VMParser::SEMICOLON);
    setState(172);
    expr(0);
    setState(173);
    match(VMParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionargumentsContext ------------------------------------------------------------------

VMParser::FunctionargumentsContext::FunctionargumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<VMParser::ExprContext *> VMParser::FunctionargumentsContext::expr() {
  return getRuleContexts<VMParser::ExprContext>();
}

VMParser::ExprContext* VMParser::FunctionargumentsContext::expr(size_t i) {
  return getRuleContext<VMParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> VMParser::FunctionargumentsContext::COMMA() {
  return getTokens(VMParser::COMMA);
}

tree::TerminalNode* VMParser::FunctionargumentsContext::COMMA(size_t i) {
  return getToken(VMParser::COMMA, i);
}


size_t VMParser::FunctionargumentsContext::getRuleIndex() const {
  return VMParser::RuleFunctionarguments;
}


std::any VMParser::FunctionargumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitFunctionarguments(this);
  else
    return visitor->visitChildren(this);
}

VMParser::FunctionargumentsContext* VMParser::functionarguments() {
  FunctionargumentsContext *_localctx = _tracker.createInstance<FunctionargumentsContext>(_ctx, getState());
  enterRule(_localctx, 28, VMParser::RuleFunctionarguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    expr(0);
    setState(180);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == VMParser::COMMA) {
      setState(176);
      match(VMParser::COMMA);
      setState(177);
      expr(0);
      setState(182);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctioncallContext ------------------------------------------------------------------

VMParser::FunctioncallContext::FunctioncallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::FunctioncallContext::RW_CALLFUNCTION() {
  return getToken(VMParser::RW_CALLFUNCTION, 0);
}

tree::TerminalNode* VMParser::FunctioncallContext::SEMICOLON() {
  return getToken(VMParser::SEMICOLON, 0);
}

tree::TerminalNode* VMParser::FunctioncallContext::ID() {
  return getToken(VMParser::ID, 0);
}

tree::TerminalNode* VMParser::FunctioncallContext::LPAREN() {
  return getToken(VMParser::LPAREN, 0);
}

VMParser::FunctionargumentsContext* VMParser::FunctioncallContext::functionarguments() {
  return getRuleContext<VMParser::FunctionargumentsContext>(0);
}

tree::TerminalNode* VMParser::FunctioncallContext::RPAREN() {
  return getToken(VMParser::RPAREN, 0);
}


size_t VMParser::FunctioncallContext::getRuleIndex() const {
  return VMParser::RuleFunctioncall;
}


std::any VMParser::FunctioncallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitFunctioncall(this);
  else
    return visitor->visitChildren(this);
}

VMParser::FunctioncallContext* VMParser::functioncall() {
  FunctioncallContext *_localctx = _tracker.createInstance<FunctioncallContext>(_ctx, getState());
  enterRule(_localctx, 30, VMParser::RuleFunctioncall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(VMParser::RW_CALLFUNCTION);
    setState(184);
    match(VMParser::SEMICOLON);
    setState(185);
    match(VMParser::ID);
    setState(186);
    match(VMParser::LPAREN);
    setState(187);
    functionarguments();
    setState(188);
    match(VMParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool VMParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool VMParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void VMParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  vmparserParserInitialize();
#else
  ::antlr4::internal::call_once(vmparserParserOnceFlag, vmparserParserInitialize);
#endif
}
