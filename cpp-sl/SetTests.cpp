#include "SetTests.h"

#include <set>
#include <iostream>



template < typename T >
void Tests::PrintInfo(const std::set<T> &s)
{
	std::cout << "--- Set";
	for ( auto const & item : s )
	{
		std::cout << " " << item;
	}

	std::cout << "\n\tsize : " << s.size() << '\n';
	//std::cout << "\tcomp criterion : " << s.value_comp() << '\n';

	std::cout << "---\n";
}

void Tests::TestSet_Constructors_1()
{
	std::set< int > numbers1 = { 2, 4, 6, 8, 10 };

	PrintInfo( numbers1 );
}

void Tests::TestSet_Find_1()
{
	std::set< int > numbers = { 2, 4, 6, 8, 10, 12 };

	auto pos = numbers.find( 6 );
	std::cout << "pos value : " << *pos << '\n';

	auto pos2 = numbers.find( 100 );
	if ( pos2 == numbers.end() )
	{
		std::cout << "pos2 value not found\n";
	}
}

void Tests::TestSet_IteratorAccess_1()
{
	std::set< int > numbers = { 54, 2, 17, 82, 8, 23 };

	PrintInfo( numbers );

	//auto pos1 = numbers.begin() + 3;  // c. error
	auto pos1 = numbers.begin();
	++pos1;
	++pos1;
	++pos1;
	std::cout << "pos1 value : " << *pos1 << '\n';

	//*pos1 = 10;  // c. error


}

void Tests::TestSet_Insert_1()
{
	std::set< int > numbers = { 56, 103, 4, 89, 42, 17, 3 };

	PrintInfo( numbers );

	auto status1 = numbers.insert( 31 );
	PrintInfo( numbers );
	std::cout << "Inserted or not : " << status1.second << '\n';
	std::cout << "Position of the inserted value : "
			  << std::distance( numbers.begin(), status1.first ) << '\n';
}
