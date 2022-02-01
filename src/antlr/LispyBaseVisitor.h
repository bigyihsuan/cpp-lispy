
// Generated from Lispy.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "LispyVisitor.h"


/**
 * This class provides an empty implementation of LispyVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LispyBaseVisitor : public LispyVisitor {
public:

  virtual antlrcpp::Any visitLispy(LispyParser::LispyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenExpr(LispyParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberExpr(LispyParser::NumberExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp(LispyParser::OpContext *ctx) override {
    return visitChildren(ctx);
  }


};

