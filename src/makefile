CXX = g++
CXXFLAGS = -Wall -std=c++17

OBJS = main.o inputHandler.o tokenizer.o parser.o evaluator.o

all: evaluator

evaluator: $(OBJS)
	$(CXX) -o evaluator $(OBJS)

main.o: main.cpp inputHandler.h tokenizer.h parser.h evaluator.h
	$(CXX) $(CXXFLAGS) -c main.cpp

inputHandler.o: inputHandler.cpp inputHandler.h
	$(CXX) $(CXXFLAGS) -c inputHandler.cpp

tokenizer.o: tokenizer.cpp tokenizer.h
	$(CXX) $(CXXFLAGS) -c tokenizer.cpp

parser.o: parser.cpp parser.h
	$(CXX) $(CXXFLAGS) -c parser.cpp

evaluator.o: evaluator.cpp evaluator.h
	$(CXX) $(CXXFLAGS) -c evaluator.cpp

clean:
	rm -f *.o evaluator
