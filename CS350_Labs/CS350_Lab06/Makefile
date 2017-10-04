program_NAME := lab06
program_CXX_SRCS := $(wildcard *.cpp)
program_CXX_OBJS := ${program_CXX_SRCS:.cpp=.o}

CXX=clang++
CXXFLAGS = -g -std=c++11 -Wall

.PHONY: all clean distclean

all: clean $(program_NAME)

$(program_NAME): $(program_CXX_OBJS)
	$(CXX) $(CXXFLAGS) $(program_CXX_OBJS) -o $(program_NAME)

clean:
	@- $(RM) $(program_NAME)
	@- $(RM) $(program_CXX_OBJS)
