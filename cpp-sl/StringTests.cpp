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

void Tests::TestString_1()
{
	std::string const str = "abcd...xyz";
	
	for ( int i = str.size() - 1; i >= 0; --i )
	{
		std::cout << "'" << str[ i ] << "' ";
	}			 
	
	std::cout << '\n';
}

void Tests::RemoveEndingWhitespaces(std::string & str)
{
	auto i = str.size() - 1;
	
	for ( ; i >= 0; --i )
	{
		if ( !std::isspace( str[ i ] ) )
		{
			break;
		}
	}
	
	if ( i == str.size() - 1 )
	{
		return;
	}
	
	str.erase( i + 1, std::string::npos );
}

void Tests::TestString_2()
{
	std::string str = "   abcdefgh   \t    ";
	
	Print( str );	
	RemoveEndingWhitespaces( str );	
	Print( str );
	
	std::string emptyStr = "        \t   ";
	
	Print( emptyStr );	
	RemoveEndingWhitespaces( emptyStr );	
	Print( emptyStr );
	
	std::string str2 = "  abcd";
	
	Print( str2 );
	RemoveEndingWhitespaces( str2 );
	Print( str2 );
}

void Tests::Print(const std::string & str)
{
	std::cout << '\'' << str << '\'' << '\n';
}
