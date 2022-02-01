#include <antlr4-runtime/antlr4-runtime.h>
#include <editline/history.h>
#include <editline/readline.h>

#include <iostream>
#include <string>

#include "./antlr/LispyBaseVisitor.h"
#include "./antlr/LispyLexer.h"
#include "./antlr/LispyParser.h"

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
        int left = visit(ctx->expr(0));
        // std::cout << "left " << left << std::endl;

        for (int i = 1; i < ctx->expr().size(); i++)
        {
            int right = visit(ctx->expr(i));
            // std::cout << "left: " << left << " right: " << right << std::endl;
            left = eval_op(op, left, right);
        }
        return left;
    }

    antlrcpp::Any visitParenExpr(LispyParser::ParenExprContext *ctx) override
    {
        // std::cout << "visitParenExpr " << ctx->getText() << std::endl;
        auto op = ctx->exprOp->getStart();
        int left = visit(ctx->expr(0));
        // std::cout << "    left " << left << std::endl;

        for (int i = 1; i < ctx->expr().size(); i++)
        {
            int right = visit(ctx->expr(i));
            // std::cout << "    left: " << left << " right: " << right << std::endl;
            left = eval_op(op, left, right);
        }
        return left;
    }

    antlrcpp::Any visitNumberExpr(LispyParser::NumberExprContext *ctx) override
    {
        // std::cout << "visitNumberExpr " << ctx->NUMBER()->getText() << std::endl;
        return std::stoi(ctx->NUMBER()->getText());
    }

    // eval_op: given an x, a y, and an operator, return the result of the operation
    // operators can be +, -, * /
    int eval_op(antlr4::Token *op, int x, int y)
    {
        auto type = op->getType();
        // std::cout << x << " "
        //   << op->getText() << " " << y << std::endl;
        if (type == LispyParser::PLUS)
        {
            return x + y;
        }
        else if (type == LispyParser::MINUS)
        {
            return x - y;
        }
        else if (type == LispyParser::STAR)
        {
            return x * y;
        }
        else if (type == LispyParser::SLASH)
        {
            return x / y;
        }
        return 0;
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
        std::cout << "visited value = " << (int)visitor->visit(tree) << std::endl;
    }

    return 0;
}