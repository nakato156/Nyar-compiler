
// Generated from ./NyarParser.g4 by ANTLR 4.13.2


#include "NyarParserVisitor.h"

#include "NyarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct NyarParserStaticData final {
  NyarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NyarParserStaticData(const NyarParserStaticData&) = delete;
  NyarParserStaticData(NyarParserStaticData&&) = delete;
  NyarParserStaticData& operator=(const NyarParserStaticData&) = delete;
  NyarParserStaticData& operator=(NyarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag nyarparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<NyarParserStaticData> nyarparserParserStaticData = nullptr;

void nyarparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (nyarparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(nyarparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NyarParserStaticData>(
    std::vector<std::string>{
      "program", "stat", "expr", "array", "variable", "funcParams", "funcDef", 
      "funcArgs", "funcCall", "iterar", "condicion"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'='", 
      "','", "';'", "'['", "']'", "", "'{'", "'}'", "", "", "'importar'", 
      "'funcion'", "'iterar'", "'mientras'", "'desde'", "'hasta'", "'en'", 
      "", "", "", "", "'NADA'", "'retornar'"
    },
    std::vector<std::string>{
      "", "LAPREN", "RPAREN", "ADD", "RESTA", "MUL", "DIV", "LESS", "GREATER", 
      "EQUAL", "COMMA", "SEMI", "LBRACKET", "RBRACKET", "LINE_COMMENT", 
      "START_BLOCK", "END_BLOCK", "STRING", "COMMENT", "IMPORT", "FUNC", 
      "FOR", "WHILE", "DESDE", "HASTA", "EN", "COND", "ID", "NUM", "BOOL", 
      "NADA", "RETURN", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,149,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,5,0,24,8,0,10,0,12,0,27,9,0,1,0,1,
  	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,
  	47,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,60,8,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,73,8,2,10,2,12,2,76,9,2,1,3,1,
  	3,1,3,1,3,5,3,82,8,3,10,3,12,3,85,9,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,
  	1,5,5,5,96,8,5,10,5,12,5,99,9,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,108,8,
  	6,10,6,12,6,111,9,6,1,6,1,6,1,7,1,7,1,7,5,7,118,8,7,10,7,12,7,121,9,7,
  	1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,136,8,9,3,9,138,
  	8,9,1,10,1,10,1,10,1,10,5,10,144,8,10,10,10,12,10,147,9,10,1,10,0,1,4,
  	11,0,2,4,6,8,10,12,14,16,18,20,0,3,1,0,3,6,1,0,7,8,1,0,27,28,160,0,25,
  	1,0,0,0,2,46,1,0,0,0,4,59,1,0,0,0,6,77,1,0,0,0,8,88,1,0,0,0,10,92,1,0,
  	0,0,12,100,1,0,0,0,14,114,1,0,0,0,16,122,1,0,0,0,18,137,1,0,0,0,20,139,
  	1,0,0,0,22,24,3,2,1,0,23,22,1,0,0,0,24,27,1,0,0,0,25,23,1,0,0,0,25,26,
  	1,0,0,0,26,28,1,0,0,0,27,25,1,0,0,0,28,29,5,0,0,1,29,1,1,0,0,0,30,31,
  	3,8,4,0,31,32,5,11,0,0,32,47,1,0,0,0,33,34,3,4,2,0,34,35,5,11,0,0,35,
  	47,1,0,0,0,36,47,3,12,6,0,37,38,3,18,9,0,38,39,5,16,0,0,39,47,1,0,0,0,
  	40,41,3,20,10,0,41,42,5,16,0,0,42,47,1,0,0,0,43,44,3,6,3,0,44,45,5,11,
  	0,0,45,47,1,0,0,0,46,30,1,0,0,0,46,33,1,0,0,0,46,36,1,0,0,0,46,37,1,0,
  	0,0,46,40,1,0,0,0,46,43,1,0,0,0,47,3,1,0,0,0,48,49,6,2,-1,0,49,60,5,28,
  	0,0,50,60,5,29,0,0,51,60,5,17,0,0,52,60,5,27,0,0,53,54,5,1,0,0,54,55,
  	3,4,2,0,55,56,5,2,0,0,56,60,1,0,0,0,57,60,3,16,8,0,58,60,3,6,3,0,59,48,
  	1,0,0,0,59,50,1,0,0,0,59,51,1,0,0,0,59,52,1,0,0,0,59,53,1,0,0,0,59,57,
  	1,0,0,0,59,58,1,0,0,0,60,74,1,0,0,0,61,62,10,5,0,0,62,63,7,0,0,0,63,73,
  	3,4,2,6,64,65,10,4,0,0,65,66,5,9,0,0,66,67,5,9,0,0,67,73,3,4,2,5,68,69,
  	10,3,0,0,69,70,7,1,0,0,70,71,5,9,0,0,71,73,3,4,2,4,72,61,1,0,0,0,72,64,
  	1,0,0,0,72,68,1,0,0,0,73,76,1,0,0,0,74,72,1,0,0,0,74,75,1,0,0,0,75,5,
  	1,0,0,0,76,74,1,0,0,0,77,78,5,12,0,0,78,83,3,4,2,0,79,80,5,10,0,0,80,
  	82,3,4,2,0,81,79,1,0,0,0,82,85,1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,84,
  	86,1,0,0,0,85,83,1,0,0,0,86,87,5,13,0,0,87,7,1,0,0,0,88,89,5,27,0,0,89,
  	90,5,9,0,0,90,91,3,4,2,0,91,9,1,0,0,0,92,97,5,27,0,0,93,94,5,10,0,0,94,
  	96,5,27,0,0,95,93,1,0,0,0,96,99,1,0,0,0,97,95,1,0,0,0,97,98,1,0,0,0,98,
  	11,1,0,0,0,99,97,1,0,0,0,100,101,5,20,0,0,101,102,5,27,0,0,102,103,5,
  	1,0,0,103,104,3,10,5,0,104,105,5,2,0,0,105,109,5,15,0,0,106,108,3,2,1,
  	0,107,106,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,
  	112,1,0,0,0,111,109,1,0,0,0,112,113,5,16,0,0,113,13,1,0,0,0,114,119,3,
  	4,2,0,115,116,5,10,0,0,116,118,3,4,2,0,117,115,1,0,0,0,118,121,1,0,0,
  	0,119,117,1,0,0,0,119,120,1,0,0,0,120,15,1,0,0,0,121,119,1,0,0,0,122,
  	123,5,27,0,0,123,124,5,1,0,0,124,125,3,14,7,0,125,126,5,2,0,0,126,17,
  	1,0,0,0,127,138,5,21,0,0,128,129,5,23,0,0,129,130,7,2,0,0,130,131,5,24,
  	0,0,131,138,7,2,0,0,132,135,5,25,0,0,133,136,5,27,0,0,134,136,3,6,3,0,
  	135,133,1,0,0,0,135,134,1,0,0,0,136,138,1,0,0,0,137,127,1,0,0,0,137,128,
  	1,0,0,0,137,132,1,0,0,0,138,19,1,0,0,0,139,140,5,26,0,0,140,141,3,4,2,
  	0,141,145,5,15,0,0,142,144,3,2,1,0,143,142,1,0,0,0,144,147,1,0,0,0,145,
  	143,1,0,0,0,145,146,1,0,0,0,146,21,1,0,0,0,147,145,1,0,0,0,12,25,46,59,
  	72,74,83,97,109,119,135,137,145
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  nyarparserParserStaticData = std::move(staticData);
}

}

NyarParser::NyarParser(TokenStream *input) : NyarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

NyarParser::NyarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  NyarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *nyarparserParserStaticData->atn, nyarparserParserStaticData->decisionToDFA, nyarparserParserStaticData->sharedContextCache, options);
}

NyarParser::~NyarParser() {
  delete _interpreter;
}

const atn::ATN& NyarParser::getATN() const {
  return *nyarparserParserStaticData->atn;
}

std::string NyarParser::getGrammarFileName() const {
  return "NyarParser.g4";
}

const std::vector<std::string>& NyarParser::getRuleNames() const {
  return nyarparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& NyarParser::getVocabulary() const {
  return nyarparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NyarParser::getSerializedATN() const {
  return nyarparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

NyarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::ProgramContext::EOF() {
  return getToken(NyarParser::EOF, 0);
}

std::vector<NyarParser::StatContext *> NyarParser::ProgramContext::stat() {
  return getRuleContexts<NyarParser::StatContext>();
}

NyarParser::StatContext* NyarParser::ProgramContext::stat(size_t i) {
  return getRuleContext<NyarParser::StatContext>(i);
}


size_t NyarParser::ProgramContext::getRuleIndex() const {
  return NyarParser::RuleProgram;
}


std::any NyarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ProgramContext* NyarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, NyarParser::RuleProgram);
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
      ((1ULL << _la) & 1051856898) != 0)) {
      setState(22);
      stat();
      setState(27);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(28);
    match(NyarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

NyarParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NyarParser::VariableContext* NyarParser::StatContext::variable() {
  return getRuleContext<NyarParser::VariableContext>(0);
}

tree::TerminalNode* NyarParser::StatContext::SEMI() {
  return getToken(NyarParser::SEMI, 0);
}

NyarParser::ExprContext* NyarParser::StatContext::expr() {
  return getRuleContext<NyarParser::ExprContext>(0);
}

NyarParser::FuncDefContext* NyarParser::StatContext::funcDef() {
  return getRuleContext<NyarParser::FuncDefContext>(0);
}

NyarParser::IterarContext* NyarParser::StatContext::iterar() {
  return getRuleContext<NyarParser::IterarContext>(0);
}

tree::TerminalNode* NyarParser::StatContext::END_BLOCK() {
  return getToken(NyarParser::END_BLOCK, 0);
}

NyarParser::CondicionContext* NyarParser::StatContext::condicion() {
  return getRuleContext<NyarParser::CondicionContext>(0);
}

NyarParser::ArrayContext* NyarParser::StatContext::array() {
  return getRuleContext<NyarParser::ArrayContext>(0);
}


size_t NyarParser::StatContext::getRuleIndex() const {
  return NyarParser::RuleStat;
}


std::any NyarParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::StatContext* NyarParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, NyarParser::RuleStat);

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
      match(NyarParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(33);
      expr(0);
      setState(34);
      match(NyarParser::SEMI);
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
      match(NyarParser::END_BLOCK);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(40);
      condicion();
      setState(41);
      match(NyarParser::END_BLOCK);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(43);
      array();
      setState(44);
      match(NyarParser::SEMI);
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

NyarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NyarParser::ExprContext::getRuleIndex() const {
  return NyarParser::RuleExpr;
}

void NyarParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NumberContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::NumberContext::NUM() {
  return getToken(NyarParser::NUM, 0);
}

NyarParser::NumberContext::NumberContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqExpContext ------------------------------------------------------------------

std::vector<NyarParser::ExprContext *> NyarParser::EqExpContext::expr() {
  return getRuleContexts<NyarParser::ExprContext>();
}

NyarParser::ExprContext* NyarParser::EqExpContext::expr(size_t i) {
  return getRuleContext<NyarParser::ExprContext>(i);
}

tree::TerminalNode* NyarParser::EqExpContext::EQUAL() {
  return getToken(NyarParser::EQUAL, 0);
}

tree::TerminalNode* NyarParser::EqExpContext::LESS() {
  return getToken(NyarParser::LESS, 0);
}

tree::TerminalNode* NyarParser::EqExpContext::GREATER() {
  return getToken(NyarParser::GREATER, 0);
}

NyarParser::EqExpContext::EqExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::EqExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitEqExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::BooleanContext::BOOL() {
  return getToken(NyarParser::BOOL, 0);
}

NyarParser::BooleanContext::BooleanContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::BooleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitBoolean(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AritExpContext ------------------------------------------------------------------

std::vector<NyarParser::ExprContext *> NyarParser::AritExpContext::expr() {
  return getRuleContexts<NyarParser::ExprContext>();
}

NyarParser::ExprContext* NyarParser::AritExpContext::expr(size_t i) {
  return getRuleContext<NyarParser::ExprContext>(i);
}

tree::TerminalNode* NyarParser::AritExpContext::MUL() {
  return getToken(NyarParser::MUL, 0);
}

tree::TerminalNode* NyarParser::AritExpContext::DIV() {
  return getToken(NyarParser::DIV, 0);
}

tree::TerminalNode* NyarParser::AritExpContext::ADD() {
  return getToken(NyarParser::ADD, 0);
}

tree::TerminalNode* NyarParser::AritExpContext::RESTA() {
  return getToken(NyarParser::RESTA, 0);
}

NyarParser::AritExpContext::AritExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::AritExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitAritExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::StringContext::STRING() {
  return getToken(NyarParser::STRING, 0);
}

NyarParser::StringContext::StringContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExpContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::ParenExpContext::LAPREN() {
  return getToken(NyarParser::LAPREN, 0);
}

NyarParser::ExprContext* NyarParser::ParenExpContext::expr() {
  return getRuleContext<NyarParser::ExprContext>(0);
}

tree::TerminalNode* NyarParser::ParenExpContext::RPAREN() {
  return getToken(NyarParser::RPAREN, 0);
}

NyarParser::ParenExpContext::ParenExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::ParenExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitParenExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FCallContext ------------------------------------------------------------------

NyarParser::FuncCallContext* NyarParser::FCallContext::funcCall() {
  return getRuleContext<NyarParser::FuncCallContext>(0);
}

NyarParser::FCallContext::FCallContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::FCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitFCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::IdContext::ID() {
  return getToken(NyarParser::ID, 0);
}

NyarParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArregloContext ------------------------------------------------------------------

NyarParser::ArrayContext* NyarParser::ArregloContext::array() {
  return getRuleContext<NyarParser::ArrayContext>(0);
}

NyarParser::ArregloContext::ArregloContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::ArregloContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitArreglo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqEqExpContext ------------------------------------------------------------------

std::vector<NyarParser::ExprContext *> NyarParser::EqEqExpContext::expr() {
  return getRuleContexts<NyarParser::ExprContext>();
}

NyarParser::ExprContext* NyarParser::EqEqExpContext::expr(size_t i) {
  return getRuleContext<NyarParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::EqEqExpContext::EQUAL() {
  return getTokens(NyarParser::EQUAL);
}

tree::TerminalNode* NyarParser::EqEqExpContext::EQUAL(size_t i) {
  return getToken(NyarParser::EQUAL, i);
}

NyarParser::EqEqExpContext::EqEqExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::EqEqExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitEqEqExp(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ExprContext* NyarParser::expr() {
   return expr(0);
}

NyarParser::ExprContext* NyarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NyarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  NyarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, NyarParser::RuleExpr, precedence);

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
      match(NyarParser::NUM);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<BooleanContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(50);
      match(NyarParser::BOOL);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(51);
      match(NyarParser::STRING);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<IdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(52);
      match(NyarParser::ID);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ParenExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(53);
      match(NyarParser::LAPREN);
      setState(54);
      expr(0);
      setState(55);
      match(NyarParser::RPAREN);
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
          auto newContext = _tracker.createInstance<AritExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(61);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
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
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<EqEqExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(64);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(65);
          antlrcpp::downCast<EqEqExpContext *>(_localctx)->op = match(NyarParser::EQUAL);
          setState(66);
          match(NyarParser::EQUAL);
          setState(67);
          expr(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<EqExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(68);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(69);
          antlrcpp::downCast<EqExpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == NyarParser::LESS

          || _la == NyarParser::GREATER)) {
            antlrcpp::downCast<EqExpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(70);
          match(NyarParser::EQUAL);
          setState(71);
          expr(4);
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

//----------------- ArrayContext ------------------------------------------------------------------

NyarParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::ArrayContext::LBRACKET() {
  return getToken(NyarParser::LBRACKET, 0);
}

std::vector<NyarParser::ExprContext *> NyarParser::ArrayContext::expr() {
  return getRuleContexts<NyarParser::ExprContext>();
}

NyarParser::ExprContext* NyarParser::ArrayContext::expr(size_t i) {
  return getRuleContext<NyarParser::ExprContext>(i);
}

tree::TerminalNode* NyarParser::ArrayContext::RBRACKET() {
  return getToken(NyarParser::RBRACKET, 0);
}

std::vector<tree::TerminalNode *> NyarParser::ArrayContext::COMMA() {
  return getTokens(NyarParser::COMMA);
}

tree::TerminalNode* NyarParser::ArrayContext::COMMA(size_t i) {
  return getToken(NyarParser::COMMA, i);
}


size_t NyarParser::ArrayContext::getRuleIndex() const {
  return NyarParser::RuleArray;
}


std::any NyarParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitArray(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ArrayContext* NyarParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 6, NyarParser::RuleArray);
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
    setState(77);
    match(NyarParser::LBRACKET);
    setState(78);
    expr(0);
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NyarParser::COMMA) {
      setState(79);
      match(NyarParser::COMMA);
      setState(80);
      expr(0);
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(86);
    match(NyarParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

NyarParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::VariableContext::ID() {
  return getToken(NyarParser::ID, 0);
}

tree::TerminalNode* NyarParser::VariableContext::EQUAL() {
  return getToken(NyarParser::EQUAL, 0);
}

NyarParser::ExprContext* NyarParser::VariableContext::expr() {
  return getRuleContext<NyarParser::ExprContext>(0);
}


size_t NyarParser::VariableContext::getRuleIndex() const {
  return NyarParser::RuleVariable;
}


std::any NyarParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::VariableContext* NyarParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 8, NyarParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(NyarParser::ID);
    setState(89);
    match(NyarParser::EQUAL);
    setState(90);
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

NyarParser::FuncParamsContext::FuncParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> NyarParser::FuncParamsContext::ID() {
  return getTokens(NyarParser::ID);
}

tree::TerminalNode* NyarParser::FuncParamsContext::ID(size_t i) {
  return getToken(NyarParser::ID, i);
}

std::vector<tree::TerminalNode *> NyarParser::FuncParamsContext::COMMA() {
  return getTokens(NyarParser::COMMA);
}

tree::TerminalNode* NyarParser::FuncParamsContext::COMMA(size_t i) {
  return getToken(NyarParser::COMMA, i);
}


size_t NyarParser::FuncParamsContext::getRuleIndex() const {
  return NyarParser::RuleFuncParams;
}


std::any NyarParser::FuncParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitFuncParams(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::FuncParamsContext* NyarParser::funcParams() {
  FuncParamsContext *_localctx = _tracker.createInstance<FuncParamsContext>(_ctx, getState());
  enterRule(_localctx, 10, NyarParser::RuleFuncParams);
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
    setState(92);
    match(NyarParser::ID);
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NyarParser::COMMA) {
      setState(93);
      match(NyarParser::COMMA);
      setState(94);
      match(NyarParser::ID);
      setState(99);
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

NyarParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::FuncDefContext::FUNC() {
  return getToken(NyarParser::FUNC, 0);
}

tree::TerminalNode* NyarParser::FuncDefContext::ID() {
  return getToken(NyarParser::ID, 0);
}

tree::TerminalNode* NyarParser::FuncDefContext::LAPREN() {
  return getToken(NyarParser::LAPREN, 0);
}

NyarParser::FuncParamsContext* NyarParser::FuncDefContext::funcParams() {
  return getRuleContext<NyarParser::FuncParamsContext>(0);
}

tree::TerminalNode* NyarParser::FuncDefContext::RPAREN() {
  return getToken(NyarParser::RPAREN, 0);
}

tree::TerminalNode* NyarParser::FuncDefContext::START_BLOCK() {
  return getToken(NyarParser::START_BLOCK, 0);
}

tree::TerminalNode* NyarParser::FuncDefContext::END_BLOCK() {
  return getToken(NyarParser::END_BLOCK, 0);
}

std::vector<NyarParser::StatContext *> NyarParser::FuncDefContext::stat() {
  return getRuleContexts<NyarParser::StatContext>();
}

NyarParser::StatContext* NyarParser::FuncDefContext::stat(size_t i) {
  return getRuleContext<NyarParser::StatContext>(i);
}


size_t NyarParser::FuncDefContext::getRuleIndex() const {
  return NyarParser::RuleFuncDef;
}


std::any NyarParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::FuncDefContext* NyarParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 12, NyarParser::RuleFuncDef);
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
    setState(100);
    match(NyarParser::FUNC);
    setState(101);
    match(NyarParser::ID);
    setState(102);
    match(NyarParser::LAPREN);
    setState(103);
    funcParams();
    setState(104);
    match(NyarParser::RPAREN);
    setState(105);
    match(NyarParser::START_BLOCK);
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1051856898) != 0)) {
      setState(106);
      stat();
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(112);
    match(NyarParser::END_BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncArgsContext ------------------------------------------------------------------

NyarParser::FuncArgsContext::FuncArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NyarParser::ExprContext *> NyarParser::FuncArgsContext::expr() {
  return getRuleContexts<NyarParser::ExprContext>();
}

NyarParser::ExprContext* NyarParser::FuncArgsContext::expr(size_t i) {
  return getRuleContext<NyarParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> NyarParser::FuncArgsContext::COMMA() {
  return getTokens(NyarParser::COMMA);
}

tree::TerminalNode* NyarParser::FuncArgsContext::COMMA(size_t i) {
  return getToken(NyarParser::COMMA, i);
}


size_t NyarParser::FuncArgsContext::getRuleIndex() const {
  return NyarParser::RuleFuncArgs;
}


std::any NyarParser::FuncArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitFuncArgs(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::FuncArgsContext* NyarParser::funcArgs() {
  FuncArgsContext *_localctx = _tracker.createInstance<FuncArgsContext>(_ctx, getState());
  enterRule(_localctx, 14, NyarParser::RuleFuncArgs);
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
    setState(114);
    expr(0);
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NyarParser::COMMA) {
      setState(115);
      match(NyarParser::COMMA);
      setState(116);
      expr(0);
      setState(121);
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

NyarParser::FuncCallContext::FuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::FuncCallContext::ID() {
  return getToken(NyarParser::ID, 0);
}

tree::TerminalNode* NyarParser::FuncCallContext::LAPREN() {
  return getToken(NyarParser::LAPREN, 0);
}

NyarParser::FuncArgsContext* NyarParser::FuncCallContext::funcArgs() {
  return getRuleContext<NyarParser::FuncArgsContext>(0);
}

tree::TerminalNode* NyarParser::FuncCallContext::RPAREN() {
  return getToken(NyarParser::RPAREN, 0);
}


size_t NyarParser::FuncCallContext::getRuleIndex() const {
  return NyarParser::RuleFuncCall;
}


std::any NyarParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::FuncCallContext* NyarParser::funcCall() {
  FuncCallContext *_localctx = _tracker.createInstance<FuncCallContext>(_ctx, getState());
  enterRule(_localctx, 16, NyarParser::RuleFuncCall);

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
    match(NyarParser::ID);
    setState(123);
    match(NyarParser::LAPREN);
    setState(124);
    funcArgs();
    setState(125);
    match(NyarParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterarContext ------------------------------------------------------------------

NyarParser::IterarContext::IterarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::IterarContext::FOR() {
  return getToken(NyarParser::FOR, 0);
}

tree::TerminalNode* NyarParser::IterarContext::DESDE() {
  return getToken(NyarParser::DESDE, 0);
}

tree::TerminalNode* NyarParser::IterarContext::HASTA() {
  return getToken(NyarParser::HASTA, 0);
}

std::vector<tree::TerminalNode *> NyarParser::IterarContext::NUM() {
  return getTokens(NyarParser::NUM);
}

tree::TerminalNode* NyarParser::IterarContext::NUM(size_t i) {
  return getToken(NyarParser::NUM, i);
}

std::vector<tree::TerminalNode *> NyarParser::IterarContext::ID() {
  return getTokens(NyarParser::ID);
}

tree::TerminalNode* NyarParser::IterarContext::ID(size_t i) {
  return getToken(NyarParser::ID, i);
}

tree::TerminalNode* NyarParser::IterarContext::EN() {
  return getToken(NyarParser::EN, 0);
}

NyarParser::ArrayContext* NyarParser::IterarContext::array() {
  return getRuleContext<NyarParser::ArrayContext>(0);
}


size_t NyarParser::IterarContext::getRuleIndex() const {
  return NyarParser::RuleIterar;
}


std::any NyarParser::IterarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitIterar(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::IterarContext* NyarParser::iterar() {
  IterarContext *_localctx = _tracker.createInstance<IterarContext>(_ctx, getState());
  enterRule(_localctx, 18, NyarParser::RuleIterar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NyarParser::FOR: {
        enterOuterAlt(_localctx, 1);
        setState(127);
        match(NyarParser::FOR);
        break;
      }

      case NyarParser::DESDE: {
        enterOuterAlt(_localctx, 2);
        setState(128);
        match(NyarParser::DESDE);
        setState(129);
        antlrcpp::downCast<IterarContext *>(_localctx)->i = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == NyarParser::ID

        || _la == NyarParser::NUM)) {
          antlrcpp::downCast<IterarContext *>(_localctx)->i = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(130);
        match(NyarParser::HASTA);
        setState(131);
        antlrcpp::downCast<IterarContext *>(_localctx)->f = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == NyarParser::ID

        || _la == NyarParser::NUM)) {
          antlrcpp::downCast<IterarContext *>(_localctx)->f = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case NyarParser::EN: {
        enterOuterAlt(_localctx, 3);
        setState(132);
        match(NyarParser::EN);
        setState(135);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case NyarParser::ID: {
            setState(133);
            match(NyarParser::ID);
            break;
          }

          case NyarParser::LBRACKET: {
            setState(134);
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

NyarParser::CondicionContext::CondicionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::CondicionContext::COND() {
  return getToken(NyarParser::COND, 0);
}

NyarParser::ExprContext* NyarParser::CondicionContext::expr() {
  return getRuleContext<NyarParser::ExprContext>(0);
}

tree::TerminalNode* NyarParser::CondicionContext::START_BLOCK() {
  return getToken(NyarParser::START_BLOCK, 0);
}

std::vector<NyarParser::StatContext *> NyarParser::CondicionContext::stat() {
  return getRuleContexts<NyarParser::StatContext>();
}

NyarParser::StatContext* NyarParser::CondicionContext::stat(size_t i) {
  return getRuleContext<NyarParser::StatContext>(i);
}


size_t NyarParser::CondicionContext::getRuleIndex() const {
  return NyarParser::RuleCondicion;
}


std::any NyarParser::CondicionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitCondicion(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::CondicionContext* NyarParser::condicion() {
  CondicionContext *_localctx = _tracker.createInstance<CondicionContext>(_ctx, getState());
  enterRule(_localctx, 20, NyarParser::RuleCondicion);
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
    setState(139);
    match(NyarParser::COND);
    setState(140);
    expr(0);
    setState(141);
    match(NyarParser::START_BLOCK);
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1051856898) != 0)) {
      setState(142);
      stat();
      setState(147);
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

bool NyarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NyarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void NyarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  nyarparserParserInitialize();
#else
  ::antlr4::internal::call_once(nyarparserParserOnceFlag, nyarparserParserInitialize);
#endif
}
