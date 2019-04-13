#include <iostream>
#include "files.hpp"
#include "sorting.hpp"

bool TestFile(const char* inputfile_name, const char* output_file_name)
{
	int* data = ReadDataFile(inputfile_name);	//	Get the array

	QuickSort(data, 1, *data);	//	sort the array

	WriteDataFile(output_file_name, data);	//	export the array

	return ArrayIsSorted(data);
}

int main() {

	/*	Testing	*/
	{
		bool passTest;

		///*	Case 1:	Sorted sequence	*/
		//passTest = TestFile("test/In/testCase1.txt", "test/Out/outTestCase1.txt");

		//if (passTest)
		//	std::cout << "Passed the 1st test...\n";
		//else
		//	std::cout << "Code failed at the 1st test...\n";

		///*	Case 2:	Reversed sequence	*/
		//passTest = TestFile("test/In/testCase2.txt", "test/Out/outTestCase2.txt");

		//if (passTest)
		//	std::cout << "Passed the 2nd test...\n";
		//else
		//	std::cout << "Code failed at the 2nd test...\n";

		///*	Case 3:	Identical sequence	*/
		//passTest = TestFile("test/In/testCase3.txt", "test/Out/outTestCase3.txt");

		//if (passTest)
		//	std::cout << "Passed the 3rd test...\n";
		//else
		//	std::cout << "Code failed at 3rd first test...\n";

		///*	Case 4: Sequence with negative numbers	*/
		//passTest = TestFile("test/In/testCase4.txt", "test/Out/outTestCase4.txt");

		//if (passTest)
		//	std::cout << "Passed the 4th test...\n";
		//else
		//	std::cout << "Code failed at 4th first test...\n";

		/*	Case 5:	Random sequence	*/
		CreatDataFile("test.txt");

		passTest = TestFile("test.txt", "outTest.txt");

		if (passTest)
			std::cout << "Passed the 5th test...\n";
		else
			std::cout << "Code failed at the 5th test...\n";
	}

	return 0;
}