
// Generated from NyarParser.g4 by ANTLR 4.13.0


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
NyarParserStaticData *nyarparserParserStaticData = nullptr;

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
      "program", "stat", "returnExp", "expr", "hint", "array", "variable", 
      "funcParams", "funcBlock", "funcDef", "funcArgs", "funcCall", "block", 
      "struct", "iterar", "else", "elseif", "condicion"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'<'", "'<='", "'>'", 
      "'>='", "'='", "'!='", "'=='", "','", "';'", "'['", "']'", "'||'", 
      "'&&'", "'.'", "':'", "", "'{'", "'}'", "", "", "'importar'", "'estructura'", 
      "'funcion'", "'iterar'", "'mientras'", "'desde'", "'hasta'", "'en'", 
      "'si'", "'sino'", "", "'NADA'", "'retornar'"
    },
    std::vector<std::string>{
      "", "LAPREN", "RPAREN", "ADD", "RESTA", "MUL", "DIV", "LESS", "LESS_EQUAL", 
      "GREATER", "GREATER_EQUAL", "EQUAL", "NEQ", "EQEQ", "COMMA", "SEMI", 
      "LBRACKET", "RBRACKET", "OR", "AND", "DOT", "HINT_INDICATOR", "LINE_COMMENT", 
      "START_BLOCK", "END_BLOCK", "STRING", "COMMENT", "IMPORT", "STRUCTDef", 
      "FUNC", "FOR", "WHILE", "DESDE", "HASTA", "EN", "COND", "ELSE_COND", 
      "BOOL", "NADA", "RETURN", "ID", "NUM", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,42,251,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,5,0,38,8,0,10,0,12,0,41,9,0,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,58,8,1,1,
  	2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,
  	77,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,3,3,96,8,3,5,3,98,8,3,10,3,12,3,101,9,3,1,4,1,4,1,4,1,5,1,5,1,5,
  	1,5,5,5,110,8,5,10,5,12,5,113,9,5,3,5,115,8,5,1,5,1,5,1,6,1,6,3,6,121,
  	8,6,1,6,1,6,1,6,1,7,1,7,1,7,5,7,129,8,7,10,7,12,7,132,9,7,1,8,1,8,5,8,
  	136,8,8,10,8,12,8,139,9,8,1,8,1,8,1,8,1,8,3,8,145,8,8,3,8,147,8,8,1,8,
  	1,8,1,9,1,9,1,9,1,9,3,9,155,8,9,1,9,1,9,1,9,1,10,1,10,1,10,5,10,163,8,
  	10,10,10,12,10,166,9,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,5,12,175,8,
  	12,10,12,12,12,178,9,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,198,8,14,1,14,3,14,
  	201,8,14,1,15,1,15,1,15,5,15,206,8,15,10,15,12,15,209,9,15,1,15,1,15,
  	1,16,1,16,1,16,5,16,216,8,16,10,16,12,16,219,9,16,1,16,1,16,5,16,223,
  	8,16,10,16,12,16,226,9,16,1,16,1,16,1,17,1,17,5,17,232,8,17,10,17,12,
  	17,235,9,17,1,17,1,17,5,17,239,8,17,10,17,12,17,242,9,17,1,17,1,17,3,
  	17,246,8,17,1,17,3,17,249,8,17,1,17,0,1,6,18,0,2,4,6,8,10,12,14,16,18,
  	20,22,24,26,28,30,32,34,0,3,2,0,7,10,12,13,1,0,3,6,1,0,40,41,272,0,39,
  	1,0,0,0,2,57,1,0,0,0,4,59,1,0,0,0,6,76,1,0,0,0,8,102,1,0,0,0,10,105,1,
  	0,0,0,12,118,1,0,0,0,14,125,1,0,0,0,16,133,1,0,0,0,18,150,1,0,0,0,20,
  	159,1,0,0,0,22,167,1,0,0,0,24,172,1,0,0,0,26,181,1,0,0,0,28,200,1,0,0,
  	0,30,202,1,0,0,0,32,212,1,0,0,0,34,229,1,0,0,0,36,38,3,2,1,0,37,36,1,
  	0,0,0,38,41,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,42,1,0,0,0,41,39,1,
  	0,0,0,42,43,5,0,0,1,43,1,1,0,0,0,44,45,3,12,6,0,45,46,5,15,0,0,46,58,
  	1,0,0,0,47,48,3,6,3,0,48,49,5,15,0,0,49,58,1,0,0,0,50,58,3,18,9,0,51,
  	58,3,28,14,0,52,58,3,34,17,0,53,54,3,10,5,0,54,55,5,15,0,0,55,58,1,0,
  	0,0,56,58,3,4,2,0,57,44,1,0,0,0,57,47,1,0,0,0,57,50,1,0,0,0,57,51,1,0,
  	0,0,57,52,1,0,0,0,57,53,1,0,0,0,57,56,1,0,0,0,58,3,1,0,0,0,59,60,5,39,
  	0,0,60,61,3,6,3,0,61,62,5,15,0,0,62,5,1,0,0,0,63,64,6,3,-1,0,64,65,5,
  	1,0,0,65,66,3,6,3,0,66,67,5,2,0,0,67,77,1,0,0,0,68,77,5,41,0,0,69,77,
  	5,37,0,0,70,77,5,25,0,0,71,77,5,40,0,0,72,77,5,38,0,0,73,77,3,22,11,0,
  	74,77,3,10,5,0,75,77,3,26,13,0,76,63,1,0,0,0,76,68,1,0,0,0,76,69,1,0,
  	0,0,76,70,1,0,0,0,76,71,1,0,0,0,76,72,1,0,0,0,76,73,1,0,0,0,76,74,1,0,
  	0,0,76,75,1,0,0,0,77,99,1,0,0,0,78,79,10,14,0,0,79,80,5,18,0,0,80,98,
  	3,6,3,15,81,82,10,13,0,0,82,83,5,19,0,0,83,98,3,6,3,14,84,85,10,12,0,
  	0,85,86,7,0,0,0,86,98,3,6,3,13,87,88,10,11,0,0,88,89,7,1,0,0,89,98,3,
  	6,3,12,90,95,10,1,0,0,91,92,5,20,0,0,92,96,5,40,0,0,93,94,5,20,0,0,94,
  	96,3,22,11,0,95,91,1,0,0,0,95,93,1,0,0,0,96,98,1,0,0,0,97,78,1,0,0,0,
  	97,81,1,0,0,0,97,84,1,0,0,0,97,87,1,0,0,0,97,90,1,0,0,0,98,101,1,0,0,
  	0,99,97,1,0,0,0,99,100,1,0,0,0,100,7,1,0,0,0,101,99,1,0,0,0,102,103,5,
  	21,0,0,103,104,5,40,0,0,104,9,1,0,0,0,105,114,5,16,0,0,106,111,3,6,3,
  	0,107,108,5,14,0,0,108,110,3,6,3,0,109,107,1,0,0,0,110,113,1,0,0,0,111,
  	109,1,0,0,0,111,112,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,114,106,1,
  	0,0,0,114,115,1,0,0,0,115,116,1,0,0,0,116,117,5,17,0,0,117,11,1,0,0,0,
  	118,120,5,40,0,0,119,121,3,8,4,0,120,119,1,0,0,0,120,121,1,0,0,0,121,
  	122,1,0,0,0,122,123,5,11,0,0,123,124,3,6,3,0,124,13,1,0,0,0,125,130,5,
  	40,0,0,126,127,5,14,0,0,127,129,5,40,0,0,128,126,1,0,0,0,129,132,1,0,
  	0,0,130,128,1,0,0,0,130,131,1,0,0,0,131,15,1,0,0,0,132,130,1,0,0,0,133,
  	137,5,23,0,0,134,136,3,2,1,0,135,134,1,0,0,0,136,139,1,0,0,0,137,135,
  	1,0,0,0,137,138,1,0,0,0,138,146,1,0,0,0,139,137,1,0,0,0,140,144,5,39,
  	0,0,141,142,3,6,3,0,142,143,5,15,0,0,143,145,1,0,0,0,144,141,1,0,0,0,
  	144,145,1,0,0,0,145,147,1,0,0,0,146,140,1,0,0,0,146,147,1,0,0,0,147,148,
  	1,0,0,0,148,149,5,24,0,0,149,17,1,0,0,0,150,151,5,29,0,0,151,152,5,40,
  	0,0,152,154,5,1,0,0,153,155,3,14,7,0,154,153,1,0,0,0,154,155,1,0,0,0,
  	155,156,1,0,0,0,156,157,5,2,0,0,157,158,3,16,8,0,158,19,1,0,0,0,159,164,
  	3,6,3,0,160,161,5,14,0,0,161,163,3,6,3,0,162,160,1,0,0,0,163,166,1,0,
  	0,0,164,162,1,0,0,0,164,165,1,0,0,0,165,21,1,0,0,0,166,164,1,0,0,0,167,
  	168,5,40,0,0,168,169,5,1,0,0,169,170,3,20,10,0,170,171,5,2,0,0,171,23,
  	1,0,0,0,172,176,5,23,0,0,173,175,3,2,1,0,174,173,1,0,0,0,175,178,1,0,
  	0,0,176,174,1,0,0,0,176,177,1,0,0,0,177,179,1,0,0,0,178,176,1,0,0,0,179,
  	180,5,24,0,0,180,25,1,0,0,0,181,182,5,28,0,0,182,183,5,40,0,0,183,184,
  	3,24,12,0,184,27,1,0,0,0,185,186,5,30,0,0,186,187,5,40,0,0,187,188,5,
  	32,0,0,188,189,7,2,0,0,189,190,5,33,0,0,190,191,7,2,0,0,191,201,3,24,
  	12,0,192,193,5,30,0,0,193,194,5,40,0,0,194,197,5,34,0,0,195,198,5,40,
  	0,0,196,198,3,10,5,0,197,195,1,0,0,0,197,196,1,0,0,0,198,199,1,0,0,0,
  	199,201,3,24,12,0,200,185,1,0,0,0,200,192,1,0,0,0,201,29,1,0,0,0,202,
  	203,5,36,0,0,203,207,5,23,0,0,204,206,3,2,1,0,205,204,1,0,0,0,206,209,
  	1,0,0,0,207,205,1,0,0,0,207,208,1,0,0,0,208,210,1,0,0,0,209,207,1,0,0,
  	0,210,211,5,24,0,0,211,31,1,0,0,0,212,213,5,36,0,0,213,217,5,35,0,0,214,
  	216,3,6,3,0,215,214,1,0,0,0,216,219,1,0,0,0,217,215,1,0,0,0,217,218,1,
  	0,0,0,218,220,1,0,0,0,219,217,1,0,0,0,220,224,5,23,0,0,221,223,3,2,1,
  	0,222,221,1,0,0,0,223,226,1,0,0,0,224,222,1,0,0,0,224,225,1,0,0,0,225,
  	227,1,0,0,0,226,224,1,0,0,0,227,228,5,24,0,0,228,33,1,0,0,0,229,233,5,
  	35,0,0,230,232,3,6,3,0,231,230,1,0,0,0,232,235,1,0,0,0,233,231,1,0,0,
  	0,233,234,1,0,0,0,234,236,1,0,0,0,235,233,1,0,0,0,236,240,5,23,0,0,237,
  	239,3,2,1,0,238,237,1,0,0,0,239,242,1,0,0,0,240,238,1,0,0,0,240,241,1,
  	0,0,0,241,243,1,0,0,0,242,240,1,0,0,0,243,245,5,24,0,0,244,246,3,32,16,
  	0,245,244,1,0,0,0,245,246,1,0,0,0,246,248,1,0,0,0,247,249,3,30,15,0,248,
  	247,1,0,0,0,248,249,1,0,0,0,249,35,1,0,0,0,25,39,57,76,95,97,99,111,114,
  	120,130,137,144,146,154,164,176,197,200,207,217,224,233,240,245,248
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  nyarparserParserStaticData = staticData.release();
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
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4296879964162) != 0)) {
      setState(36);
      stat();
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(42);
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

NyarParser::CondicionContext* NyarParser::StatContext::condicion() {
  return getRuleContext<NyarParser::CondicionContext>(0);
}

NyarParser::ArrayContext* NyarParser::StatContext::array() {
  return getRuleContext<NyarParser::ArrayContext>(0);
}

NyarParser::ReturnExpContext* NyarParser::StatContext::returnExp() {
  return getRuleContext<NyarParser::ReturnExpContext>(0);
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
    setState(57);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(44);
      variable();
      setState(45);
      match(NyarParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(47);
      expr(0);
      setState(48);
      match(NyarParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(50);
      funcDef();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(51);
      iterar();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(52);
      condicion();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(53);
      array();
      setState(54);
      match(NyarParser::SEMI);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(56);
      returnExp();
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

//----------------- ReturnExpContext ------------------------------------------------------------------

NyarParser::ReturnExpContext::ReturnExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::ReturnExpContext::RETURN() {
  return getToken(NyarParser::RETURN, 0);
}

NyarParser::ExprContext* NyarParser::ReturnExpContext::expr() {
  return getRuleContext<NyarParser::ExprContext>(0);
}

tree::TerminalNode* NyarParser::ReturnExpContext::SEMI() {
  return getToken(NyarParser::SEMI, 0);
}


size_t NyarParser::ReturnExpContext::getRuleIndex() const {
  return NyarParser::RuleReturnExp;
}


std::any NyarParser::ReturnExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitReturnExp(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ReturnExpContext* NyarParser::returnExp() {
  ReturnExpContext *_localctx = _tracker.createInstance<ReturnExpContext>(_ctx, getState());
  enterRule(_localctx, 4, NyarParser::RuleReturnExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    match(NyarParser::RETURN);
    setState(60);
    expr(0);
    setState(61);
    match(NyarParser::SEMI);
   
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

//----------------- MemberAccessContext ------------------------------------------------------------------

NyarParser::ExprContext* NyarParser::MemberAccessContext::expr() {
  return getRuleContext<NyarParser::ExprContext>(0);
}

tree::TerminalNode* NyarParser::MemberAccessContext::DOT() {
  return getToken(NyarParser::DOT, 0);
}

tree::TerminalNode* NyarParser::MemberAccessContext::ID() {
  return getToken(NyarParser::ID, 0);
}

NyarParser::FuncCallContext* NyarParser::MemberAccessContext::funcCall() {
  return getRuleContext<NyarParser::FuncCallContext>(0);
}

NyarParser::MemberAccessContext::MemberAccessContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::MemberAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitMemberAccess(this);
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
//----------------- LogicalAndExpContext ------------------------------------------------------------------

std::vector<NyarParser::ExprContext *> NyarParser::LogicalAndExpContext::expr() {
  return getRuleContexts<NyarParser::ExprContext>();
}

NyarParser::ExprContext* NyarParser::LogicalAndExpContext::expr(size_t i) {
  return getRuleContext<NyarParser::ExprContext>(i);
}

tree::TerminalNode* NyarParser::LogicalAndExpContext::AND() {
  return getToken(NyarParser::AND, 0);
}

NyarParser::LogicalAndExpContext::LogicalAndExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::LogicalAndExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExp(this);
  else
    return visitor->visitChildren(this);
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
//----------------- LogicalOrExpContext ------------------------------------------------------------------

std::vector<NyarParser::ExprContext *> NyarParser::LogicalOrExpContext::expr() {
  return getRuleContexts<NyarParser::ExprContext>();
}

NyarParser::ExprContext* NyarParser::LogicalOrExpContext::expr(size_t i) {
  return getRuleContext<NyarParser::ExprContext>(i);
}

tree::TerminalNode* NyarParser::LogicalOrExpContext::OR() {
  return getToken(NyarParser::OR, 0);
}

NyarParser::LogicalOrExpContext::LogicalOrExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::LogicalOrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExp(this);
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
//----------------- NnullContext ------------------------------------------------------------------

tree::TerminalNode* NyarParser::NnullContext::NADA() {
  return getToken(NyarParser::NADA, 0);
}

NyarParser::NnullContext::NnullContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::NnullContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitNnull(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComparisonExpContext ------------------------------------------------------------------

std::vector<NyarParser::ExprContext *> NyarParser::ComparisonExpContext::expr() {
  return getRuleContexts<NyarParser::ExprContext>();
}

NyarParser::ExprContext* NyarParser::ComparisonExpContext::expr(size_t i) {
  return getRuleContext<NyarParser::ExprContext>(i);
}

tree::TerminalNode* NyarParser::ComparisonExpContext::LESS() {
  return getToken(NyarParser::LESS, 0);
}

tree::TerminalNode* NyarParser::ComparisonExpContext::LESS_EQUAL() {
  return getToken(NyarParser::LESS_EQUAL, 0);
}

tree::TerminalNode* NyarParser::ComparisonExpContext::GREATER() {
  return getToken(NyarParser::GREATER, 0);
}

tree::TerminalNode* NyarParser::ComparisonExpContext::GREATER_EQUAL() {
  return getToken(NyarParser::GREATER_EQUAL, 0);
}

tree::TerminalNode* NyarParser::ComparisonExpContext::EQEQ() {
  return getToken(NyarParser::EQEQ, 0);
}

tree::TerminalNode* NyarParser::ComparisonExpContext::NEQ() {
  return getToken(NyarParser::NEQ, 0);
}

NyarParser::ComparisonExpContext::ComparisonExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::ComparisonExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitComparisonExp(this);
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
//----------------- EstructuraContext ------------------------------------------------------------------

NyarParser::StructContext* NyarParser::EstructuraContext::struct_() {
  return getRuleContext<NyarParser::StructContext>(0);
}

NyarParser::EstructuraContext::EstructuraContext(ExprContext *ctx) { copyFrom(ctx); }


std::any NyarParser::EstructuraContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitEstructura(this);
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
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, NyarParser::RuleExpr, precedence);

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
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(64);
      match(NyarParser::LAPREN);
      setState(65);
      expr(0);
      setState(66);
      match(NyarParser::RPAREN);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(68);
      match(NyarParser::NUM);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<BooleanContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(69);
      match(NyarParser::BOOL);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<StringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(70);
      match(NyarParser::STRING);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(71);
      match(NyarParser::ID);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NnullContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(72);
      match(NyarParser::NADA);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<FCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(73);
      funcCall();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ArregloContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(74);
      array();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<EstructuraContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(75);
      struct_();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(99);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(97);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LogicalOrExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(78);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(79);
          antlrcpp::downCast<LogicalOrExpContext *>(_localctx)->op = match(NyarParser::OR);
          setState(80);
          expr(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LogicalAndExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(81);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(82);
          antlrcpp::downCast<LogicalAndExpContext *>(_localctx)->op = match(NyarParser::AND);
          setState(83);
          expr(14);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ComparisonExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(84);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(85);
          antlrcpp::downCast<ComparisonExpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 14208) != 0))) {
            antlrcpp::downCast<ComparisonExpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(86);
          expr(13);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AritExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(87);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(88);
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
          setState(89);
          expr(12);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<MemberAccessContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(90);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(95);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
          case 1: {
            setState(91);
            match(NyarParser::DOT);
            setState(92);
            match(NyarParser::ID);
            break;
          }

          case 2: {
            setState(93);
            match(NyarParser::DOT);
            setState(94);
            funcCall();
            break;
          }

          default:
            break;
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(101);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- HintContext ------------------------------------------------------------------

NyarParser::HintContext::HintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::HintContext::HINT_INDICATOR() {
  return getToken(NyarParser::HINT_INDICATOR, 0);
}

tree::TerminalNode* NyarParser::HintContext::ID() {
  return getToken(NyarParser::ID, 0);
}


size_t NyarParser::HintContext::getRuleIndex() const {
  return NyarParser::RuleHint;
}


std::any NyarParser::HintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitHint(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::HintContext* NyarParser::hint() {
  HintContext *_localctx = _tracker.createInstance<HintContext>(_ctx, getState());
  enterRule(_localctx, 8, NyarParser::RuleHint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(NyarParser::HINT_INDICATOR);
    setState(103);
    match(NyarParser::ID);
   
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

tree::TerminalNode* NyarParser::ArrayContext::RBRACKET() {
  return getToken(NyarParser::RBRACKET, 0);
}

std::vector<NyarParser::ExprContext *> NyarParser::ArrayContext::expr() {
  return getRuleContexts<NyarParser::ExprContext>();
}

NyarParser::ExprContext* NyarParser::ArrayContext::expr(size_t i) {
  return getRuleContext<NyarParser::ExprContext>(i);
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
  enterRule(_localctx, 10, NyarParser::RuleArray);
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
    setState(105);
    match(NyarParser::LBRACKET);
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3711153799170) != 0)) {
      setState(106);
      expr(0);
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NyarParser::COMMA) {
        setState(107);
        match(NyarParser::COMMA);
        setState(108);
        expr(0);
        setState(113);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(116);
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

NyarParser::HintContext* NyarParser::VariableContext::hint() {
  return getRuleContext<NyarParser::HintContext>(0);
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
  enterRule(_localctx, 12, NyarParser::RuleVariable);
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
    match(NyarParser::ID);
    setState(120);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::HINT_INDICATOR) {
      setState(119);
      antlrcpp::downCast<VariableContext *>(_localctx)->type_hint = hint();
    }
    setState(122);
    match(NyarParser::EQUAL);
    setState(123);
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
  enterRule(_localctx, 14, NyarParser::RuleFuncParams);
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
    setState(125);
    match(NyarParser::ID);
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NyarParser::COMMA) {
      setState(126);
      match(NyarParser::COMMA);
      setState(127);
      match(NyarParser::ID);
      setState(132);
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

//----------------- FuncBlockContext ------------------------------------------------------------------

NyarParser::FuncBlockContext::FuncBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::FuncBlockContext::START_BLOCK() {
  return getToken(NyarParser::START_BLOCK, 0);
}

tree::TerminalNode* NyarParser::FuncBlockContext::END_BLOCK() {
  return getToken(NyarParser::END_BLOCK, 0);
}

std::vector<NyarParser::StatContext *> NyarParser::FuncBlockContext::stat() {
  return getRuleContexts<NyarParser::StatContext>();
}

NyarParser::StatContext* NyarParser::FuncBlockContext::stat(size_t i) {
  return getRuleContext<NyarParser::StatContext>(i);
}

tree::TerminalNode* NyarParser::FuncBlockContext::RETURN() {
  return getToken(NyarParser::RETURN, 0);
}

NyarParser::ExprContext* NyarParser::FuncBlockContext::expr() {
  return getRuleContext<NyarParser::ExprContext>(0);
}

tree::TerminalNode* NyarParser::FuncBlockContext::SEMI() {
  return getToken(NyarParser::SEMI, 0);
}


size_t NyarParser::FuncBlockContext::getRuleIndex() const {
  return NyarParser::RuleFuncBlock;
}


std::any NyarParser::FuncBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitFuncBlock(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::FuncBlockContext* NyarParser::funcBlock() {
  FuncBlockContext *_localctx = _tracker.createInstance<FuncBlockContext>(_ctx, getState());
  enterRule(_localctx, 16, NyarParser::RuleFuncBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(NyarParser::START_BLOCK);
    setState(137);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(134);
        stat(); 
      }
      setState(139);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::RETURN) {
      setState(140);
      match(NyarParser::RETURN);
      setState(144);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 3711153799170) != 0)) {
        setState(141);
        expr(0);
        setState(142);
        match(NyarParser::SEMI);
      }
    }
    setState(148);
    match(NyarParser::END_BLOCK);
   
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

tree::TerminalNode* NyarParser::FuncDefContext::RPAREN() {
  return getToken(NyarParser::RPAREN, 0);
}

NyarParser::FuncBlockContext* NyarParser::FuncDefContext::funcBlock() {
  return getRuleContext<NyarParser::FuncBlockContext>(0);
}

NyarParser::FuncParamsContext* NyarParser::FuncDefContext::funcParams() {
  return getRuleContext<NyarParser::FuncParamsContext>(0);
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
  enterRule(_localctx, 18, NyarParser::RuleFuncDef);
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
    setState(150);
    match(NyarParser::FUNC);
    setState(151);
    match(NyarParser::ID);
    setState(152);
    match(NyarParser::LAPREN);
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::ID) {
      setState(153);
      funcParams();
    }
    setState(156);
    match(NyarParser::RPAREN);
    setState(157);
    funcBlock();
   
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
  enterRule(_localctx, 20, NyarParser::RuleFuncArgs);
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
    setState(159);
    expr(0);
    setState(164);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NyarParser::COMMA) {
      setState(160);
      match(NyarParser::COMMA);
      setState(161);
      expr(0);
      setState(166);
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
  enterRule(_localctx, 22, NyarParser::RuleFuncCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(NyarParser::ID);
    setState(168);
    match(NyarParser::LAPREN);
    setState(169);
    funcArgs();
    setState(170);
    match(NyarParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

NyarParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::BlockContext::START_BLOCK() {
  return getToken(NyarParser::START_BLOCK, 0);
}

tree::TerminalNode* NyarParser::BlockContext::END_BLOCK() {
  return getToken(NyarParser::END_BLOCK, 0);
}

std::vector<NyarParser::StatContext *> NyarParser::BlockContext::stat() {
  return getRuleContexts<NyarParser::StatContext>();
}

NyarParser::StatContext* NyarParser::BlockContext::stat(size_t i) {
  return getRuleContext<NyarParser::StatContext>(i);
}


size_t NyarParser::BlockContext::getRuleIndex() const {
  return NyarParser::RuleBlock;
}


std::any NyarParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::BlockContext* NyarParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 24, NyarParser::RuleBlock);
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
    setState(172);
    match(NyarParser::START_BLOCK);
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4296879964162) != 0)) {
      setState(173);
      stat();
      setState(178);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(179);
    match(NyarParser::END_BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructContext ------------------------------------------------------------------

NyarParser::StructContext::StructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::StructContext::STRUCTDef() {
  return getToken(NyarParser::STRUCTDef, 0);
}

tree::TerminalNode* NyarParser::StructContext::ID() {
  return getToken(NyarParser::ID, 0);
}

NyarParser::BlockContext* NyarParser::StructContext::block() {
  return getRuleContext<NyarParser::BlockContext>(0);
}


size_t NyarParser::StructContext::getRuleIndex() const {
  return NyarParser::RuleStruct;
}


std::any NyarParser::StructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitStruct(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::StructContext* NyarParser::struct_() {
  StructContext *_localctx = _tracker.createInstance<StructContext>(_ctx, getState());
  enterRule(_localctx, 26, NyarParser::RuleStruct);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(NyarParser::STRUCTDef);
    setState(182);
    match(NyarParser::ID);
    setState(183);
    block();
   
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

NyarParser::BlockContext* NyarParser::IterarContext::block() {
  return getRuleContext<NyarParser::BlockContext>(0);
}

std::vector<tree::TerminalNode *> NyarParser::IterarContext::ID() {
  return getTokens(NyarParser::ID);
}

tree::TerminalNode* NyarParser::IterarContext::ID(size_t i) {
  return getToken(NyarParser::ID, i);
}

std::vector<tree::TerminalNode *> NyarParser::IterarContext::NUM() {
  return getTokens(NyarParser::NUM);
}

tree::TerminalNode* NyarParser::IterarContext::NUM(size_t i) {
  return getToken(NyarParser::NUM, i);
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
  enterRule(_localctx, 28, NyarParser::RuleIterar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(200);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(185);
      match(NyarParser::FOR);
      setState(186);
      antlrcpp::downCast<IterarContext *>(_localctx)->control = match(NyarParser::ID);
      setState(187);
      match(NyarParser::DESDE);
      setState(188);
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
      setState(189);
      match(NyarParser::HASTA);
      setState(190);
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
      setState(191);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(192);
      match(NyarParser::FOR);
      setState(193);
      antlrcpp::downCast<IterarContext *>(_localctx)->control = match(NyarParser::ID);
      setState(194);
      match(NyarParser::EN);
      setState(197);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case NyarParser::ID: {
          setState(195);
          match(NyarParser::ID);
          break;
        }

        case NyarParser::LBRACKET: {
          setState(196);
          array();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(199);
      block();
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

//----------------- ElseContext ------------------------------------------------------------------

NyarParser::ElseContext::ElseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::ElseContext::ELSE_COND() {
  return getToken(NyarParser::ELSE_COND, 0);
}

tree::TerminalNode* NyarParser::ElseContext::START_BLOCK() {
  return getToken(NyarParser::START_BLOCK, 0);
}

tree::TerminalNode* NyarParser::ElseContext::END_BLOCK() {
  return getToken(NyarParser::END_BLOCK, 0);
}

std::vector<NyarParser::StatContext *> NyarParser::ElseContext::stat() {
  return getRuleContexts<NyarParser::StatContext>();
}

NyarParser::StatContext* NyarParser::ElseContext::stat(size_t i) {
  return getRuleContext<NyarParser::StatContext>(i);
}


size_t NyarParser::ElseContext::getRuleIndex() const {
  return NyarParser::RuleElse;
}


std::any NyarParser::ElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitElse(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ElseContext* NyarParser::else_() {
  ElseContext *_localctx = _tracker.createInstance<ElseContext>(_ctx, getState());
  enterRule(_localctx, 30, NyarParser::RuleElse);
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
    setState(202);
    match(NyarParser::ELSE_COND);
    setState(203);
    match(NyarParser::START_BLOCK);
    setState(207);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4296879964162) != 0)) {
      setState(204);
      stat();
      setState(209);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(210);
    match(NyarParser::END_BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseifContext ------------------------------------------------------------------

NyarParser::ElseifContext::ElseifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NyarParser::ElseifContext::ELSE_COND() {
  return getToken(NyarParser::ELSE_COND, 0);
}

tree::TerminalNode* NyarParser::ElseifContext::COND() {
  return getToken(NyarParser::COND, 0);
}

tree::TerminalNode* NyarParser::ElseifContext::START_BLOCK() {
  return getToken(NyarParser::START_BLOCK, 0);
}

tree::TerminalNode* NyarParser::ElseifContext::END_BLOCK() {
  return getToken(NyarParser::END_BLOCK, 0);
}

std::vector<NyarParser::StatContext *> NyarParser::ElseifContext::stat() {
  return getRuleContexts<NyarParser::StatContext>();
}

NyarParser::StatContext* NyarParser::ElseifContext::stat(size_t i) {
  return getRuleContext<NyarParser::StatContext>(i);
}

std::vector<NyarParser::ExprContext *> NyarParser::ElseifContext::expr() {
  return getRuleContexts<NyarParser::ExprContext>();
}

NyarParser::ExprContext* NyarParser::ElseifContext::expr(size_t i) {
  return getRuleContext<NyarParser::ExprContext>(i);
}


size_t NyarParser::ElseifContext::getRuleIndex() const {
  return NyarParser::RuleElseif;
}


std::any NyarParser::ElseifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NyarParserVisitor*>(visitor))
    return parserVisitor->visitElseif(this);
  else
    return visitor->visitChildren(this);
}

NyarParser::ElseifContext* NyarParser::elseif() {
  ElseifContext *_localctx = _tracker.createInstance<ElseifContext>(_ctx, getState());
  enterRule(_localctx, 32, NyarParser::RuleElseif);
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
    setState(212);
    match(NyarParser::ELSE_COND);
    setState(213);
    match(NyarParser::COND);
    setState(217);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3711153799170) != 0)) {
      setState(214);
      antlrcpp::downCast<ElseifContext *>(_localctx)->cond = expr(0);
      setState(219);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(220);
    match(NyarParser::START_BLOCK);
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4296879964162) != 0)) {
      setState(221);
      stat();
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(227);
    match(NyarParser::END_BLOCK);
   
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

tree::TerminalNode* NyarParser::CondicionContext::START_BLOCK() {
  return getToken(NyarParser::START_BLOCK, 0);
}

tree::TerminalNode* NyarParser::CondicionContext::END_BLOCK() {
  return getToken(NyarParser::END_BLOCK, 0);
}

std::vector<NyarParser::StatContext *> NyarParser::CondicionContext::stat() {
  return getRuleContexts<NyarParser::StatContext>();
}

NyarParser::StatContext* NyarParser::CondicionContext::stat(size_t i) {
  return getRuleContext<NyarParser::StatContext>(i);
}

NyarParser::ElseifContext* NyarParser::CondicionContext::elseif() {
  return getRuleContext<NyarParser::ElseifContext>(0);
}

NyarParser::ElseContext* NyarParser::CondicionContext::else_() {
  return getRuleContext<NyarParser::ElseContext>(0);
}

std::vector<NyarParser::ExprContext *> NyarParser::CondicionContext::expr() {
  return getRuleContexts<NyarParser::ExprContext>();
}

NyarParser::ExprContext* NyarParser::CondicionContext::expr(size_t i) {
  return getRuleContext<NyarParser::ExprContext>(i);
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
  enterRule(_localctx, 34, NyarParser::RuleCondicion);
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
    setState(229);
    match(NyarParser::COND);
    setState(233);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3711153799170) != 0)) {
      setState(230);
      antlrcpp::downCast<CondicionContext *>(_localctx)->cond = expr(0);
      setState(235);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(236);
    match(NyarParser::START_BLOCK);
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4296879964162) != 0)) {
      setState(237);
      stat();
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(243);
    match(NyarParser::END_BLOCK);
    setState(245);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(244);
      elseif();
      break;
    }

    default:
      break;
    }
    setState(248);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NyarParser::ELSE_COND) {
      setState(247);
      else_();
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
    case 3: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NyarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 14);
    case 1: return precpred(_ctx, 13);
    case 2: return precpred(_ctx, 12);
    case 3: return precpred(_ctx, 11);
    case 4: return precpred(_ctx, 1);

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
