
// Generated from Lispy.g4 by ANTLR 4.9.2


#include "LispyLexer.h"


using namespace antlr4;


LispyLexer::LispyLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

LispyLexer::~LispyLexer() {
  delete _interpreter;
}

std::string LispyLexer::getGrammarFileName() const {
  return "Lispy.g4";
}

const std::vector<std::string>& LispyLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& LispyLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& LispyLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& LispyLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& LispyLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> LispyLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& LispyLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> LispyLexer::_decisionToDFA;
atn::PredictionContextCache LispyLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN LispyLexer::_atn;
std::vector<uint16_t> LispyLexer::_serializedATN;

std::vector<std::string> LispyLexer::_ruleNames = {
  "LPAREN", "RPAREN", "NUMBER", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", 
  "WS"
};

std::vector<std::string> LispyLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> LispyLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> LispyLexer::_literalNames = {
  "", "'('", "')'", "", "'+'", "'-'", "'*'", "'/'", "'%'"
};

std::vector<std::string> LispyLexer::_symbolicNames = {
  "", "LPAREN", "RPAREN", "NUMBER", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", 
  "WS"
};

dfa::Vocabulary LispyLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> LispyLexer::_tokenNames;

LispyLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
       0x2, 0xb, 0x32, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
       0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 
       0x7, 0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 
       0x9, 0xa, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x5, 
       0x4, 0x1b, 0xa, 0x4, 0x3, 0x4, 0x6, 0x4, 0x1e, 0xa, 0x4, 0xd, 0x4, 
       0xe, 0x4, 0x1f, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x6, 
       0xa, 0x2d, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x2e, 0x3, 0xa, 0x3, 0xa, 
       0x2, 0x2, 0xb, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 
       0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x3, 0x2, 0x4, 0x3, 0x2, 
       0x32, 0x3b, 0x5, 0x2, 0xb, 0xc, 0xf, 0xf, 0x22, 0x22, 0x2, 0x34, 
       0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 
       0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 
       0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 
       0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 
       0x2, 0x2, 0x3, 0x15, 0x3, 0x2, 0x2, 0x2, 0x5, 0x17, 0x3, 0x2, 0x2, 
       0x2, 0x7, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x9, 0x21, 0x3, 0x2, 0x2, 0x2, 
       0xb, 0x23, 0x3, 0x2, 0x2, 0x2, 0xd, 0x25, 0x3, 0x2, 0x2, 0x2, 0xf, 
       0x27, 0x3, 0x2, 0x2, 0x2, 0x11, 0x29, 0x3, 0x2, 0x2, 0x2, 0x13, 0x2c, 
       0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x7, 0x2a, 0x2, 0x2, 0x16, 0x4, 0x3, 
       0x2, 0x2, 0x2, 0x17, 0x18, 0x7, 0x2b, 0x2, 0x2, 0x18, 0x6, 0x3, 0x2, 
       0x2, 0x2, 0x19, 0x1b, 0x7, 0x2f, 0x2, 0x2, 0x1a, 0x19, 0x3, 0x2, 
       0x2, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1d, 0x3, 0x2, 0x2, 
       0x2, 0x1c, 0x1e, 0x9, 0x2, 0x2, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 
       0x1e, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1f, 
       0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 0x8, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 
       0x7, 0x2d, 0x2, 0x2, 0x22, 0xa, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 
       0x2f, 0x2, 0x2, 0x24, 0xc, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 0x2c, 
       0x2, 0x2, 0x26, 0xe, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x7, 0x31, 0x2, 
       0x2, 0x28, 0x10, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x27, 0x2, 
       0x2, 0x2a, 0x12, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2d, 0x9, 0x3, 0x2, 0x2, 
       0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 
       0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 
       0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x8, 0xa, 0x2, 0x2, 0x31, 0x14, 0x3, 
       0x2, 0x2, 0x2, 0x6, 0x2, 0x1a, 0x1f, 0x2e, 0x3, 0x8, 0x2, 0x2, 
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

LispyLexer::Initializer LispyLexer::_init;
