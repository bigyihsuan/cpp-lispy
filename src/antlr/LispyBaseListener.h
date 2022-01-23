
// Generated from Lispy.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "LispyListener.h"


/**
 * This class provides an empty implementation of LispyListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LispyBaseListener : public LispyListener {
public:

  virtual void enterLispy(LispyParser::LispyContext * /*ctx*/) override { }
  virtual void exitLispy(LispyParser::LispyContext * /*ctx*/) override { }

  virtual void enterExpr(LispyParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(LispyParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

