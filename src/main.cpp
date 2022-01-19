#include <iostream>
#include <string>
#include <editline/history.h>
#include <editline/readline.h>

int main()
{
    std::cout << "cpp-lispy v0.0.0\n"
              << "Press ctrl-c to exit\n";

    while (true)
    {
        std::string input;
        input = readline("lispy> ");
        add_history(input.c_str());
        std::printf("No you're a %s\n", input.c_str());
    }

    return 0;
}
