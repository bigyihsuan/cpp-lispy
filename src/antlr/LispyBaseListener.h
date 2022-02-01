
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

  virtual void enterParenExpr(LispyParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(LispyParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterNumberExpr(LispyParser::NumberExprContext * /*ctx*/) override { }
  virtual void exitNumberExpr(LispyParser::NumberExprContext * /*ctx*/) override { }

  virtual void enterOp(LispyParser::OpContext * /*ctx*/) override { }
  virtual void exitOp(LispyParser::OpContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

