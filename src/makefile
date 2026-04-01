CXX = g++
CXXFLAGS = -Wall -std=c++17

OBJS = main.o inputHandler.o tokenizer.o parser.o

all: evaluator

evaluator: $(OBJS)
	$(CXX) -o evaluator $(OBJS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

InputHandler.o: inputHandler.cpp
	$(CXX) $(CXXFLAGS) -c inputHandler.cpp

Tokenizer.o: tokenizer.cpp
	$(CXX) $(CXXFLAGS) -c tokenizer.cpp

Parser.o: parser.cpp
	$(CXX) $(CXXFLAGS) -c parser.cpp

clean:
	rm -f *.o evaluator
