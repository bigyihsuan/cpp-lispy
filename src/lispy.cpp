#include <antlr4-runtime/antlr4-runtime.h>
#include <editline/history.h>
#include <editline/readline.h>

#include <iostream>
#include <string>

#include "./antlr/LispyBaseVisitor.h"
#include "./antlr/LispyLexer.h"
#include "./antlr/LispyParser.h"

enum LvalType
{
    NUM,
    ERR
};

enum LvalErr
{
    DIV_ZERO,
    BAD_OP,
    BAD_NUM
};

class Lval
{
public:
    enum LvalType type;
    double val;
    enum LvalErr err;

    friend std::ostream &operator<<(std::ostream &os, const Lval &lval);
};

std::ostream &operator<<(std::ostream &os, const Lval &lval)
{
    switch (lval.type)
    {
    case LvalType::NUM:
    {
        os << lval.val;
        break;
    }
    case LvalType::ERR:
    {
        switch (lval.err)
        {
        case LvalErr::DIV_ZERO:
        {
            os << "Error: Division by zero";
            break;
        }
        case LvalErr::BAD_OP:
        {
            os << "Error: Invalid operator";
            break;
        }
        case LvalErr::BAD_NUM:
        {
            os << "Error: Invalid number";
            break;
        }
        }
    }
    }
    return os;
}

Lval lval_num(double val)
{
    Lval v;
    v.type = LvalType::NUM;
    v.val = val;
    return v;
}

Lval lval_err(enum LvalErr err)
{
    Lval v;
    v.type = LvalType::ERR;
    v.err = err;
    return v;
}

class EvalVisitor : LispyBaseVisitor
{
public:
    antlrcpp::Any visit(antlr4::tree::ParseTree *tree)
    {
        return tree->accept(this);
    }

    antlrcpp::Any visitLispy(LispyParser::LispyContext *ctx) override
    {
        // std::cout << "visitLispy " << ctx->getText() << std::endl;
        auto op = ctx->lispyOp->getStart();
        Lval left = visit(ctx->expr(0));
        // std::cout << "left " << left << std::endl;

        for (auto i = 1; i < ctx->expr().size(); i++)
        {
            Lval right = visit(ctx->expr(i));
            // std::cout << "left: " << left << " right: " << right << std::endl;
            left = eval_op(op, left, right);
        }
        return left;
    }

    antlrcpp::Any visitParenExpr(LispyParser::ParenExprContext *ctx) override
    {
        // std::cout << "visitParenExpr " << ctx->getText() << std::endl;
        auto op = ctx->exprOp->getStart();
        Lval left = visit(ctx->expr(0));
        // std::cout << "    left " << left << std::endl;

        for (auto i = 1; i < ctx->expr().size(); i++)
        {
            Lval right = visit(ctx->expr(i));
            // std::cout << "    left: " << left << " right: " << right << std::endl;
            left = eval_op(op, left, right);
        }
        return left;
    }

    antlrcpp::Any visitNumberExpr(LispyParser::NumberExprContext *ctx) override
    {
        // std::cout << "visitNumberExpr " << ctx->NUMBER()->getText() << std::endl;
        return lval_num(std::stof(ctx->NUMBER()->getText()));
    }

    // eval_op: given an x, a y, and an operator, return the result of the operation
    // operators can be +, -, * /
    Lval eval_op(antlr4::Token *op, Lval x, Lval y)
    {
        if (x.type == LvalType::ERR)
        {
            return x;
        }
        if (y.type == LvalType::ERR)
        {
            return y;
        }

        auto type = op->getType();
        // std::cout << x << " "
        //   << op->getText() << " " << y << std::endl;
        switch (type)
        {
        case LispyLexer::PLUS:
            return lval_num(x.val + y.val);
        case LispyLexer::MINUS:
            return lval_num(x.val - y.val);
        case LispyLexer::STAR:
            return lval_num(x.val * y.val);
        case LispyLexer::SLASH:
            return y.val == 0 ? lval_err(LvalErr::DIV_ZERO) : lval_num(x.val / y.val);
        case LispyLexer::PERCENT:
            return y.val == 0 ? lval_err(LvalErr::DIV_ZERO) : lval_num((int)x.val % (int)y.val);
        default:
            return lval_err(LvalErr::BAD_OP);
        }
    }
};

int main()
{
    std::cout << "cpp-lispy v0.0.0\n"
              << "Press ctrl-c to exit\n";

    while (true)
    {
        std::string input;
        std::cout << "lispy> ";        // user prompt
        std::getline(std::cin, input); // get the line from user
        add_history(input.c_str());

        // std::cout << input << std::endl;
        auto instream = new antlr4::ANTLRInputStream(input);
        auto lexer = new LispyLexer(instream);
        auto tokens = new antlr4::CommonTokenStream(lexer);

        tokens->fill();
        /*
        for (auto token : tokens->getTokens())
        {
            std::cout << token->toString() << std::endl;
        }
        */

        auto parser = new LispyParser(tokens);

        antlr4::tree::ParseTree *tree = parser->lispy();
        // std::cout << tree->toStringTree(parser, true) << std::endl
        //   << std::endl;

        auto visitor = new EvalVisitor();
        std::cout << (Lval)visitor->visit(tree) << std::endl;
    }

    return 0;
}