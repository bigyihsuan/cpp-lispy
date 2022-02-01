ANTLR_DIR = antlr
antlr4 = java -Xmx500M -cp "/usr/local/lib/antlr-4.9.2-complete.jar" org.antlr.v4.Tool

Iantlr4 = -I /usr/local/include/antlr4-runtime/
ledit = -ledit
lantlr4 = -lantlr4-runtime

parsing = src/parsing.cpp
lispy_grammar = Lispy.g4

grammar: src/$(lispy_grammar)
	cd src;	$(antlr4) -Dlanguage=Cpp -visitor -o $(ANTLR_DIR) $(lispy_grammar); cd ..

lispy: $(parsing)
	g++ -g -std=c++2a -Wall $(Iantlr4) -I src/antlr -o lispy \
		$(parsing) src/antlr/*.cpp $(ledit) $(lantlr4)

build: grammar lispy

run: build
	./lispy

clean:
	rm lispy