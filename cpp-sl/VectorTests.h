#include <vector>
#include <iostream>



namespace Tests
{
	template < typename T >
	std::ostream & operator<<( std::ostream & os, std::vector< T > const & v );

	template < typename T >
	void PrintInfo( std::vector< T > const & v );

	void TestVector_Constructors_1();
	void TestVector_Comparisons_1();
	void TestVector_Reserve_1();
	void TestVector_ShrinkToFit_1();
	void TestVector_Resize_1();
	void TestVector_Assignments_1();
	void TestVector_Swap_1();
	void TestVector_Access_1();
	void TestVector_IteratorAccess_1();
	void TestVector_Insert_1();

}

