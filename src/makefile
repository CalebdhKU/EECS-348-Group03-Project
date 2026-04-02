CXX = g++
CXXFLAGS = -Wall -std=c++17

OBJS = main.o inputHandler.o tokenizer.o parser.o

all: evaluator

evaluator: $(OBJS)
	$(CXX) -o evaluator $(OBJS)

main.o: main.cpp inputHandler.h tokenizer.h parser.h
	$(CXX) $(CXXFLAGS) -c main.cpp

InputHandler.o: inputHandler.cpp inputHandler.h
	$(CXX) $(CXXFLAGS) -c inputHandler.cpp

Tokenizer.o: tokenizer.cpp tokenizer.h
	$(CXX) $(CXXFLAGS) -c tokenizer.cpp

Parser.o: parser.cpp parser.h
	$(CXX) $(CXXFLAGS) -c parser.cpp

clean:
	rm -f *.o evaluator
