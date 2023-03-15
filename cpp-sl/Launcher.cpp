#include "ListTests.h"
#include "DequeTests.h"
#include "VectorTests.h"
#include "IOStreamsTests.h"
#include "NumericLimits.h"



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
		Tests::TestVector_Access_1();
//		Tests::TestVector_IteratorAccess_1();
//		Tests::TestVector_Insert_1();
	}

	void TestNumericLimits()
	{
		Tests::Test_NumericLimits_1();
	}

	void TestIOStreams()
	{

	}
}



int main()
{
	Tests::TestNumericLimits();
	//Tests::TestVectors();
	//Tests::TestLists();

	return 0;
}
