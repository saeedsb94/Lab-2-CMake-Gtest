#include "sortingLib.hpp"
#include "filesLib.hpp"
#include "gtest/gtest.h"

/*	Case 1:	Sorted sequence	*/
TEST(SortingTest, sortedInput) {

	EXPECT_TRUE(TestFile("testCase1.txt"));
}

/*	Case 2:	Reversed sequence	*/
TEST(SortingTest, reversedInput) {

	EXPECT_TRUE(TestFile("testCase2.txt"));
}

/*	Case 3:	Identical sequence	*/
TEST(SortingTest, identicalInput) {

	EXPECT_TRUE(TestFile("testCase3.txt"));
}

/*	Case 4: Sequence with negative numbers	*/
TEST(SortingTest, negativeInput) {

	EXPECT_TRUE(TestFile("testCase4.txt"));
}

/*	Case 0:	Random sequence	*/

TEST(SortingTest, RandomInput) {

	CreatDataFile("testCase5.txt");

	EXPECT_TRUE(TestFile("testCase5.txt"));
}


int main(int argc, char* argv[])

{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

}