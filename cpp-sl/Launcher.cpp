#include "ListTests.h"
#include "DequeTests.h"
#include "VectorTests.h"
#include "SetTests.h"
#include "IOStreamsTests.h"
#include "NumericLimits.h"
#include "Getline.h"
#include "StringTests.h"
#include "StringStreamTests.h"



namespace Tests
{
	void TestLists()
	{
//		Tests::TestList_Test_1();
//		Tests::TestList_Unique_1();
//		Tests::TestList_Unique_2();
//		Tests::TestList_Splice_1();
		Tests::TestList_Merge_1();
	}

	void TestDeques()
	{
		Tests::TestDeque_QueueModel_1();
	}

	void TestVectors()
	{
//		Tests::TestVector_Constructors_1();
//		Tests::TestVector_Comparisons_1();
//		Tests::TestVector_Reserve_1();
//		Tests::TestVector_ShrinkToFit_1();
//		Tests::TestVector_Resize_1();
//		Tests::TestVector_Assignments_1();
//		Tests::TestVector_Swap_1();
//		Tests::TestVector_Access_1();
//		Tests::TestVector_IteratorAccess_1();
//		Tests::TestVector_Insert_1();
		Tests::TestVector_Erase_1();
	}

	void TestSets()
	{
//		Tests::TestSet_Constructors_1();
//		Tests::TestSet_Find_1();
//		Tests::TestSet_IteratorAccess_1();
		Tests::TestSet_Insert_1();
	}

	void TestNumericLimits()
	{
		Tests::Test_NumericLimits_1();
	}

	void TestIOStreams()
	{

	}

	void TestGetline( char const * filePath )
	{
		Tests::TestGetline_1( filePath );
	}
	
	void TestString()
	{
//		TestString_FindCharacter_1();
//		TestString_Substr_1();
//		TestString_1();
		TestString_2();
	}
	
	void TestStringStreams()
	{
//		Tests::TestStringStream_1();
		Tests::TestStringStream_2();
	}
}



int main( int argc, char ** argv )
{
	//Tests::TestNumericLimits();
	//Tests::TestVectors();
	//Tests::TestLists();
	//Tests::TestSets();
	//Tests::TestGetline( argv[ 1 ] )
	Tests::TestString();
	//Tests::TestStringStreams();

	return 0;
}
