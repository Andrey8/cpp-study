#include "getopt.h"
#include <iostream>
#include <fstream>
#include <string>



namespace CppBasicsTests
{
	char const helpMessage[] = 
		"Usage : ...\n";

	void Test_ProgramOptions_1( int argc, char ** argv )
	{
		int opt;
		int result = 0;
		char * outputFileName = nullptr;
		bool isOutputInFile = false;
		while ( ( opt = getopt( argc, argv, "hi:o:" ) ) != -1 )
		{
			switch ( opt )
			{
				case 'h' :
				{
					std::cout << helpMessage;

					break;
				}
				case 'i' :
				{
					std::ifstream inputFile;
					inputFile.open( optarg );

					if ( !inputFile.is_open() )
					{
						throw std::runtime_error( "File has not opened!\n" );
					}

					// std::string line;
					// std::getline( inputFile, line );

					int a;
					int b;
					inputFile >> a >> b;
					result = a + b;

					break;
				}
				case 'o' :
				{
					isOutputInFile = true;

					outputFileName = optarg;

					break;
				}
			}
		}

		if ( isOutputInFile )
		{
			std::ofstream outputFile;
			outputFile.open( outputFileName );

			if ( !outputFile.is_open() )
			{
				throw std::runtime_error( "File has not opened!\n" );
			}

			outputFile << result << '\n';
		}
		else
		{
			std::cout << result << '\n';
		}		
	}
}




