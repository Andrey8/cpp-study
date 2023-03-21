#include "StringTests.h"

#include <string>
#include <iostream>



void Tests::TestString_FindCharacter_1()
{
	std::string const text = "abcdefghabcdef";
	
	//auto pos1 = text.find( 'e' );
	
	std::cout << "pos of \'e\' : " << text.find( 'e' ) << '\n';
	std::cout << "pos of \'e\' after 4th : " << text.find( 'e', 5 ) << '\n';
	std::cout << "pos of \'e\' after 3rd : " << text.find( 'e', 4 ) << '\n';
}

void Tests::TestString_Substr_1()
{
	std::string const text = "abcde12321fgh";
	
	std::cout << "substring 1 : " << text.substr( 3, 4 ) << '\n';
	std::cout << "substring 2 : " << text.substr( 7 ) << '\n';
}
