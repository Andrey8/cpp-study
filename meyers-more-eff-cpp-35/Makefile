PROGRAM_NAME=launcher
CC=g++
FLAGS=-std=c++11 -Wall

EXECUTABLES=$(PROGRAM_NAME)
OBJ_FILES=techniques/item25.o



all : $(PROGRAM_NAME)

$(PROGRAM_NAME) : $(OBJ_FILES) Launcher.cpp
	$(CC) -o $@ $^ $(FLAGS)



techniques/item25.o : techniques/item25.cpp techniques/item25.h
	$(CC) -c techniques/item25.cpp -o techniques/item25.o $(FLAGS)



clean :
	rm -v $(OBJ_FILES) $(EXECUTABLES)