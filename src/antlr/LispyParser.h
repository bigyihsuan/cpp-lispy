
// Generated from Lispy.g4 by ANTLR 4.9.2

#pragma once

#include "antlr4-runtime.h"

class LispyParser : public antlr4::Parser
{
public:
  enum
  {
    T__0 = 1,
    T__1 = 2,
    NUMBER = 3,
    OPERATOR = 4,
    WS = 5
  };

  enum
  {
    RuleLispy = 0,
    RuleExpr = 1
  };

  explicit LispyParser(antlr4::TokenStream *input);
  ~LispyParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN &getATN() const override { return _atn; };
  virtual const std::vector<std::string> &getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string> &getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary &getVocabulary() const override;

  class LispyContext;
  class ExprContext;

  class LispyContext : public antlr4::ParserRuleContext
  {
  public:
    LispyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPERATOR();
    std::vector<ExprContext *> expr();
    ExprContext *expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  LispyContext *lispy();

  class ExprContext : public antlr4::ParserRuleContext
  {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *OPERATOR();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ExprContext *expr();

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;

  struct Initializer
  {
    Initializer();
  };
  static Initializer _init;
};
