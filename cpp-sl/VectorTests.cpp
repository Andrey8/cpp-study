#include "VectorTests.h"

#include <vector>
#include <iostream>
#include <list>



void Tests::TestVector_Constructors_1()
{
	std::vector< int > empty;
	PrintInfo( empty );

	std::vector< int > numbers1 = { 1, 2, 3, 4 };
	PrintInfo( numbers1 );

	std::list< int > const data = { 3, 5, 7, 9, 11 };
	//std::vector< int > numbers2( data.begin(), data.end() );
	std::vector< int > numbers2 = { data.begin(), data.end() };
	PrintInfo( numbers2 );

	std::vector< int > duplicateNumbers( 10, 4 );
	PrintInfo( duplicateNumbers );

	std::vector< int > zeros( 7 );
	PrintInfo( zeros );
}

void Tests::TestVector_Comparisons_1()
{
	std::cout << "Vectors Comparisons\n";

	std::vector< int > numbers1 = { 2, 4, 6, 8, 10 };
	std::vector< int > numbers2 = { 2, 4, 6, 9, 10 };

	numbers2 = { 2, 5, 1, 1, 1, 1, 1 };

	PrintInfo( numbers1 );
	PrintInfo( numbers2 );

	std::cout << std::boolalpha << ( numbers1 < numbers2 ) << '\n';
}

void Tests::TestVector_Reserve_1()
{
	std::vector< int > numbers1 = { 3, 6, 9, 12 };

	PrintInfo( numbers1 );

	numbers1.reserve( 7 );
	//numbers1.reserve( 2 );

	PrintInfo( numbers1 );
}

void Tests::TestVector_ShrinkToFit_1()
{
	std::vector< int > numbers;
	numbers.reserve( 10 );

	numbers = { 2, 3, 5, 7 };

	PrintInfo( numbers );

	numbers.shrink_to_fit();
	PrintInfo( numbers );

//	int const index = 20;
//	numbers[ index ] = 1001;
//	std::cout << numbers[ index ] << '\n';
}

void Tests::TestVector_Resize_1()
{
	std::vector< int > numbers = { 2, 4, 6, 8, 10, 12, 14 };

	PrintInfo( numbers );

	numbers.resize( 4 );
	PrintInfo( numbers );

	//std::cout << numbers[ 5 ] << '\n';
}

void Tests::TestVector_Assignments_1()
{
	std::vector< int > numbers = { 1, 2, 3 };

	PrintInfo( numbers );

	std::list< int > data = { 2, 3, 5, 7, 11 };
	numbers = { data.begin(), data.end() };
	//numbers.assign( data.begin(), data.end() );
	PrintInfo( numbers );
}

void Tests::TestVector_Access_1()
{
	std::vector< int > empty;
	std::vector< int > numbers1 = { 3, 5, 7 };

	//std::cout << empty[ 5 ] << '\n';  // error

	int const index = 100;
	std::cout << "Out-of-range value : " << numbers1[ index ] << '\n';  // no error, why?
}
