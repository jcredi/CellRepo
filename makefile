CXX = g++
CXXFLAGS=-g -std=c++11 -Wall -pedantic

all:
	$(CXX) $(CXXFLAGS) cellSimulator.cpp Cell.cpp -o cellSimulator
clean:
	rm *o cellSimulator
