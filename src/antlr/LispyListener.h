
// Generated from Lispy.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "LispyParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LispyParser.
 */
class  LispyListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterLispy(LispyParser::LispyContext *ctx) = 0;
  virtual void exitLispy(LispyParser::LispyContext *ctx) = 0;

  virtual void enterParenExpr(LispyParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(LispyParser::ParenExprContext *ctx) = 0;

  virtual void enterNumberExpr(LispyParser::NumberExprContext *ctx) = 0;
  virtual void exitNumberExpr(LispyParser::NumberExprContext *ctx) = 0;

  virtual void enterOp(LispyParser::OpContext *ctx) = 0;
  virtual void exitOp(LispyParser::OpContext *ctx) = 0;


};

