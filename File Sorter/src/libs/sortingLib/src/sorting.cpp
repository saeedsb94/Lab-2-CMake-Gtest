#include "sorting.hpp"

/*	Sorting algorithm "Quick sort"	*/
__declspec(dllexport) void QuickSort(int* arr, int left, int right) {

	int i = left;
	int j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	/* partition */

	while (i <= j) {
		while (arr[i] < pivot)
			i++;

		while (arr[j] > pivot)
			j--;

		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	/* recursion */
	if (left < j)
		QuickSort(arr, left, j);

	if (i < right)
		QuickSort(arr, i, right);
}

// check if the array is sorted
__declspec(dllexport) bool ArrayIsSorted(int* arr) {

	for (int i = 2; i < *arr; i++)
		if (arr[i] < arr[i - 1])
			return false;

	return true;
}

