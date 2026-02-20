#include <iostream>
#include <assert.h>
using namespace std;

// return the lowest element in the input array
int FindMinimum(int arr[], const int size);

int main() {
	const int arrSize = 20;
	int array[arrSize] = { 67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29 };

	assert(FindMinimum(array, arrSize) == 2);

	cout << "\n\n======END======\n";
}

int FindMinimum(int arr[], const int size) {
	int min = arr[0];
	for (int i = 1; i < size; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}