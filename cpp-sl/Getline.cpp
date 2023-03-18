#include "Getline.h"

#include <string>
#include <iostream>
#include <fstream>



void Tests::TestGetline_1(const char * inputFilePath)
{
	std::ifstream inputFile( inputFilePath );

	if ( !inputFile.is_open() )
	{
		throw std::runtime_error( "ERROR : file did not open.\n" );
	}

	int i = 1;
	while ( !inputFile.eof() )
	{
		std::string line;
		std::getline( inputFile, line );

		std::cout << "Line " << i << " : '" << line << "'" << '\n';

		++i;
	}
}
