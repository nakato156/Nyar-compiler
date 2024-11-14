
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
      "funcArgs", "funcCall", "iterar", "condicion", "externFuncions"
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
  	4,1,34,169,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,5,0,26,8,0,10,0,12,0,29,
  	9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,3,1,49,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,62,8,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,77,8,2,10,2,
  	12,2,80,9,2,1,3,1,3,1,3,1,3,5,3,86,8,3,10,3,12,3,89,9,3,3,3,91,8,3,1,
  	3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,5,5,102,8,5,10,5,12,5,105,9,5,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,5,6,114,8,6,10,6,12,6,117,9,6,1,6,1,6,1,7,1,7,1,
  	7,5,7,124,8,7,10,7,12,7,127,9,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,3,9,142,8,9,3,9,144,8,9,1,10,1,10,1,10,1,10,5,10,150,8,
  	10,10,10,12,10,153,9,10,1,10,1,10,1,10,1,10,5,10,159,8,10,10,10,12,10,
  	162,9,10,1,10,3,10,165,8,10,1,11,1,11,1,11,0,1,4,12,0,2,4,6,8,10,12,14,
  	16,18,20,22,0,3,1,0,3,6,1,0,7,8,1,0,29,30,183,0,27,1,0,0,0,2,48,1,0,0,
  	0,4,61,1,0,0,0,6,81,1,0,0,0,8,94,1,0,0,0,10,98,1,0,0,0,12,106,1,0,0,0,
  	14,120,1,0,0,0,16,128,1,0,0,0,18,143,1,0,0,0,20,145,1,0,0,0,22,166,1,
  	0,0,0,24,26,3,2,1,0,25,24,1,0,0,0,26,29,1,0,0,0,27,25,1,0,0,0,27,28,1,
  	0,0,0,28,30,1,0,0,0,29,27,1,0,0,0,30,31,5,0,0,1,31,1,1,0,0,0,32,33,3,
  	8,4,0,33,34,5,13,0,0,34,49,1,0,0,0,35,36,3,4,2,0,36,37,5,13,0,0,37,49,
  	1,0,0,0,38,49,3,12,6,0,39,40,3,18,9,0,40,41,5,18,0,0,41,49,1,0,0,0,42,
  	43,3,20,10,0,43,44,5,18,0,0,44,49,1,0,0,0,45,46,3,6,3,0,46,47,5,13,0,
  	0,47,49,1,0,0,0,48,32,1,0,0,0,48,35,1,0,0,0,48,38,1,0,0,0,48,39,1,0,0,
  	0,48,42,1,0,0,0,48,45,1,0,0,0,49,3,1,0,0,0,50,51,6,2,-1,0,51,62,5,30,
  	0,0,52,62,5,31,0,0,53,62,5,19,0,0,54,62,5,29,0,0,55,56,5,1,0,0,56,57,
  	3,4,2,0,57,58,5,2,0,0,58,62,1,0,0,0,59,62,3,16,8,0,60,62,3,6,3,0,61,50,
  	1,0,0,0,61,52,1,0,0,0,61,53,1,0,0,0,61,54,1,0,0,0,61,55,1,0,0,0,61,59,
  	1,0,0,0,61,60,1,0,0,0,62,78,1,0,0,0,63,64,10,6,0,0,64,65,7,0,0,0,65,77,
  	3,4,2,7,66,67,10,5,0,0,67,68,5,11,0,0,68,77,3,4,2,6,69,70,10,4,0,0,70,
  	71,7,1,0,0,71,72,5,9,0,0,72,77,3,4,2,5,73,74,10,3,0,0,74,75,5,10,0,0,
  	75,77,3,4,2,4,76,63,1,0,0,0,76,66,1,0,0,0,76,69,1,0,0,0,76,73,1,0,0,0,
  	77,80,1,0,0,0,78,76,1,0,0,0,78,79,1,0,0,0,79,5,1,0,0,0,80,78,1,0,0,0,
  	81,90,5,14,0,0,82,87,3,4,2,0,83,84,5,12,0,0,84,86,3,4,2,0,85,83,1,0,0,
  	0,86,89,1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,91,1,0,0,0,89,87,1,0,0,
  	0,90,82,1,0,0,0,90,91,1,0,0,0,91,92,1,0,0,0,92,93,5,15,0,0,93,7,1,0,0,
  	0,94,95,5,29,0,0,95,96,5,9,0,0,96,97,3,4,2,0,97,9,1,0,0,0,98,103,5,29,
  	0,0,99,100,5,12,0,0,100,102,5,29,0,0,101,99,1,0,0,0,102,105,1,0,0,0,103,
  	101,1,0,0,0,103,104,1,0,0,0,104,11,1,0,0,0,105,103,1,0,0,0,106,107,5,
  	22,0,0,107,108,5,29,0,0,108,109,5,1,0,0,109,110,3,10,5,0,110,111,5,2,
  	0,0,111,115,5,17,0,0,112,114,3,2,1,0,113,112,1,0,0,0,114,117,1,0,0,0,
  	115,113,1,0,0,0,115,116,1,0,0,0,116,118,1,0,0,0,117,115,1,0,0,0,118,119,
  	5,18,0,0,119,13,1,0,0,0,120,125,3,4,2,0,121,122,5,12,0,0,122,124,3,4,
  	2,0,123,121,1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,0,126,
  	15,1,0,0,0,127,125,1,0,0,0,128,129,5,29,0,0,129,130,5,1,0,0,130,131,3,
  	14,7,0,131,132,5,2,0,0,132,17,1,0,0,0,133,144,5,23,0,0,134,135,5,25,0,
  	0,135,136,7,2,0,0,136,137,5,26,0,0,137,144,7,2,0,0,138,141,5,27,0,0,139,
  	142,5,29,0,0,140,142,3,6,3,0,141,139,1,0,0,0,141,140,1,0,0,0,142,144,
  	1,0,0,0,143,133,1,0,0,0,143,134,1,0,0,0,143,138,1,0,0,0,144,19,1,0,0,
  	0,145,146,5,28,0,0,146,147,3,4,2,0,147,151,5,17,0,0,148,150,3,2,1,0,149,
  	148,1,0,0,0,150,153,1,0,0,0,151,149,1,0,0,0,151,152,1,0,0,0,152,154,1,
  	0,0,0,153,151,1,0,0,0,154,164,5,18,0,0,155,156,5,28,0,0,156,160,5,17,
  	0,0,157,159,3,2,1,0,158,157,1,0,0,0,159,162,1,0,0,0,160,158,1,0,0,0,160,
  	161,1,0,0,0,161,163,1,0,0,0,162,160,1,0,0,0,163,165,5,18,0,0,164,155,
  	1,0,0,0,164,165,1,0,0,0,165,21,1,0,0,0,166,167,5,29,0,0,167,23,1,0,0,
  	0,15,27,48,61,76,78,87,90,103,115,125,141,143,151,160,164
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
    setState(27);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4207427586) != 0)) {
      setState(24);
      stat();
      setState(29);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(30);
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
    setState(48);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(32);
      variable();
      setState(33);
      match(VMParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(35);
      expr(0);
      setState(36);
      match(VMParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(38);
      funcDef();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(39);
      iterar();
      setState(40);
      match(VMParser::END_BLOCK);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(42);
      condicion();
      setState(43);
      match(VMParser::END_BLOCK);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(45);
      array();
      setState(46);
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
    setState(61);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(51);
      match(VMParser::NUM);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<BooleanContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(52);
      match(VMParser::BOOL);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(53);
      match(VMParser::STRING);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<IdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(54);
      match(VMParser::ID);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ParenExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(55);
      match(VMParser::LAPREN);
      setState(56);
      expr(0);
      setState(57);
      match(VMParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<FCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(59);
      funcCall();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ArregloContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(60);
      array();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(78);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(76);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<AritExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(63);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(64);
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
          setState(65);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<EqEqExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(66);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(67);
          antlrcpp::downCast<EqEqExpContext *>(_localctx)->op = match(VMParser::EQEQ);
          setState(68);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<EqExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(69);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(70);
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
          setState(71);
          match(VMParser::EQUAL);
          setState(72);
          expr(5);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<NeqExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(73);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(74);
          antlrcpp::downCast<NeqExpContext *>(_localctx)->op = match(VMParser::NEQ);
          setState(75);
          expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(80);
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
    setState(81);
    match(VMParser::LBRACKET);
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3758637058) != 0)) {
      setState(82);
      expr(0);
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == VMParser::COMMA) {
        setState(83);
        match(VMParser::COMMA);
        setState(84);
        expr(0);
        setState(89);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(92);
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
    setState(94);
    match(VMParser::ID);
    setState(95);
    match(VMParser::EQUAL);
    setState(96);
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
    setState(98);
    match(VMParser::ID);
    setState(103);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == VMParser::COMMA) {
      setState(99);
      match(VMParser::COMMA);
      setState(100);
      match(VMParser::ID);
      setState(105);
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
    setState(106);
    match(VMParser::FUNC);
    setState(107);
    match(VMParser::ID);
    setState(108);
    match(VMParser::LAPREN);
    setState(109);
    funcParams();
    setState(110);
    match(VMParser::RPAREN);
    setState(111);
    match(VMParser::START_BLOCK);
    setState(115);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4207427586) != 0)) {
      setState(112);
      stat();
      setState(117);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(118);
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
    setState(120);
    expr(0);
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == VMParser::COMMA) {
      setState(121);
      match(VMParser::COMMA);
      setState(122);
      expr(0);
      setState(127);
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
    setState(128);
    match(VMParser::ID);
    setState(129);
    match(VMParser::LAPREN);
    setState(130);
    funcArgs();
    setState(131);
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
    setState(143);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case VMParser::FOR: {
        enterOuterAlt(_localctx, 1);
        setState(133);
        match(VMParser::FOR);
        break;
      }

      case VMParser::DESDE: {
        enterOuterAlt(_localctx, 2);
        setState(134);
        match(VMParser::DESDE);
        setState(135);
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
        setState(136);
        match(VMParser::HASTA);
        setState(137);
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
        setState(138);
        match(VMParser::EN);
        setState(141);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case VMParser::ID: {
            setState(139);
            match(VMParser::ID);
            break;
          }

          case VMParser::LBRACKET: {
            setState(140);
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
    setState(145);
    match(VMParser::COND);
    setState(146);
    expr(0);
    setState(147);
    match(VMParser::START_BLOCK);
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4207427586) != 0)) {
      setState(148);
      stat();
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    match(VMParser::END_BLOCK);
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VMParser::COND) {
      setState(155);
      match(VMParser::COND);
      setState(156);
      match(VMParser::START_BLOCK);
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4207427586) != 0)) {
        setState(157);
        stat();
        setState(162);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(163);
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

//----------------- ExternFuncionsContext ------------------------------------------------------------------

VMParser::ExternFuncionsContext::ExternFuncionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::ExternFuncionsContext::ID() {
  return getToken(VMParser::ID, 0);
}


size_t VMParser::ExternFuncionsContext::getRuleIndex() const {
  return VMParser::RuleExternFuncions;
}


std::any VMParser::ExternFuncionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitExternFuncions(this);
  else
    return visitor->visitChildren(this);
}

VMParser::ExternFuncionsContext* VMParser::externFuncions() {
  ExternFuncionsContext *_localctx = _tracker.createInstance<ExternFuncionsContext>(_ctx, getState());
  enterRule(_localctx, 22, VMParser::RuleExternFuncions);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    match(VMParser::ID);
   
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
