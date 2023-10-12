ifeq ($(OS), Windows_NT)
	OS := Windows
else
	OS:= $(shell uname)
endif

CX := g++
CXXFLAGS := -std=c++11
SRCS := main.c
EXEC := main

all: $(OS)

Linux:
	$(CX) $(CXXFLAGS) $(SRCS) -o $(EXEC)
Windows:
	$(CX) $(CXXFLAGS) $(SRCS) -o $(EXEC)

