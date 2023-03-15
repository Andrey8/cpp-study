CC=g++
FLAGS=-std=c++11 -Wall
EXECUTABLES=launcher

OBJ_FILES=ListTests.o DequeTests.o VectorTests.o NumericLimits.o #IOStreamsTests.o



all : launcher

launcher : $(OBJ_FILES) Launcher.cpp
	$(CC) -o $@ $^ $(FLAGS)



ListTests.o : ListTests.cpp ListTests.h
	$(CC) -c ListTests.cpp $(FLAGS)

DequeTests.o : DequeTests.cpp DequeTests.h
	$(CC) -c DequeTests.cpp $(FLAGS)

VectorTests.o : VectorTests.cpp VectorTests.h
	$(CC) -c VectorTests.cpp $(FLAGS)

NumericLimits.o : NumericLimits.cpp NumericLimits.h
	$(CC) -c NumericLimits.cpp $(FLAGS)

#IOStreamsTests.o : IOStreamsTests.cpp IOStreamsTests.h
#	$(CC) -o $^ $(FLAGS)



clean :
	rm -v $(EXECUTABLES) $(OBJ_FILES)
