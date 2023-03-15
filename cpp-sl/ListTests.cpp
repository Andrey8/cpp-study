#include "ListTests.h"

#include <list>
#include <iostream>
#include <algorithm>
#include <iterator>



namespace Tests
{
	template < typename T >
	void PrintList( std::list< T > const & l )
	{
		std::cout << "list : ";
		std::copy( l.cbegin(), l.cend(), std::ostream_iterator< T >( std::cout, " " ) );

		std::cout << "\n\n";
	}

	template < typename T >
	void PrintTwoLists( std::list< T > const & list1, std::list< T > const & list2 )
	{
		std::cout << "list1: ";
		std::copy( list1.cbegin(), list1.cend(), std::ostream_iterator< T >( std::cout, " " ) );

		std::cout << "\nlist2: ";
		std::copy( list2.cbegin(), list2.cend(), std::ostream_iterator< T >( std::cout, " " ) );

		std::cout << "\n\n";
	}

	void TestList_Test_1()
	{
		std::list< int > list1;
		std::list< int > list2;

		for ( int i = 0; i < 6; ++i )
		{
			list1.push_back( i );
			list2.push_front( i );
		}
		PrintTwoLists( list1, list2 );

		list2.splice( std::find( list2.begin(), list2.end(), 3 ), list1 );
		PrintTwoLists( list1, list2 );

		list2.splice( list2.end(), list2, list2.begin() );
		PrintTwoLists( list1, list2 );

		list2.sort();
		list1 = list2;
		list2.unique();
		PrintTwoLists( list1, list2 );

		list1.merge( list2 );
		PrintTwoLists( list1, list2 );

		list1.reverse();
		PrintTwoLists( list1, list2 );
	}

	void TestList_Unique_1()
	{
		//std::list< int > numbers = { 1, 2, 1, 2, 1, 2 };
		std::list< int > numbers = { 1, 2, 2, 1, 2, 2, 2, 1, 1 };

		PrintList( numbers );

		numbers.unique();
		PrintList( numbers );
	}

	void TestList_Unique_2()
	{
		std::list< int > numbers = { 2, 5, 10, 6, 36, 8, 8, 1 };

		PrintList( numbers );

		numbers.unique( [] ( int x, int y ) { return ( x - y ) % 3 == 0; } );
		PrintList( numbers );

	}

	void TestList_Splice_1()
	{
		std::list< int > list1 = { 1, 2, 3, 4, 5 };
		std::list< int > list2 = { 100, 90, 80, 70 };

		PrintTwoLists( list1, list2 );

		auto it = list1.begin();
		++it;
		++it;
		//list1.splice( it, list2 );
		auto it2 = list2.begin();
		++it2;
		list1.splice( it, list2, it2 );
		//list1.splice( it, list2, it2, list2.end() );
		PrintTwoLists( list1, list2 );

	}

	void TestList_Merge_1()
	{
		std::list< int > numbers1 = { 2, 4, 6, 8 };
		std::list< int > numbers2 = { 3, 5, 6, 10, 20 };

		PrintTwoLists( numbers1, numbers2 );

		numbers1.merge( numbers2 );
		PrintTwoLists( numbers1, numbers2 );
	}
}
