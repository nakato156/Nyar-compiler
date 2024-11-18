
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
      "program", "stat", "expr", "variable", "for", "if", "else", "struct", 
      "array", "arrayblock", "block", "functionparameters", "functionblock", 
      "functiondefinition", "returnexpression", "functionarguments", "accessObject", 
      "functioncall"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'<'", 
      "'<='", "'>'", "'>='", "'='", "'!='", "'=='", "'&&'", "'||'", "'@_for'", 
      "'@si'", "'@sino'", "'@_end'", "'@declare funcion'", "'@call'", "'@retornar'", 
      "'@estructura'", "'@array'", "'@'", "','", "';'", "':'", "'['", "']'", 
      "", "", "", "", "", "", "'@NNULL'", "", "'.'"
    },
    std::vector<std::string>{
      "", "LPAREN", "RPAREN", "START_BLOCK", "END_BLOCK", "SUM", "SUB", 
      "MUL", "DIV", "LESS", "LESSEQUAL", "GREATER", "GREATEREQUAL", "EQUAL", 
      "NEQ", "EQEQ", "AND", "OR", "RW_FOR", "RW_IF", "RW_IFELSE", "RW_END", 
      "RW_DECLAREFUNCTION", "RW_CALLFUNCTION", "RW_RETURN", "RW_STRUCTURE", 
      "RW_ARRAY", "RESERVEDWORDS", "COMMA", "SEMICOLON", "COLON", "LBRACKET", 
      "RBRACKET", "LINE_COMMENT", "STRING", "COMMENT", "ID", "NUMBER", "BOOL", 
      "NULL", "WS", "DOT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,41,207,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,5,0,38,8,0,10,0,12,0,41,9,0,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,52,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,3,2,66,8,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,74,8,2,10,
  	2,12,2,77,9,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,3,3,95,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,5,
  	5,109,8,5,10,5,12,5,112,9,5,1,5,1,5,3,5,116,8,5,1,6,1,6,1,6,1,7,1,7,1,
  	7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,5,9,133,8,9,10,9,12,9,136,9,9,3,
  	9,138,8,9,1,9,1,9,1,10,1,10,5,10,144,8,10,10,10,12,10,147,9,10,1,10,1,
  	10,1,11,1,11,1,11,5,11,154,8,11,10,11,12,11,157,9,11,1,12,1,12,5,12,161,
  	8,12,10,12,12,12,164,9,12,1,12,1,12,1,13,1,13,1,13,1,13,3,13,172,8,13,
  	1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,5,15,185,8,15,
  	10,15,12,15,188,9,15,1,16,1,16,1,16,5,16,193,8,16,10,16,12,16,196,9,16,
  	1,17,1,17,1,17,1,17,1,17,3,17,203,8,17,1,17,1,17,1,17,0,1,4,18,0,2,4,
  	6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,0,3,1,0,5,8,2,0,9,12,14,17,
  	1,0,36,37,216,0,39,1,0,0,0,2,51,1,0,0,0,4,65,1,0,0,0,6,94,1,0,0,0,8,96,
  	1,0,0,0,10,105,1,0,0,0,12,117,1,0,0,0,14,120,1,0,0,0,16,125,1,0,0,0,18,
  	128,1,0,0,0,20,141,1,0,0,0,22,150,1,0,0,0,24,158,1,0,0,0,26,167,1,0,0,
  	0,28,176,1,0,0,0,30,181,1,0,0,0,32,189,1,0,0,0,34,197,1,0,0,0,36,38,3,
  	2,1,0,37,36,1,0,0,0,38,41,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,42,1,
  	0,0,0,41,39,1,0,0,0,42,43,5,0,0,1,43,1,1,0,0,0,44,52,3,6,3,0,45,52,3,
  	8,4,0,46,52,3,26,13,0,47,52,3,4,2,0,48,52,3,10,5,0,49,52,3,14,7,0,50,
  	52,3,28,14,0,51,44,1,0,0,0,51,45,1,0,0,0,51,46,1,0,0,0,51,47,1,0,0,0,
  	51,48,1,0,0,0,51,49,1,0,0,0,51,50,1,0,0,0,52,3,1,0,0,0,53,54,6,2,-1,0,
  	54,66,5,37,0,0,55,66,5,34,0,0,56,66,5,36,0,0,57,66,5,39,0,0,58,59,5,1,
  	0,0,59,60,3,4,2,0,60,61,5,2,0,0,61,66,1,0,0,0,62,66,3,32,16,0,63,66,3,
  	16,8,0,64,66,3,34,17,0,65,53,1,0,0,0,65,55,1,0,0,0,65,56,1,0,0,0,65,57,
  	1,0,0,0,65,58,1,0,0,0,65,62,1,0,0,0,65,63,1,0,0,0,65,64,1,0,0,0,66,75,
  	1,0,0,0,67,68,10,2,0,0,68,69,7,0,0,0,69,74,3,4,2,3,70,71,10,1,0,0,71,
  	72,7,1,0,0,72,74,3,4,2,2,73,67,1,0,0,0,73,70,1,0,0,0,74,77,1,0,0,0,75,
  	73,1,0,0,0,75,76,1,0,0,0,76,5,1,0,0,0,77,75,1,0,0,0,78,79,5,36,0,0,79,
  	80,5,30,0,0,80,81,5,36,0,0,81,82,5,29,0,0,82,83,3,4,2,0,83,84,5,29,0,
  	0,84,85,3,4,2,0,85,86,5,29,0,0,86,95,1,0,0,0,87,88,5,36,0,0,88,89,5,29,
  	0,0,89,90,3,4,2,0,90,91,5,29,0,0,91,92,3,4,2,0,92,93,5,29,0,0,93,95,1,
  	0,0,0,94,78,1,0,0,0,94,87,1,0,0,0,95,7,1,0,0,0,96,97,5,18,0,0,97,98,5,
  	29,0,0,98,99,5,36,0,0,99,100,5,29,0,0,100,101,7,2,0,0,101,102,5,29,0,
  	0,102,103,7,2,0,0,103,104,3,20,10,0,104,9,1,0,0,0,105,106,5,19,0,0,106,
  	110,5,29,0,0,107,109,3,4,2,0,108,107,1,0,0,0,109,112,1,0,0,0,110,108,
  	1,0,0,0,110,111,1,0,0,0,111,113,1,0,0,0,112,110,1,0,0,0,113,115,3,20,
  	10,0,114,116,3,12,6,0,115,114,1,0,0,0,115,116,1,0,0,0,116,11,1,0,0,0,
  	117,118,5,20,0,0,118,119,3,20,10,0,119,13,1,0,0,0,120,121,5,25,0,0,121,
  	122,5,29,0,0,122,123,5,36,0,0,123,124,3,24,12,0,124,15,1,0,0,0,125,126,
  	5,26,0,0,126,127,3,18,9,0,127,17,1,0,0,0,128,137,5,3,0,0,129,134,3,4,
  	2,0,130,131,5,29,0,0,131,133,3,4,2,0,132,130,1,0,0,0,133,136,1,0,0,0,
  	134,132,1,0,0,0,134,135,1,0,0,0,135,138,1,0,0,0,136,134,1,0,0,0,137,129,
  	1,0,0,0,137,138,1,0,0,0,138,139,1,0,0,0,139,140,5,4,0,0,140,19,1,0,0,
  	0,141,145,5,30,0,0,142,144,3,2,1,0,143,142,1,0,0,0,144,147,1,0,0,0,145,
  	143,1,0,0,0,145,146,1,0,0,0,146,148,1,0,0,0,147,145,1,0,0,0,148,149,5,
  	21,0,0,149,21,1,0,0,0,150,155,5,36,0,0,151,152,5,28,0,0,152,154,5,36,
  	0,0,153,151,1,0,0,0,154,157,1,0,0,0,155,153,1,0,0,0,155,156,1,0,0,0,156,
  	23,1,0,0,0,157,155,1,0,0,0,158,162,5,3,0,0,159,161,3,2,1,0,160,159,1,
  	0,0,0,161,164,1,0,0,0,162,160,1,0,0,0,162,163,1,0,0,0,163,165,1,0,0,0,
  	164,162,1,0,0,0,165,166,5,4,0,0,166,25,1,0,0,0,167,168,5,22,0,0,168,169,
  	5,36,0,0,169,171,5,1,0,0,170,172,3,22,11,0,171,170,1,0,0,0,171,172,1,
  	0,0,0,172,173,1,0,0,0,173,174,5,2,0,0,174,175,3,24,12,0,175,27,1,0,0,
  	0,176,177,5,24,0,0,177,178,5,29,0,0,178,179,3,4,2,0,179,180,5,29,0,0,
  	180,29,1,0,0,0,181,186,3,4,2,0,182,183,5,28,0,0,183,185,3,4,2,0,184,182,
  	1,0,0,0,185,188,1,0,0,0,186,184,1,0,0,0,186,187,1,0,0,0,187,31,1,0,0,
  	0,188,186,1,0,0,0,189,194,5,36,0,0,190,191,5,41,0,0,191,193,5,36,0,0,
  	192,190,1,0,0,0,193,196,1,0,0,0,194,192,1,0,0,0,194,195,1,0,0,0,195,33,
  	1,0,0,0,196,194,1,0,0,0,197,198,5,23,0,0,198,199,5,29,0,0,199,200,5,36,
  	0,0,200,202,5,1,0,0,201,203,3,30,15,0,202,201,1,0,0,0,202,203,1,0,0,0,
  	203,204,1,0,0,0,204,205,5,2,0,0,205,35,1,0,0,0,17,39,51,65,73,75,94,110,
  	115,134,137,145,155,162,171,186,194,202
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
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 773224923138) != 0)) {
      setState(36);
      stat();
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(42);
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

VMParser::ForContext* VMParser::StatContext::for_() {
  return getRuleContext<VMParser::ForContext>(0);
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
    setState(51);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(44);
      variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(45);
      for_();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(46);
      functiondefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(47);
      expr(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(48);
      if_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(49);
      struct_();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(50);
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
//----------------- LogicExpContext ------------------------------------------------------------------

std::vector<VMParser::ExprContext *> VMParser::LogicExpContext::expr() {
  return getRuleContexts<VMParser::ExprContext>();
}

VMParser::ExprContext* VMParser::LogicExpContext::expr(size_t i) {
  return getRuleContext<VMParser::ExprContext>(i);
}

tree::TerminalNode* VMParser::LogicExpContext::LESS() {
  return getToken(VMParser::LESS, 0);
}

tree::TerminalNode* VMParser::LogicExpContext::LESSEQUAL() {
  return getToken(VMParser::LESSEQUAL, 0);
}

tree::TerminalNode* VMParser::LogicExpContext::GREATER() {
  return getToken(VMParser::GREATER, 0);
}

tree::TerminalNode* VMParser::LogicExpContext::GREATEREQUAL() {
  return getToken(VMParser::GREATEREQUAL, 0);
}

tree::TerminalNode* VMParser::LogicExpContext::EQEQ() {
  return getToken(VMParser::EQEQ, 0);
}

tree::TerminalNode* VMParser::LogicExpContext::NEQ() {
  return getToken(VMParser::NEQ, 0);
}

tree::TerminalNode* VMParser::LogicExpContext::AND() {
  return getToken(VMParser::AND, 0);
}

tree::TerminalNode* VMParser::LogicExpContext::OR() {
  return getToken(VMParser::OR, 0);
}

VMParser::LogicExpContext::LogicExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::LogicExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitLogicExp(this);
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
//----------------- AccessObjectExpContext ------------------------------------------------------------------

VMParser::AccessObjectContext* VMParser::AccessObjectExpContext::accessObject() {
  return getRuleContext<VMParser::AccessObjectContext>(0);
}

VMParser::AccessObjectExpContext::AccessObjectExpContext(ExprContext *ctx) { copyFrom(ctx); }


std::any VMParser::AccessObjectExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitAccessObjectExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExpContext ------------------------------------------------------------------

tree::TerminalNode* VMParser::ParenExpContext::LPAREN() {
  return getToken(VMParser::LPAREN, 0);
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
    setState(65);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NumberExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(54);
      match(VMParser::NUMBER);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StringExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(55);
      match(VMParser::STRING);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IdExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(56);
      match(VMParser::ID);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NullExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(57);
      match(VMParser::NULL_);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ParenExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(58);
      match(VMParser::LPAREN);
      setState(59);
      expr(0);
      setState(60);
      match(VMParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<AccessObjectExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(62);
      accessObject();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ArrayExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(63);
      array();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<FunctionCallExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(64);
      functioncall();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(75);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(73);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MathExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(67);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(68);
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
          setState(69);
          expr(3);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LogicExpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(70);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(71);
          antlrcpp::downCast<LogicExpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 253440) != 0))) {
            antlrcpp::downCast<LogicExpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(72);
          expr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(77);
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
    setState(94);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      match(VMParser::ID);
      setState(79);
      match(VMParser::COLON);
      setState(80);
      antlrcpp::downCast<VariableContext *>(_localctx)->hint = match(VMParser::ID);
      setState(81);
      match(VMParser::SEMICOLON);
      setState(82);
      expr(0);
      setState(83);
      match(VMParser::SEMICOLON);
      setState(84);
      antlrcpp::downCast<VariableContext *>(_localctx)->ref = expr(0);
      setState(85);
      match(VMParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(87);
      match(VMParser::ID);
      setState(88);
      match(VMParser::SEMICOLON);
      setState(89);
      expr(0);
      setState(90);
      match(VMParser::SEMICOLON);
      setState(91);
      antlrcpp::downCast<VariableContext *>(_localctx)->ref = expr(0);
      setState(92);
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

//----------------- ForContext ------------------------------------------------------------------

VMParser::ForContext::ForContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::ForContext::RW_FOR() {
  return getToken(VMParser::RW_FOR, 0);
}

std::vector<tree::TerminalNode *> VMParser::ForContext::SEMICOLON() {
  return getTokens(VMParser::SEMICOLON);
}

tree::TerminalNode* VMParser::ForContext::SEMICOLON(size_t i) {
  return getToken(VMParser::SEMICOLON, i);
}

VMParser::BlockContext* VMParser::ForContext::block() {
  return getRuleContext<VMParser::BlockContext>(0);
}

std::vector<tree::TerminalNode *> VMParser::ForContext::ID() {
  return getTokens(VMParser::ID);
}

tree::TerminalNode* VMParser::ForContext::ID(size_t i) {
  return getToken(VMParser::ID, i);
}

std::vector<tree::TerminalNode *> VMParser::ForContext::NUMBER() {
  return getTokens(VMParser::NUMBER);
}

tree::TerminalNode* VMParser::ForContext::NUMBER(size_t i) {
  return getToken(VMParser::NUMBER, i);
}


size_t VMParser::ForContext::getRuleIndex() const {
  return VMParser::RuleFor;
}


std::any VMParser::ForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitFor(this);
  else
    return visitor->visitChildren(this);
}

VMParser::ForContext* VMParser::for_() {
  ForContext *_localctx = _tracker.createInstance<ForContext>(_ctx, getState());
  enterRule(_localctx, 8, VMParser::RuleFor);
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
    match(VMParser::RW_FOR);
    setState(97);
    match(VMParser::SEMICOLON);
    setState(98);
    antlrcpp::downCast<ForContext *>(_localctx)->CONTROL = match(VMParser::ID);
    setState(99);
    match(VMParser::SEMICOLON);
    setState(100);
    antlrcpp::downCast<ForContext *>(_localctx)->FROM = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == VMParser::ID

    || _la == VMParser::NUMBER)) {
      antlrcpp::downCast<ForContext *>(_localctx)->FROM = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(101);
    match(VMParser::SEMICOLON);
    setState(102);
    antlrcpp::downCast<ForContext *>(_localctx)->TO = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == VMParser::ID

    || _la == VMParser::NUMBER)) {
      antlrcpp::downCast<ForContext *>(_localctx)->TO = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(103);
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

VMParser::ElseContext* VMParser::IfContext::else_() {
  return getRuleContext<VMParser::ElseContext>(0);
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
    setState(105);
    match(VMParser::RW_IF);
    setState(106);
    match(VMParser::SEMICOLON);
    setState(110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 773169610754) != 0)) {
      setState(107);
      antlrcpp::downCast<IfContext *>(_localctx)->cond = expr(0);
      setState(112);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(113);
    block();
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VMParser::RW_IFELSE) {
      setState(114);
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

//----------------- ElseContext ------------------------------------------------------------------

VMParser::ElseContext::ElseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* VMParser::ElseContext::RW_IFELSE() {
  return getToken(VMParser::RW_IFELSE, 0);
}

VMParser::BlockContext* VMParser::ElseContext::block() {
  return getRuleContext<VMParser::BlockContext>(0);
}


size_t VMParser::ElseContext::getRuleIndex() const {
  return VMParser::RuleElse;
}


std::any VMParser::ElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitElse(this);
  else
    return visitor->visitChildren(this);
}

VMParser::ElseContext* VMParser::else_() {
  ElseContext *_localctx = _tracker.createInstance<ElseContext>(_ctx, getState());
  enterRule(_localctx, 12, VMParser::RuleElse);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(VMParser::RW_IFELSE);
    setState(118);
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
  enterRule(_localctx, 14, VMParser::RuleStruct);

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
    match(VMParser::RW_STRUCTURE);
    setState(121);
    match(VMParser::SEMICOLON);
    setState(122);
    match(VMParser::ID);
    setState(123);
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
  enterRule(_localctx, 16, VMParser::RuleArray);

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
    match(VMParser::RW_ARRAY);
    setState(126);
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
  enterRule(_localctx, 18, VMParser::RuleArrayblock);
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
    setState(128);
    match(VMParser::START_BLOCK);
    setState(137);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 773169610754) != 0)) {
      setState(129);
      expr(0);
      setState(134);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == VMParser::SEMICOLON) {
        setState(130);
        match(VMParser::SEMICOLON);
        setState(131);
        expr(0);
        setState(136);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(139);
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
  enterRule(_localctx, 20, VMParser::RuleBlock);
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
    setState(141);
    match(VMParser::COLON);
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 773224923138) != 0)) {
      setState(142);
      stat();
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(148);
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
  enterRule(_localctx, 22, VMParser::RuleFunctionparameters);
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
    match(VMParser::ID);
    setState(155);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == VMParser::COMMA) {
      setState(151);
      match(VMParser::COMMA);
      setState(152);
      match(VMParser::ID);
      setState(157);
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
  enterRule(_localctx, 24, VMParser::RuleFunctionblock);
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
    setState(158);
    match(VMParser::START_BLOCK);
    setState(162);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 773224923138) != 0)) {
      setState(159);
      stat();
      setState(164);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(165);
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
  enterRule(_localctx, 26, VMParser::RuleFunctiondefinition);
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
    setState(167);
    match(VMParser::RW_DECLAREFUNCTION);
    setState(168);
    match(VMParser::ID);
    setState(169);
    match(VMParser::LPAREN);
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == VMParser::ID) {
      setState(170);
      functionparameters();
    }
    setState(173);
    match(VMParser::RPAREN);
    setState(174);
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
  enterRule(_localctx, 28, VMParser::RuleReturnexpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(VMParser::RW_RETURN);
    setState(177);
    match(VMParser::SEMICOLON);
    setState(178);
    expr(0);
    setState(179);
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
  enterRule(_localctx, 30, VMParser::RuleFunctionarguments);
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
    setState(181);
    expr(0);
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == VMParser::COMMA) {
      setState(182);
      match(VMParser::COMMA);
      setState(183);
      expr(0);
      setState(188);
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

//----------------- AccessObjectContext ------------------------------------------------------------------

VMParser::AccessObjectContext::AccessObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> VMParser::AccessObjectContext::ID() {
  return getTokens(VMParser::ID);
}

tree::TerminalNode* VMParser::AccessObjectContext::ID(size_t i) {
  return getToken(VMParser::ID, i);
}

std::vector<tree::TerminalNode *> VMParser::AccessObjectContext::DOT() {
  return getTokens(VMParser::DOT);
}

tree::TerminalNode* VMParser::AccessObjectContext::DOT(size_t i) {
  return getToken(VMParser::DOT, i);
}


size_t VMParser::AccessObjectContext::getRuleIndex() const {
  return VMParser::RuleAccessObject;
}


std::any VMParser::AccessObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<VMParserVisitor*>(visitor))
    return parserVisitor->visitAccessObject(this);
  else
    return visitor->visitChildren(this);
}

VMParser::AccessObjectContext* VMParser::accessObject() {
  AccessObjectContext *_localctx = _tracker.createInstance<AccessObjectContext>(_ctx, getState());
  enterRule(_localctx, 32, VMParser::RuleAccessObject);

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
    setState(189);
    match(VMParser::ID);
    setState(194);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(190);
        match(VMParser::DOT);
        setState(191);
        match(VMParser::ID); 
      }
      setState(196);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
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

tree::TerminalNode* VMParser::FunctioncallContext::RPAREN() {
  return getToken(VMParser::RPAREN, 0);
}

VMParser::FunctionargumentsContext* VMParser::FunctioncallContext::functionarguments() {
  return getRuleContext<VMParser::FunctionargumentsContext>(0);
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
  enterRule(_localctx, 34, VMParser::RuleFunctioncall);
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
    setState(197);
    match(VMParser::RW_CALLFUNCTION);
    setState(198);
    match(VMParser::SEMICOLON);
    setState(199);
    match(VMParser::ID);
    setState(200);
    match(VMParser::LPAREN);
    setState(202);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 773169610754) != 0)) {
      setState(201);
      functionarguments();
    }
    setState(204);
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
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

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
