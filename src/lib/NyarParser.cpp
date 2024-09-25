
// Generated from NyarParser.g4 by ANTLR 4.9.2


#include "NyarParserVisitor.h"

#include "NyarParser.h"


using namespace antlrcpp;
using namespace antlr4;

NyarParser::NyarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

NyarParser::~NyarParser() {
  delete _interpreter;
}

std::string NyarParser::getGrammarFileName() const {
  return "NyarParser.g4";
}

const std::vector<std::string>& NyarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& NyarParser::getVocabulary() const {
  return _vocabulary;
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

antlrcpp::Any NyarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
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
      ((1ULL << _la) & ((1ULL << NyarParser::LAPREN)
      | (1ULL << NyarParser::LBRACKET)
      | (1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::FUNC)
      | (1ULL << NyarParser::FOR)
      | (1ULL << NyarParser::DESDE)
      | (1ULL << NyarParser::EN)
      | (1ULL << NyarParser::COND)
      | (1ULL << NyarParser::ID)
      | (1ULL << NyarParser::NUM)
      | (1ULL << NyarParser::BOOL))) != 0)) {
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

antlrcpp::Any NyarParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::EqExpContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::BooleanContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::AritExpContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::ParenExpContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::FCallContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::ArregloContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::EqEqExpContext::accept(tree::ParseTreeVisitor *visitor) {
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
          dynamic_cast<AritExpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << NyarParser::ADD)
            | (1ULL << NyarParser::RESTA)
            | (1ULL << NyarParser::MUL)
            | (1ULL << NyarParser::DIV))) != 0))) {
            dynamic_cast<AritExpContext *>(_localctx)->op = _errHandler->recoverInline(this);
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
          dynamic_cast<EqEqExpContext *>(_localctx)->op = match(NyarParser::EQUAL);
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
          dynamic_cast<EqExpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == NyarParser::LESS

          || _la == NyarParser::GREATER)) {
            dynamic_cast<EqExpContext *>(_localctx)->op = _errHandler->recoverInline(this);
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

antlrcpp::Any NyarParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::FuncParamsContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
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
      ((1ULL << _la) & ((1ULL << NyarParser::LAPREN)
      | (1ULL << NyarParser::LBRACKET)
      | (1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::FUNC)
      | (1ULL << NyarParser::FOR)
      | (1ULL << NyarParser::DESDE)
      | (1ULL << NyarParser::EN)
      | (1ULL << NyarParser::COND)
      | (1ULL << NyarParser::ID)
      | (1ULL << NyarParser::NUM)
      | (1ULL << NyarParser::BOOL))) != 0)) {
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

antlrcpp::Any NyarParser::FuncArgsContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
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

antlrcpp::Any NyarParser::IterarContext::accept(tree::ParseTreeVisitor *visitor) {
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
        dynamic_cast<IterarContext *>(_localctx)->i = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == NyarParser::ID

        || _la == NyarParser::NUM)) {
          dynamic_cast<IterarContext *>(_localctx)->i = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(130);
        match(NyarParser::HASTA);
        setState(131);
        dynamic_cast<IterarContext *>(_localctx)->f = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == NyarParser::ID

        || _la == NyarParser::NUM)) {
          dynamic_cast<IterarContext *>(_localctx)->f = _errHandler->recoverInline(this);
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

antlrcpp::Any NyarParser::CondicionContext::accept(tree::ParseTreeVisitor *visitor) {
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
      ((1ULL << _la) & ((1ULL << NyarParser::LAPREN)
      | (1ULL << NyarParser::LBRACKET)
      | (1ULL << NyarParser::STRING)
      | (1ULL << NyarParser::FUNC)
      | (1ULL << NyarParser::FOR)
      | (1ULL << NyarParser::DESDE)
      | (1ULL << NyarParser::EN)
      | (1ULL << NyarParser::COND)
      | (1ULL << NyarParser::ID)
      | (1ULL << NyarParser::NUM)
      | (1ULL << NyarParser::BOOL))) != 0)) {
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
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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

// Static vars and initialization.
std::vector<dfa::DFA> NyarParser::_decisionToDFA;
atn::PredictionContextCache NyarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN NyarParser::_atn;
std::vector<uint16_t> NyarParser::_serializedATN;

std::vector<std::string> NyarParser::_ruleNames = {
  "program", "stat", "expr", "array", "variable", "funcParams", "funcDef", 
  "funcArgs", "funcCall", "iterar", "condicion"
};

std::vector<std::string> NyarParser::_literalNames = {
  "", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'='", "','", 
  "';'", "'['", "']'", "", "'{'", "'}'", "", "", "'importar'", "'funcion'", 
  "'iterar'", "'mientras'", "'desde'", "'hasta'", "'en'", "", "", "", "", 
  "'NADA'", "'retornar'"
};

std::vector<std::string> NyarParser::_symbolicNames = {
  "", "LAPREN", "RPAREN", "ADD", "RESTA", "MUL", "DIV", "LESS", "GREATER", 
  "EQUAL", "COMMA", "SEMI", "LBRACKET", "RBRACKET", "LINE_COMMENT", "START_BLOCK", 
  "END_BLOCK", "STRING", "COMMENT", "IMPORT", "FUNC", "FOR", "WHILE", "DESDE", 
  "HASTA", "EN", "COND", "ID", "NUM", "BOOL", "NADA", "RETURN", "WS"
};

dfa::Vocabulary NyarParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> NyarParser::_tokenNames;

NyarParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x22, 0x97, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x7, 0x2, 0x1a, 
       0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x1d, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x31, 0xa, 0x3, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3e, 0xa, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x4b, 0xa, 0x4, 
       0xc, 0x4, 0xe, 0x4, 0x4e, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x7, 0x5, 0x54, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x57, 0xb, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x62, 0xa, 0x7, 0xc, 0x7, 
       0xe, 0x7, 0x65, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x6e, 0xa, 0x8, 0xc, 0x8, 
       0xe, 0x8, 0x71, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x7, 0x9, 0x78, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x7b, 0xb, 
       0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
       0xb, 0x5, 0xb, 0x8a, 0xa, 0xb, 0x5, 0xb, 0x8c, 0xa, 0xb, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x92, 0xa, 0xc, 0xc, 0xc, 
       0xe, 0xc, 0x95, 0xb, 0xc, 0x3, 0xc, 0x2, 0x3, 0x6, 0xd, 0x2, 0x4, 
       0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x2, 0x5, 0x3, 0x2, 
       0x5, 0x8, 0x3, 0x2, 0x9, 0xa, 0x3, 0x2, 0x1d, 0x1e, 0x2, 0xa2, 0x2, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0x4, 0x30, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3d, 
       0x3, 0x2, 0x2, 0x2, 0x8, 0x4f, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5a, 0x3, 
       0x2, 0x2, 0x2, 0xc, 0x5e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x66, 0x3, 0x2, 
       0x2, 0x2, 0x10, 0x74, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7c, 0x3, 0x2, 0x2, 
       0x2, 0x14, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8d, 0x3, 0x2, 0x2, 0x2, 
       0x18, 0x1a, 0x5, 0x4, 0x3, 0x2, 0x19, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 
       0x1d, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 
       0x3, 0x2, 0x2, 0x2, 0x1c, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 
       0x2, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x2, 0x2, 0x3, 0x1f, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x20, 0x21, 0x5, 0xa, 0x6, 0x2, 0x21, 0x22, 0x7, 0xd, 0x2, 
       0x2, 0x22, 0x31, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x5, 0x6, 0x4, 0x2, 
       0x24, 0x25, 0x7, 0xd, 0x2, 0x2, 0x25, 0x31, 0x3, 0x2, 0x2, 0x2, 0x26, 
       0x31, 0x5, 0xe, 0x8, 0x2, 0x27, 0x28, 0x5, 0x14, 0xb, 0x2, 0x28, 
       0x29, 0x7, 0x12, 0x2, 0x2, 0x29, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2a, 
       0x2b, 0x5, 0x16, 0xc, 0x2, 0x2b, 0x2c, 0x7, 0x12, 0x2, 0x2, 0x2c, 
       0x31, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x5, 0x8, 0x5, 0x2, 0x2e, 0x2f, 
       0x7, 0xd, 0x2, 0x2, 0x2f, 0x31, 0x3, 0x2, 0x2, 0x2, 0x30, 0x20, 0x3, 
       0x2, 0x2, 0x2, 0x30, 0x23, 0x3, 0x2, 0x2, 0x2, 0x30, 0x26, 0x3, 0x2, 
       0x2, 0x2, 0x30, 0x27, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2a, 0x3, 0x2, 0x2, 
       0x2, 0x30, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x31, 0x5, 0x3, 0x2, 0x2, 0x2, 
       0x32, 0x33, 0x8, 0x4, 0x1, 0x2, 0x33, 0x3e, 0x7, 0x1e, 0x2, 0x2, 
       0x34, 0x3e, 0x7, 0x1f, 0x2, 0x2, 0x35, 0x3e, 0x7, 0x13, 0x2, 0x2, 
       0x36, 0x3e, 0x7, 0x1d, 0x2, 0x2, 0x37, 0x38, 0x7, 0x3, 0x2, 0x2, 
       0x38, 0x39, 0x5, 0x6, 0x4, 0x2, 0x39, 0x3a, 0x7, 0x4, 0x2, 0x2, 0x3a, 
       0x3e, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3e, 0x5, 0x12, 0xa, 0x2, 0x3c, 
       0x3e, 0x5, 0x8, 0x5, 0x2, 0x3d, 0x32, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x34, 
       0x3, 0x2, 0x2, 0x2, 0x3d, 0x35, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x36, 0x3, 
       0x2, 0x2, 0x2, 0x3d, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 
       0x2, 0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x4c, 0x3, 0x2, 0x2, 
       0x2, 0x3f, 0x40, 0xc, 0x7, 0x2, 0x2, 0x40, 0x41, 0x9, 0x2, 0x2, 0x2, 
       0x41, 0x4b, 0x5, 0x6, 0x4, 0x8, 0x42, 0x43, 0xc, 0x6, 0x2, 0x2, 0x43, 
       0x44, 0x7, 0xb, 0x2, 0x2, 0x44, 0x45, 0x7, 0xb, 0x2, 0x2, 0x45, 0x4b, 
       0x5, 0x6, 0x4, 0x7, 0x46, 0x47, 0xc, 0x5, 0x2, 0x2, 0x47, 0x48, 0x9, 
       0x3, 0x2, 0x2, 0x48, 0x49, 0x7, 0xb, 0x2, 0x2, 0x49, 0x4b, 0x5, 0x6, 
       0x4, 0x6, 0x4a, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x42, 0x3, 0x2, 0x2, 
       0x2, 0x4a, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4e, 0x3, 0x2, 0x2, 0x2, 
       0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 
       0x7, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 
       0x7, 0xe, 0x2, 0x2, 0x50, 0x55, 0x5, 0x6, 0x4, 0x2, 0x51, 0x52, 0x7, 
       0xc, 0x2, 0x2, 0x52, 0x54, 0x5, 0x6, 0x4, 0x2, 0x53, 0x51, 0x3, 0x2, 
       0x2, 0x2, 0x54, 0x57, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 
       0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 0x56, 0x58, 0x3, 0x2, 0x2, 0x2, 
       0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0xf, 0x2, 0x2, 0x59, 
       0x9, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x1d, 0x2, 0x2, 0x5b, 0x5c, 
       0x7, 0xb, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0x6, 0x4, 0x2, 0x5d, 0xb, 0x3, 
       0x2, 0x2, 0x2, 0x5e, 0x63, 0x7, 0x1d, 0x2, 0x2, 0x5f, 0x60, 0x7, 
       0xc, 0x2, 0x2, 0x60, 0x62, 0x7, 0x1d, 0x2, 0x2, 0x61, 0x5f, 0x3, 
       0x2, 0x2, 0x2, 0x62, 0x65, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 
       0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0xd, 0x3, 0x2, 0x2, 
       0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x7, 0x16, 0x2, 
       0x2, 0x67, 0x68, 0x7, 0x1d, 0x2, 0x2, 0x68, 0x69, 0x7, 0x3, 0x2, 
       0x2, 0x69, 0x6a, 0x5, 0xc, 0x7, 0x2, 0x6a, 0x6b, 0x7, 0x4, 0x2, 0x2, 
       0x6b, 0x6f, 0x7, 0x11, 0x2, 0x2, 0x6c, 0x6e, 0x5, 0x4, 0x3, 0x2, 
       0x6d, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6f, 
       0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x72, 
       0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 
       0x12, 0x2, 0x2, 0x73, 0xf, 0x3, 0x2, 0x2, 0x2, 0x74, 0x79, 0x5, 0x6, 
       0x4, 0x2, 0x75, 0x76, 0x7, 0xc, 0x2, 0x2, 0x76, 0x78, 0x5, 0x6, 0x4, 
       0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7b, 0x3, 0x2, 0x2, 0x2, 
       0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 
       0x7, 0x1d, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x3, 0x2, 0x2, 0x7e, 0x7f, 
       0x5, 0x10, 0x9, 0x2, 0x7f, 0x80, 0x7, 0x4, 0x2, 0x2, 0x80, 0x13, 
       0x3, 0x2, 0x2, 0x2, 0x81, 0x8c, 0x7, 0x17, 0x2, 0x2, 0x82, 0x83, 
       0x7, 0x19, 0x2, 0x2, 0x83, 0x84, 0x9, 0x4, 0x2, 0x2, 0x84, 0x85, 
       0x7, 0x1a, 0x2, 0x2, 0x85, 0x8c, 0x9, 0x4, 0x2, 0x2, 0x86, 0x89, 
       0x7, 0x1b, 0x2, 0x2, 0x87, 0x8a, 0x7, 0x1d, 0x2, 0x2, 0x88, 0x8a, 
       0x5, 0x8, 0x5, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x88, 0x3, 
       0x2, 0x2, 0x2, 0x8a, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x81, 0x3, 0x2, 
       0x2, 0x2, 0x8b, 0x82, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x86, 0x3, 0x2, 0x2, 
       0x2, 0x8c, 0x15, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x1c, 0x2, 
       0x2, 0x8e, 0x8f, 0x5, 0x6, 0x4, 0x2, 0x8f, 0x93, 0x7, 0x11, 0x2, 
       0x2, 0x90, 0x92, 0x5, 0x4, 0x3, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 0x2, 
       0x92, 0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 
       0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x17, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 
       0x3, 0x2, 0x2, 0x2, 0xe, 0x1b, 0x30, 0x3d, 0x4a, 0x4c, 0x55, 0x63, 
       0x6f, 0x79, 0x89, 0x8b, 0x93, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

NyarParser::Initializer NyarParser::_init;
