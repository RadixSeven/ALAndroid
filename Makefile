CC=$(CXX)
CXXFLAGS=-std=c++11 -Wall -Wextra -pedantic -Werror

all: ALAndroid

ALAndroid: ALAndroid.o

ALAndroid.o: ALAndroid.cpp world.hpp

clean:
	rm -f ALAndroid *.o

.PHONY: all clean
