#pragma once

#include <set>



namespace Tests
{
	template < typename T >
	void PrintInfo( std::set< T > const & s );

	void TestSet_Constructors_1();
	void TestSet_Find_1();
	void TestSet_IteratorAccess_1();
	void TestSet_Insert_1();
}
