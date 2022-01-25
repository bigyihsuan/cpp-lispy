#include <antlr4-runtime/antlr4-runtime.h>
#include <editline/history.h>
#include <editline/readline.h>

#include <iostream>
#include <string>

#include "./antlr/LispyLexer.h"
#include "./antlr/LispyParser.h"

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

        std::cout << input << std::endl;
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
        std::cout << tree->toStringTree(parser, true) << std::endl;
    }

    return 0;
}
