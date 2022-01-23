
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

  virtual void enterExpr(LispyParser::ExprContext *ctx) = 0;
  virtual void exitExpr(LispyParser::ExprContext *ctx) = 0;


};

