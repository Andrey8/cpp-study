#include <list>



namespace Tests
{
	template < typename T >
	void PrintList( std::list< T > const & l );

	template < typename T >
	void PrintTwoLists( std::list< T > const & list1, std::list< T > const & list2 );

	void TestList_Test_1();
	void TestList_Unique_1();
	void TestList_Unique_2();
	void TestList_Splice_1();
	void TestList_Merge_1();
}

