CXX = g++
CXXFLAGS = -g3 -Wall -lm
MKDIR = mkdir -p

LIBS = -lm -lpq

directorios:
	$(MKDIR) build dist

connect.o: directorios connect.cpp
	$(CXX) $(CXXFLAGS) -c connect.cpp -o build/connect.o

main.o: directorios main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o build/main.o

all: clean main.o connect.o
	$(CXX) $(CXXFLAGS) $(LIBS) -o dist/programa build/connect.o build/main.o $(LIBS)
	rm -fr build

clean:
	rm -fr *.o a.out core programa dist build

.DEFAULT_GOAL := all