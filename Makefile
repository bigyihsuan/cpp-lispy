antlr4 = /usr/local/include/antlr4-runtime/
edit = -ledit

parsing = src/parsing.cpp


lispy: $(parsing)
	g++ -std=c++11 -Wall -I $(antlr4) -o lispy $(parsing) $(edit)