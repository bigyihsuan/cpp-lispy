
// Generated from Lispy.g4 by ANTLR 4.9.2


#include "LispyListener.h"

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

tree::TerminalNode* LispyParser::LispyContext::OPERATOR() {
  return getToken(LispyParser::OPERATOR, 0);
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
    setState(4);
    match(LispyParser::OPERATOR);
    setState(6); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(5);
      expr();
      setState(8); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LispyParser::T__0

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

tree::TerminalNode* LispyParser::ExprContext::NUMBER() {
  return getToken(LispyParser::NUMBER, 0);
}

tree::TerminalNode* LispyParser::ExprContext::OPERATOR() {
  return getToken(LispyParser::OPERATOR, 0);
}

std::vector<LispyParser::ExprContext *> LispyParser::ExprContext::expr() {
  return getRuleContexts<LispyParser::ExprContext>();
}

LispyParser::ExprContext* LispyParser::ExprContext::expr(size_t i) {
  return getRuleContext<LispyParser::ExprContext>(i);
}


size_t LispyParser::ExprContext::getRuleIndex() const {
  return LispyParser::RuleExpr;
}

void LispyParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LispyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void LispyParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LispyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
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
    setState(20);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LispyParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(10);
        match(LispyParser::NUMBER);
        break;
      }

      case LispyParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(11);
        match(LispyParser::T__0);
        setState(12);
        match(LispyParser::OPERATOR);
        setState(14); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(13);
          expr();
          setState(16); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == LispyParser::T__0

        || _la == LispyParser::NUMBER);
        setState(18);
        match(LispyParser::T__1);
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

// Static vars and initialization.
std::vector<dfa::DFA> LispyParser::_decisionToDFA;
atn::PredictionContextCache LispyParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN LispyParser::_atn;
std::vector<uint16_t> LispyParser::_serializedATN;

std::vector<std::string> LispyParser::_ruleNames = {
  "lispy", "expr"
};

std::vector<std::string> LispyParser::_literalNames = {
  "", "'('", "')'"
};

std::vector<std::string> LispyParser::_symbolicNames = {
  "", "", "", "NUMBER", "OPERATOR", "WS"
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
       0x3, 0x7, 0x19, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 
       0x3, 0x2, 0x6, 0x2, 0x9, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0xa, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 0x11, 0xa, 0x3, 0xd, 
       0x3, 0xe, 0x3, 0x12, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x17, 0xa, 0x3, 
       0x3, 0x3, 0x2, 0x2, 0x4, 0x2, 0x4, 0x2, 0x2, 0x2, 0x19, 0x2, 0x6, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0x16, 0x3, 0x2, 0x2, 0x2, 0x6, 0x8, 0x7, 
       0x6, 0x2, 0x2, 0x7, 0x9, 0x5, 0x4, 0x3, 0x2, 0x8, 0x7, 0x3, 0x2, 
       0x2, 0x2, 0x9, 0xa, 0x3, 0x2, 0x2, 0x2, 0xa, 0x8, 0x3, 0x2, 0x2, 
       0x2, 0xa, 0xb, 0x3, 0x2, 0x2, 0x2, 0xb, 0x3, 0x3, 0x2, 0x2, 0x2, 
       0xc, 0x17, 0x7, 0x5, 0x2, 0x2, 0xd, 0xe, 0x7, 0x3, 0x2, 0x2, 0xe, 
       0x10, 0x7, 0x6, 0x2, 0x2, 0xf, 0x11, 0x5, 0x4, 0x3, 0x2, 0x10, 0xf, 
       0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 0x3, 0x2, 0x2, 0x2, 0x12, 0x10, 0x3, 
       0x2, 0x2, 0x2, 0x12, 0x13, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x3, 0x2, 
       0x2, 0x2, 0x14, 0x15, 0x7, 0x4, 0x2, 0x2, 0x15, 0x17, 0x3, 0x2, 0x2, 
       0x2, 0x16, 0xc, 0x3, 0x2, 0x2, 0x2, 0x16, 0xd, 0x3, 0x2, 0x2, 0x2, 
       0x17, 0x5, 0x3, 0x2, 0x2, 0x2, 0x5, 0xa, 0x12, 0x16, 
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
