
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
      "program", "stat", "expr", "array", "variable", "funcParams", "funcDef", 
      "funcArgs", "funcCall", "iterar", "condicion"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'='", 
      "'!='", "'=='", "','", "';'", "'['", "']'", "", "'{'", "'}'", "", 
      "", "'importar'", "'funcion'", "'iterar'", "'mientras'", "'desde'", 
      "'hasta'", "'en'", "", "", "", "", "'NADA'", "'retornar'"
    },
    std::vector<std::string>{
      "", "LAPREN", "RPAREN", "ADD", "RESTA", "MUL", "DIV", "LESS", "GREATER", 
      "EQUAL", "NEQ", "EQEQ", "COMMA", "SEMI", "LBRACKET", "RBRACKET", "LINE_COMMENT", 
      "START_BLOCK", "END_BLOCK", "STRING", "COMMENT", "IMPORT", "FUNC", 
      "FOR", "WHILE", "DESDE", "HASTA", "EN", "COND", "ID", "NUM", "BOOL", 
      "NADA", "RETURN", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,34,165,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,5,0,24,8,0,10,0,12,0,27,9,0,1,0,1,
  	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,
  	47,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,60,8,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,75,8,2,10,2,12,2,78,9,
  	2,1,3,1,3,1,3,1,3,5,3,84,8,3,10,3,12,3,87,9,3,3,3,89,8,3,1,3,1,3,1,4,
  	1,4,1,4,1,4,1,5,1,5,1,5,5,5,100,8,5,10,5,12,5,103,9,5,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,5,6,112,8,6,10,6,12,6,115,9,6,1,6,1,6,1,7,1,7,1,7,5,7,122,
  	8,7,10,7,12,7,125,9,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,3,9,140,8,9,3,9,142,8,9,1,10,1,10,1,10,1,10,5,10,148,8,10,10,10,12,
  	10,151,9,10,1,10,1,10,1,10,1,10,5,10,157,8,10,10,10,12,10,160,9,10,1,
  	10,3,10,163,8,10,1,10,0,1,4,11,0,2,4,6,8,10,12,14,16,18,20,0,3,1,0,3,
  	6,1,0,7,8,1,0,29,30,180,0,25,1,0,0,0,2,46,1,0,0,0,4,59,1,0,0,0,6,79,1,
  	0,0,0,8,92,1,0,0,0,10,96,1,0,0,0,12,104,1,0,0,0,14,118,1,0,0,0,16,126,
  	1,0,0,0,18,141,1,0,0,0,20,143,1,0,0,0,22,24,3,2,1,0,23,22,1,0,0,0,24,
  	27,1,0,0,0,25,23,1,0,0,0,25,26,1,0,0,0,26,28,1,0,0,0,27,25,1,0,0,0,28,
  	29,5,0,0,1,29,1,1,0,0,0,30,31,3,8,4,0,31,32,5,13,0,0,32,47,1,0,0,0,33,
  	34,3,4,2,0,34,35,5,13,0,0,35,47,1,0,0,0,36,47,3,12,6,0,37,38,3,18,9,0,
  	38,39,5,18,0,0,39,47,1,0,0,0,40,41,3,20,10,0,41,42,5,18,0,0,42,47,1,0,
  	0,0,43,44,3,6,3,0,44,45,5,13,0,0,45,47,1,0,0,0,46,30,1,0,0,0,46,33,1,
  	0,0,0,46,36,1,0,0,0,46,37,1,0,0,0,46,40,1,0,0,0,46,43,1,0,0,0,47,3,1,
  	0,0,0,48,49,6,2,-1,0,49,60,5,30,0,0,50,60,5,31,0,0,51,60,5,19,0,0,52,
  	60,5,29,0,0,53,54,5,1,0,0,54,55,3,4,2,0,55,56,5,2,0,0,56,60,1,0,0,0,57,
  	60,3,16,8,0,58,60,3,6,3,0,59,48,1,0,0,0,59,50,1,0,0,0,59,51,1,0,0,0,59,
  	52,1,0,0,0,59,53,1,0,0,0,59,57,1,0,0,0,59,58,1,0,0,0,60,76,1,0,0,0,61,
  	62,10,6,0,0,62,63,7,0,0,0,63,75,3,4,2,7,64,65,10,5,0,0,65,66,5,11,0,0,
  	66,75,3,4,2,6,67,68,10,4,0,0,68,69,7,1,0,0,69,70,5,9,0,0,70,75,3,4,2,
  	5,71,72,10,3,0,0,72,73,5,10,0,0,73,75,3,4,2,4,74,61,1,0,0,0,74,64,1,0,
  	0,0,74,67,1,0,0,0,74,71,1,0,0,0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,1,0,
  	0,0,77,5,1,0,0,0,78,76,1,0,0,0,79,88,5,14,0,0,80,85,3,4,2,0,81,82,5,12,
  	0,0,82,84,3,4,2,0,83,81,1,0,0,0,84,87,1,0,0,0,85,83,1,0,0,0,85,86,1,0,
  	0,0,86,89,1,0,0,0,87,85,1,0,0,0,88,80,1,0,0,0,88,89,1,0,0,0,89,90,1,0,
  	0,0,90,91,5,15,0,0,91,7,1,0,0,0,92,93,5,29,0,0,93,94,5,9,0,0,94,95,3,
  	4,2,0,95,9,1,0,0,0,96,101,5,29,0,0,97,98,5,12,0,0,98,100,5,29,0,0,99,
  	97,1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,11,1,0,
  	0,0,103,101,1,0,0,0,104,105,5,22,0,0,105,106,5,29,0,0,106,107,5,1,0,0,
  	107,108,3,10,5,0,108,109,5,2,0,0,109,113,5,17,0,0,110,112,3,2,1,0,111,
  	110,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,116,1,
  	0,0,0,115,113,1,0,0,0,116,117,5,18,0,0,117,13,1,0,0,0,118,123,3,4,2,0,
  	119,120,5,12,0,0,120,122,3,4,2,0,121,119,1,0,0,0,122,125,1,0,0,0,123,
  	121,1,0,0,0,123,124,1,0,0,0,124,15,1,0,0,0,125,123,1,0,0,0,126,127,5,
  	29,0,0,127,128,5,1,0,0,128,129,3,14,7,0,129,130,5,2,0,0,130,17,1,0,0,
  	0,131,142,5,23,0,0,132,133,5,25,0,0,133,134,7,2,0,0,134,135,5,26,0,0,
  	135,142,7,2,0,0,136,139,5,27,0,0,137,140,5,29,0,0,138,140,3,6,3,0,139,
  	137,1,0,0,0,139,138,1,0,0,0,140,142,1,0,0,0,141,131,1,0,0,0,141,132,1,
  	0,0,0,141,136,1,0,0,0,142,19,1,0,0,0,143,144,5,28,0,0,144,145,3,4,2,0,
  	145,149,5,17,0,0,146,148,3,2,1,0,147,146,1,0,0,0,148,151,1,0,0,0,149,
  	147,1,0,0,0,149,150,1,0,0,0,150,152,1,0,0,0,151,149,1,0,0,0,152,162,5,
  	18,0,0,153,154,5,28,0,0,154,158,5,17,0,0,155,157,3,2,1,0,156,155,1,0,
  	0,0,157,160,1,0,0,0,158,156,1,0,0,0,158,159,1,0,0,0,159,161,1,0,0,0,160,
  	158,1,0,0,0,161,163,5,18,0,0,162,153,1,0,0,0,162,163,1,0,0,0,163,21,1,
  	0,0,0,15,25,46,59,74,76,85,88,101,113,123,139,141,149,158,162
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
    setState(25);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4207427586) != 0)) {
      setState(22);
      stat();
      setState(27);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(28);
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

tree::TerminalNode* VMParser::StatContext::SEMI() {
  return getToken(VMParser::SEMI, 0);
}

VMParser::ExprContext* VMParser::StatContext::expr() {
  return getRuleContext<VMParser::ExprContext>(0);
}

VMParser::FuncDefContext* VMParser::StatContext::funcDef() {
  return getRuleContext<VMParser::FuncDefContext>(0);
}

VMParser::IterarContext* VMParser::StatContext::iterar() {
  return getRuleContext<VMParser::IterarContext>(0);
}

tree::TerminalNode* VMParser::StatContext::END_BLOCK() {
  return getToken(VMParser::END_BLOCK, 0);
}

VMParser::CondicionContext* VMParser::StatContext::condicion() {
  return getRuleContext<VMParser::CondicionContext>(0);
}

VMParser::ArrayContext* VMParser::StatContext::array() {
  return getRuleContext<VMParser::ArrayContext>(0);
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
    setState(46);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(30);
      variable();
      setState(31);
      match(VMParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(33);
      expr(0);
      setState(34);
      match(VMParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(36);
      funcDef();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(37);
      iterar();
      setState(38);
      match(VMParser::END_BLOCK);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(40);
      condicion();
      setState(41);
      match(VMParser::END_BLOCK);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(43);
      array();
      setState(44);
      match(VMParser::SEMI);
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

//----------------- NumberContext ------------------------------------------------------------------

tree::TerminalNode* VMParser::NumberContext::NUM() {
  return getToken(VMParser::NUM, 0);
}

VMParser::NumberContext::NumberContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
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
//----------------- BooleanContext ------------------------------------------------------------------

tree::TerminalNode* VMParser::BooleanContext::BOOL() {
  return getToken(VMParser::BOOL, 0);
}

VMParser::BooleanContext::BooleanContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::BooleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitBoolean(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AritExpContext ------------------------------------------------------------------

std::vector<VMParser::ExprContext *> VMParser::AritExpContext::expr() {
  return getRuleContexts<VMParser::ExprContext>();
}

VMParser::ExprContext* VMParser::AritExpContext::expr(size_t i) {
  return getRuleContext<VMParser::ExprContext>(i);
}

tree::TerminalNode* VMParser::AritExpContext::MUL() {
  return getToken(VMParser::MUL, 0);
}

tree::TerminalNode* VMParser::AritExpContext::DIV() {
  return getToken(VMParser::DIV, 0);
}

tree::TerminalNode* VMParser::AritExpContext::ADD() {
  return getToken(VMParser::ADD, 0);
}

tree::TerminalNode* VMParser::AritExpContext::RESTA() {
  return getToken(VMParser::RESTA, 0);
}

VMParser::AritExpContext::AritExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::AritExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitAritExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringContext ------------------------------------------------------------------

tree::TerminalNode* VMParser::StringContext::STRING() {
  return getToken(VMParser::STRING, 0);
}

VMParser::StringContext::StringContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExpContext ------------------------------------------------------------------

tree::TerminalNode* VMParser::ParenExpContext::LAPREN() {
  return getToken(VMParser::LAPREN, 0);
}

VMParser::ExprContext* VMParser::ParenExpContext::expr() {
  return getRuleContext<VMParser::ExprContext>(0);
}

tree::TerminalNode* VMParser::ParenExpContext::RPAREN() {
  return getToken(VMParser::RPAREN, 0);
}

VMParser::ParenExpContext::ParenExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::ParenExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitParenExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FCallContext ------------------------------------------------------------------

VMParser::FuncCallContext* VMParser::FCallContext::funcCall() {
  return getRuleContext<VMParser::FuncCallContext>(0);
}

VMParser::FCallContext::FCallContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::FCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitFCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* VMParser::IdContext::ID() {
  return getToken(VMParser::ID, 0);
}

VMParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitId(this);
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
//----------------- ArregloContext ------------------------------------------------------------------

VMParser::ArrayContext* VMParser::ArregloContext::array() {
  return getRuleContext<VMParser::ArrayContext>(0);
}

VMParser::ArregloContext::ArregloContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::ArregloContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitArreglo(this);
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
    setState(59);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(49);
      match(VMParser::NUM);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<BooleanContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(50);
      match(VMParser::BOOL);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(51);
      match(VMParser::STRING);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<IdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(52);
      match(VMParser::ID);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ParenExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(53);
      match(VMParser::LAPREN);
      setState(54);
      expr(0);
      setState(55);
      match(VMParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<FCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(57);
      funcCall();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ArregloContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(58);
      array();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(76);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(74);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<AritExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(61);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(62);
          antlrcpp::downCast<AritExpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 120) != 0))) {
            antlrcpp::downCast<AritExpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(63);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<EqEqExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(64);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(65);
          antlrcpp::downCast<EqEqExpContext *>(_localctx)->op = match(VMParser::EQEQ);
          setState(66);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<EqExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(67);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(68);
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
          setState(69);
          match(VMParser::EQUAL);
          setState(70);
          expr(5);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<NeqExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(71);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(72);
          antlrcpp::downCast<NeqExpContext *>(_localctx)->op = match(VMParser::NEQ);
          setState(73);
          expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(78);
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

//----------------- ArrayContext ------------------------------------------------------------------

VMParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::ArrayContext::LBRACKET() {
  return getToken(VMParser::LBRACKET, 0);
}

tree::TerminalNode* VMParser::ArrayContext::RBRACKET() {
  return getToken(VMParser::RBRACKET, 0);
}

std::vector<VMParser::ExprContext *> VMParser::ArrayContext::expr() {
  return getRuleContexts<VMParser::ExprContext>();
}

VMParser::ExprContext* VMParser::ArrayContext::expr(size_t i) {
  return getRuleContext<VMParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> VMParser::ArrayContext::COMMA() {
  return getTokens(VMParser::COMMA);
}

tree::TerminalNode* VMParser::ArrayContext::COMMA(size_t i) {
  return getToken(VMParser::COMMA, i);
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
  enterRule(_localctx, 6, VMParser::RuleArray);
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
    setState(79);
    match(VMParser::LBRACKET);
    setState(88);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3758637058) != 0)) {
      setState(80);
      expr(0);
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == VMParser::COMMA) {
        setState(81);
        match(VMParser::COMMA);
        setState(82);
        expr(0);
        setState(87);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(90);
    match(VMParser::RBRACKET);
   
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

tree::TerminalNode* VMParser::VariableContext::ID() {
  return getToken(VMParser::ID, 0);
}

tree::TerminalNode* VMParser::VariableContext::EQUAL() {
  return getToken(VMParser::EQUAL, 0);
}

VMParser::ExprContext* VMParser::VariableContext::expr() {
  return getRuleContext<VMParser::ExprContext>(0);
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
  enterRule(_localctx, 8, VMParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(VMParser::ID);
    setState(93);
    match(VMParser::EQUAL);
    setState(94);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncParamsContext ------------------------------------------------------------------

VMParser::FuncParamsContext::FuncParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> VMParser::FuncParamsContext::ID() {
  return getTokens(VMParser::ID);
}

tree::TerminalNode* VMParser::FuncParamsContext::ID(size_t i) {
  return getToken(VMParser::ID, i);
}

std::vector<tree::TerminalNode *> VMParser::FuncParamsContext::COMMA() {
  return getTokens(VMParser::COMMA);
}

tree::TerminalNode* VMParser::FuncParamsContext::COMMA(size_t i) {
  return getToken(VMParser::COMMA, i);
}


size_t VMParser::FuncParamsContext::getRuleIndex() const {
  return VMParser::RuleFuncParams;
}


std::any VMParser::FuncParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitFuncParams(this);
  else
    return visitor->visitChildren(this);
}

VMParser::FuncParamsContext* VMParser::funcParams() {
  FuncParamsContext *_localctx = _tracker.createInstance<FuncParamsContext>(_ctx, getState());
  enterRule(_localctx, 10, VMParser::RuleFuncParams);
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
    setState(96);
    match(VMParser::ID);
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == VMParser::COMMA) {
      setState(97);
      match(VMParser::COMMA);
      setState(98);
      match(VMParser::ID);
      setState(103);
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

//----------------- FuncDefContext ------------------------------------------------------------------

VMParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::FuncDefContext::FUNC() {
  return getToken(VMParser::FUNC, 0);
}

tree::TerminalNode* VMParser::FuncDefContext::ID() {
  return getToken(VMParser::ID, 0);
}

tree::TerminalNode* VMParser::FuncDefContext::LAPREN() {
  return getToken(VMParser::LAPREN, 0);
}

VMParser::FuncParamsContext* VMParser::FuncDefContext::funcParams() {
  return getRuleContext<VMParser::FuncParamsContext>(0);
}

tree::TerminalNode* VMParser::FuncDefContext::RPAREN() {
  return getToken(VMParser::RPAREN, 0);
}

tree::TerminalNode* VMParser::FuncDefContext::START_BLOCK() {
  return getToken(VMParser::START_BLOCK, 0);
}

tree::TerminalNode* VMParser::FuncDefContext::END_BLOCK() {
  return getToken(VMParser::END_BLOCK, 0);
}

std::vector<VMParser::StatContext *> VMParser::FuncDefContext::stat() {
  return getRuleContexts<VMParser::StatContext>();
}

VMParser::StatContext* VMParser::FuncDefContext::stat(size_t i) {
  return getRuleContext<VMParser::StatContext>(i);
}


size_t VMParser::FuncDefContext::getRuleIndex() const {
  return VMParser::RuleFuncDef;
}


std::any VMParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

VMParser::FuncDefContext* VMParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 12, VMParser::RuleFuncDef);
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
    match(VMParser::FUNC);
    setState(105);
    match(VMParser::ID);
    setState(106);
    match(VMParser::LAPREN);
    setState(107);
    funcParams();
    setState(108);
    match(VMParser::RPAREN);
    setState(109);
    match(VMParser::START_BLOCK);
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4207427586) != 0)) {
      setState(110);
      stat();
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(116);
    match(VMParser::END_BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncArgsContext ------------------------------------------------------------------

VMParser::FuncArgsContext::FuncArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<VMParser::ExprContext *> VMParser::FuncArgsContext::expr() {
  return getRuleContexts<VMParser::ExprContext>();
}

VMParser::ExprContext* VMParser::FuncArgsContext::expr(size_t i) {
  return getRuleContext<VMParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> VMParser::FuncArgsContext::COMMA() {
  return getTokens(VMParser::COMMA);
}

tree::TerminalNode* VMParser::FuncArgsContext::COMMA(size_t i) {
  return getToken(VMParser::COMMA, i);
}


size_t VMParser::FuncArgsContext::getRuleIndex() const {
  return VMParser::RuleFuncArgs;
}


std::any VMParser::FuncArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitFuncArgs(this);
  else
    return visitor->visitChildren(this);
}

VMParser::FuncArgsContext* VMParser::funcArgs() {
  FuncArgsContext *_localctx = _tracker.createInstance<FuncArgsContext>(_ctx, getState());
  enterRule(_localctx, 14, VMParser::RuleFuncArgs);
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
    setState(118);
    expr(0);
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == VMParser::COMMA) {
      setState(119);
      match(VMParser::COMMA);
      setState(120);
      expr(0);
      setState(125);
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

//----------------- FuncCallContext ------------------------------------------------------------------

VMParser::FuncCallContext::FuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::FuncCallContext::ID() {
  return getToken(VMParser::ID, 0);
}

tree::TerminalNode* VMParser::FuncCallContext::LAPREN() {
  return getToken(VMParser::LAPREN, 0);
}

VMParser::FuncArgsContext* VMParser::FuncCallContext::funcArgs() {
  return getRuleContext<VMParser::FuncArgsContext>(0);
}

tree::TerminalNode* VMParser::FuncCallContext::RPAREN() {
  return getToken(VMParser::RPAREN, 0);
}


size_t VMParser::FuncCallContext::getRuleIndex() const {
  return VMParser::RuleFuncCall;
}


std::any VMParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}

VMParser::FuncCallContext* VMParser::funcCall() {
  FuncCallContext *_localctx = _tracker.createInstance<FuncCallContext>(_ctx, getState());
  enterRule(_localctx, 16, VMParser::RuleFuncCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(VMParser::ID);
    setState(127);
    match(VMParser::LAPREN);
    setState(128);
    funcArgs();
    setState(129);
    match(VMParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterarContext ------------------------------------------------------------------

VMParser::IterarContext::IterarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::IterarContext::FOR() {
  return getToken(VMParser::FOR, 0);
}

tree::TerminalNode* VMParser::IterarContext::DESDE() {
  return getToken(VMParser::DESDE, 0);
}

tree::TerminalNode* VMParser::IterarContext::HASTA() {
  return getToken(VMParser::HASTA, 0);
}

std::vector<tree::TerminalNode *> VMParser::IterarContext::NUM() {
  return getTokens(VMParser::NUM);
}

tree::TerminalNode* VMParser::IterarContext::NUM(size_t i) {
  return getToken(VMParser::NUM, i);
}

std::vector<tree::TerminalNode *> VMParser::IterarContext::ID() {
  return getTokens(VMParser::ID);
}

tree::TerminalNode* VMParser::IterarContext::ID(size_t i) {
  return getToken(VMParser::ID, i);
}

tree::TerminalNode* VMParser::IterarContext::EN() {
  return getToken(VMParser::EN, 0);
}

VMParser::ArrayContext* VMParser::IterarContext::array() {
  return getRuleContext<VMParser::ArrayContext>(0);
}


size_t VMParser::IterarContext::getRuleIndex() const {
  return VMParser::RuleIterar;
}


std::any VMParser::IterarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitIterar(this);
  else
    return visitor->visitChildren(this);
}

VMParser::IterarContext* VMParser::iterar() {
  IterarContext *_localctx = _tracker.createInstance<IterarContext>(_ctx, getState());
  enterRule(_localctx, 18, VMParser::RuleIterar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(141);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VMParser::FOR: {
        enterOuterAlt(_localctx, 1);
        setState(131);
        match(VMParser::FOR);
        break;
      }

      case VMParser::DESDE: {
        enterOuterAlt(_localctx, 2);
        setState(132);
        match(VMParser::DESDE);
        setState(133);
        antlrcpp::downCast<IterarContext *>(_localctx)->i = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == VMParser::ID

        || _la == VMParser::NUM)) {
          antlrcpp::downCast<IterarContext *>(_localctx)->i = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(134);
        match(VMParser::HASTA);
        setState(135);
        antlrcpp::downCast<IterarContext *>(_localctx)->f = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == VMParser::ID

        || _la == VMParser::NUM)) {
          antlrcpp::downCast<IterarContext *>(_localctx)->f = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case VMParser::EN: {
        enterOuterAlt(_localctx, 3);
        setState(136);
        match(VMParser::EN);
        setState(139);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case VMParser::ID: {
            setState(137);
            match(VMParser::ID);
            break;
          }

          case VMParser::LBRACKET: {
            setState(138);
            array();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondicionContext ------------------------------------------------------------------

VMParser::CondicionContext::CondicionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> VMParser::CondicionContext::COND() {
  return getTokens(VMParser::COND);
}

tree::TerminalNode* VMParser::CondicionContext::COND(size_t i) {
  return getToken(VMParser::COND, i);
}

VMParser::ExprContext* VMParser::CondicionContext::expr() {
  return getRuleContext<VMParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> VMParser::CondicionContext::START_BLOCK() {
  return getTokens(VMParser::START_BLOCK);
}

tree::TerminalNode* VMParser::CondicionContext::START_BLOCK(size_t i) {
  return getToken(VMParser::START_BLOCK, i);
}

std::vector<tree::TerminalNode *> VMParser::CondicionContext::END_BLOCK() {
  return getTokens(VMParser::END_BLOCK);
}

tree::TerminalNode* VMParser::CondicionContext::END_BLOCK(size_t i) {
  return getToken(VMParser::END_BLOCK, i);
}

std::vector<VMParser::StatContext *> VMParser::CondicionContext::stat() {
  return getRuleContexts<VMParser::StatContext>();
}

VMParser::StatContext* VMParser::CondicionContext::stat(size_t i) {
  return getRuleContext<VMParser::StatContext>(i);
}


size_t VMParser::CondicionContext::getRuleIndex() const {
  return VMParser::RuleCondicion;
}


std::any VMParser::CondicionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitCondicion(this);
  else
    return visitor->visitChildren(this);
}

VMParser::CondicionContext* VMParser::condicion() {
  CondicionContext *_localctx = _tracker.createInstance<CondicionContext>(_ctx, getState());
  enterRule(_localctx, 20, VMParser::RuleCondicion);
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
    setState(143);
    match(VMParser::COND);
    setState(144);
    expr(0);
    setState(145);
    match(VMParser::START_BLOCK);
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4207427586) != 0)) {
      setState(146);
      stat();
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(152);
    match(VMParser::END_BLOCK);
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VMParser::COND) {
      setState(153);
      match(VMParser::COND);
      setState(154);
      match(VMParser::START_BLOCK);
      setState(158);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4207427586) != 0)) {
        setState(155);
        stat();
        setState(160);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(161);
      match(VMParser::END_BLOCK);
    }
   
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
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);

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
