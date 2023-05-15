#include "StringStreamTests.h"

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>



void Tests::TestStringStream_1()
{
	std::string const data = "abcd  ef ";
	std::istringstream iss( data );
	
	std::string str1;
	iss >> str1;
	
	std::string str2;
	iss >> str2;
	
	std::cout 
			<< "str1 : '" << str1 << "'\n"
			<< "str2 : '" << str2 << "'\n";
}

bool Tests::IsOneWord_1(const std::string & str)
{
	std::istringstream iss( str );
	
	std::string s1;
	iss >> s1;
	
	if ( s1.empty() )
	{
		return false;
	}
	
	iss >> std::ws;
	
	return ( iss.peek() == EOF );
}

void Tests::TestStringStream_2()
{
	std::cout << std::boolalpha << IsOneWord_1( "  abcd  " ) << '\n';
	std::cout << std::boolalpha << IsOneWord_1( "  abcd  ab" ) << '\n';
	std::cout << std::boolalpha << IsOneWord_1( "   " ) << '\n';
	
	std::cout << '\n';
	
	std::cout << std::boolalpha << IsOneWord_2( "  abcd  " ) << '\n';
	std::cout << std::boolalpha << IsOneWord_2( "  abcd  ab" ) << '\n';
	std::cout << std::boolalpha << IsOneWord_2( "   \n\t  \t" ) << '\n';
	std::cout << std::boolalpha << IsOneWord_2( "hello" ) << '\n';
	std::cout << std::boolalpha << IsOneWord_2( " hello" ) << '\n';
	std::cout << std::boolalpha << IsOneWord_2( "hello " ) << '\n';
}

bool Tests::IsOneWord_2(const std::string & str)
{
	std::istringstream iss( str );
	
	std::string s1;
	iss >> s1;
	
	if ( s1.empty() )
	{
		return false;
	}
	
	std::string s2;
	iss >> s2;
	
	return s2.empty();
}
