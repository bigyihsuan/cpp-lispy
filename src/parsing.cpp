#include <iostream>
#include <string>
#include <editline/history.h>
#include <editline/readline.h>

#include <antlr4-runtime/antlr4-runtime.h>
#include "./antlr/LispyLexer.h"
#include "./antlr/LispyParser.h"

int main()
{

    std::cout
        << "cpp-lispy v0.0.0\n"
        << "Press ctrl-c to exit\n";

    // while (true)
    // {
    std::string input;
    std::cout << "lispy> ";
    std::getline(std::cin, input);
    add_history(input.c_str());

    std::cout << input << std::endl;
    antlr4::ANTLRInputStream instream(input.c_str());
    LispyLexer lexer(&instream);
    antlr4::CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens())
    {
        std::cout << token->toString() << std::endl;
    }

    LispyParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.lispy();
    std::cout << tree->toStringTree(&parser, true) << std::endl;
    // }

    return 0;
}
