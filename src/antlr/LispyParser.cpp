
// Generated from Lispy.g4 by ANTLR 4.9.2


#include "LispyListener.h"
#include "LispyVisitor.h"

#include "LispyParser.h"


using namespace antlrcpp;
using namespace antlr4;

LispyParser::LispyParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

LispyParser::~LispyParser() {
  delete _interpreter;
}

std::string LispyParser::getGrammarFileName() const {
  return "Lispy.g4";
}

const std::vector<std::string>& LispyParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& LispyParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- LispyContext ------------------------------------------------------------------

LispyParser::LispyContext::LispyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LispyParser::OpContext* LispyParser::LispyContext::op() {
  return getRuleContext<LispyParser::OpContext>(0);
}

std::vector<LispyParser::ExprContext *> LispyParser::LispyContext::expr() {
  return getRuleContexts<LispyParser::ExprContext>();
}

LispyParser::ExprContext* LispyParser::LispyContext::expr(size_t i) {
  return getRuleContext<LispyParser::ExprContext>(i);
}


size_t LispyParser::LispyContext::getRuleIndex() const {
  return LispyParser::RuleLispy;
}

void LispyParser::LispyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LispyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLispy(this);
}

void LispyParser::LispyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LispyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLispy(this);
}


antlrcpp::Any LispyParser::LispyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LispyVisitor*>(visitor))
    return parserVisitor->visitLispy(this);
  else
    return visitor->visitChildren(this);
}

LispyParser::LispyContext* LispyParser::lispy() {
  LispyContext *_localctx = _tracker.createInstance<LispyContext>(_ctx, getState());
  enterRule(_localctx, 0, LispyParser::RuleLispy);
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
    setState(6);
    dynamic_cast<LispyContext *>(_localctx)->lispyOp = op();
    setState(8); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(7);
      dynamic_cast<LispyContext *>(_localctx)->lispyExpr = expr();
      setState(10); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LispyParser::LPAREN

    || _la == LispyParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

LispyParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LispyParser::ExprContext::getRuleIndex() const {
  return LispyParser::RuleExpr;
}

void LispyParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NumberExprContext ------------------------------------------------------------------

tree::TerminalNode* LispyParser::NumberExprContext::NUMBER() {
  return getToken(LispyParser::NUMBER, 0);
}

LispyParser::NumberExprContext::NumberExprContext(ExprContext *ctx) { copyFrom(ctx); }

void LispyParser::NumberExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LispyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberExpr(this);
}
void LispyParser::NumberExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LispyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberExpr(this);
}

antlrcpp::Any LispyParser::NumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LispyVisitor*>(visitor))
    return parserVisitor->visitNumberExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

tree::TerminalNode* LispyParser::ParenExprContext::LPAREN() {
  return getToken(LispyParser::LPAREN, 0);
}

tree::TerminalNode* LispyParser::ParenExprContext::RPAREN() {
  return getToken(LispyParser::RPAREN, 0);
}

LispyParser::OpContext* LispyParser::ParenExprContext::op() {
  return getRuleContext<LispyParser::OpContext>(0);
}

std::vector<LispyParser::ExprContext *> LispyParser::ParenExprContext::expr() {
  return getRuleContexts<LispyParser::ExprContext>();
}

LispyParser::ExprContext* LispyParser::ParenExprContext::expr(size_t i) {
  return getRuleContext<LispyParser::ExprContext>(i);
}

LispyParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }

void LispyParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LispyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void LispyParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LispyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

antlrcpp::Any LispyParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LispyVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
LispyParser::ExprContext* LispyParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 2, LispyParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(23);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LispyParser::LPAREN: {
        _localctx = dynamic_cast<ExprContext *>(_tracker.createInstance<LispyParser::ParenExprContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(12);
        match(LispyParser::LPAREN);
        setState(13);
        dynamic_cast<ParenExprContext *>(_localctx)->exprOp = op();
        setState(14);
        dynamic_cast<ParenExprContext *>(_localctx)->exprLeft = expr();
        setState(16); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(15);
          dynamic_cast<ParenExprContext *>(_localctx)->exprRight = expr();
          setState(18); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == LispyParser::LPAREN

        || _la == LispyParser::NUMBER);
        setState(20);
        match(LispyParser::RPAREN);
        break;
      }

      case LispyParser::NUMBER: {
        _localctx = dynamic_cast<ExprContext *>(_tracker.createInstance<LispyParser::NumberExprContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(22);
        match(LispyParser::NUMBER);
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

//----------------- OpContext ------------------------------------------------------------------

LispyParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LispyParser::OpContext::PLUS() {
  return getToken(LispyParser::PLUS, 0);
}

tree::TerminalNode* LispyParser::OpContext::MINUS() {
  return getToken(LispyParser::MINUS, 0);
}

tree::TerminalNode* LispyParser::OpContext::STAR() {
  return getToken(LispyParser::STAR, 0);
}

tree::TerminalNode* LispyParser::OpContext::SLASH() {
  return getToken(LispyParser::SLASH, 0);
}

tree::TerminalNode* LispyParser::OpContext::PERCENT() {
  return getToken(LispyParser::PERCENT, 0);
}


size_t LispyParser::OpContext::getRuleIndex() const {
  return LispyParser::RuleOp;
}

void LispyParser::OpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LispyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp(this);
}

void LispyParser::OpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LispyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp(this);
}


antlrcpp::Any LispyParser::OpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LispyVisitor*>(visitor))
    return parserVisitor->visitOp(this);
  else
    return visitor->visitChildren(this);
}

LispyParser::OpContext* LispyParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 4, LispyParser::RuleOp);
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
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LispyParser::PLUS)
      | (1ULL << LispyParser::MINUS)
      | (1ULL << LispyParser::STAR)
      | (1ULL << LispyParser::SLASH)
      | (1ULL << LispyParser::PERCENT))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> LispyParser::_decisionToDFA;
atn::PredictionContextCache LispyParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN LispyParser::_atn;
std::vector<uint16_t> LispyParser::_serializedATN;

std::vector<std::string> LispyParser::_ruleNames = {
  "lispy", "expr", "op"
};

std::vector<std::string> LispyParser::_literalNames = {
  "", "'('", "')'", "", "'+'", "'-'", "'*'", "'/'", "'%'"
};

std::vector<std::string> LispyParser::_symbolicNames = {
  "", "LPAREN", "RPAREN", "NUMBER", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", 
  "WS"
};

dfa::Vocabulary LispyParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> LispyParser::_tokenNames;

LispyParser::Initializer::Initializer() {
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
       0x3, 0xb, 0x1e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 0xb, 0xa, 0x2, 0xd, 0x2, 
       0xe, 0x2, 0xc, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 
       0x13, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x14, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x5, 0x3, 0x1a, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x2, 
       0x2, 0x5, 0x2, 0x4, 0x6, 0x2, 0x3, 0x3, 0x2, 0x6, 0xa, 0x2, 0x1d, 
       0x2, 0x8, 0x3, 0x2, 0x2, 0x2, 0x4, 0x19, 0x3, 0x2, 0x2, 0x2, 0x6, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0x8, 0xa, 0x5, 0x6, 0x4, 0x2, 0x9, 0xb, 
       0x5, 0x4, 0x3, 0x2, 0xa, 0x9, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0x3, 
       0x2, 0x2, 0x2, 0xc, 0xa, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0xd, 0x3, 0x3, 0x2, 0x2, 0x2, 0xe, 0xf, 0x7, 0x3, 0x2, 
       0x2, 0xf, 0x10, 0x5, 0x6, 0x4, 0x2, 0x10, 0x12, 0x5, 0x4, 0x3, 0x2, 
       0x11, 0x13, 0x5, 0x4, 0x3, 0x2, 0x12, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 
       0x14, 0x3, 0x2, 0x2, 0x2, 0x14, 0x12, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x7, 
       0x4, 0x2, 0x2, 0x17, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1a, 0x7, 0x5, 
       0x2, 0x2, 0x19, 0xe, 0x3, 0x2, 0x2, 0x2, 0x19, 0x18, 0x3, 0x2, 0x2, 
       0x2, 0x1a, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x9, 0x2, 0x2, 0x2, 
       0x1c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x5, 0xc, 0x14, 0x19, 
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

LispyParser::Initializer LispyParser::_init;
