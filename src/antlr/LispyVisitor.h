
// Generated from Lispy.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "LispyParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LispyParser.
 */
class  LispyVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LispyParser.
   */
    virtual antlrcpp::Any visitLispy(LispyParser::LispyContext *context) = 0;

    virtual antlrcpp::Any visitParenExpr(LispyParser::ParenExprContext *context) = 0;

    virtual antlrcpp::Any visitNumberExpr(LispyParser::NumberExprContext *context) = 0;

    virtual antlrcpp::Any visitOp(LispyParser::OpContext *context) = 0;


};

