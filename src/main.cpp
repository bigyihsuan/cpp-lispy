#include <iostream>
#include <string>

int main()
{
    std::cout << "cpp-lispy v0.0.0-1\n"
              << "Press ctrl-c to exit\n";

    while (true)
    {
        std::string input;

        std::cout << "lispy> ";
        std::getline(std::cin, input);
        std::printf("No you're a %s\n", input.c_str());
    }

    return 0;
}