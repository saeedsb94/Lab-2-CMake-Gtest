#pragma once

/*	Sorting algorithm "Quick sort"	*/
__declspec(dllexport) void QuickSort(int* arr, int left, int right);

// check if the array is sorted
__declspec(dllexport) bool ArrayIsSorted(int* arr);