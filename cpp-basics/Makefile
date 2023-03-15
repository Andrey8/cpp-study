PROGRAM_NAME=launcher
CC=g++
FLAGS=-std=c++11 -Wall

EXECUTABLES=$(PROGRAM_NAME)
OBJ_FILES=TemporaryValueChanging.o ProgramOptions/ProgramOptions.o



$(PROGRAM_NAME) : $(OBJ_FILES) Launcher.cpp
	$(CC) -o $@ $^ $(FLAGS)



TemporaryValueChanging.o : TemporaryValueChanging.cpp TemporaryValueChanging.h
	$(CC) -c TemporaryValueChanging.cpp $(FLAGS)

ProgramOptions/ProgramOptions.o : ProgramOptions/ProgramOptions.cpp ProgramOptions/ProgramOptions.h
	make -C ProgramOptions ProgramOptions.o



clean-all :
	rm -v *.o $(EXECUTABLES)