CC=g++
FLAGS=-std=c++11 -Wall
EXECUTABLES=launcher

#IOStreamsTests.o
OBJ_FILES=ListTests.o DequeTests.o VectorTests.o NumericLimits.o SetTests.o \
Getline.o StringTests.o StringStreamTests.o



all : launcher

launcher : $(OBJ_FILES) Launcher.cpp
	$(CC) -o $@ $^ $(FLAGS)



StringStreamTests.o : StringStreamTests.cpp StringStreamTests.h
	$(CC) -c StringStreamTests.cpp $(FLAGS)

StringTests.o : StringTests.cpp StringTests.h
	$(CC) -c StringTests.cpp $(FLAGS)

Getline.o : Getline.cpp Getline.h
	$(CC) -c Getline.cpp $(FLAGS)

SetTests.o : SetTests.cpp SetTests.h
	$(CC) -c SetTests.cpp $(FLAGS)

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
