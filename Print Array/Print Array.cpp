#include <iostream>
using namespace std;

int main() {
	const int arrSize = 10;
	int arr[arrSize];

	cout << "Enter array:" << endl;
	for (int i = 0; i < arrSize; i++)
		cin >> arr[i];

	cout << "\n";
	for (int i = 0; i < arrSize; i++) {
		if (i != 0) cout << ", ";
		cout << arr[i];
	}

	cout << "\n\n======END======\n";
}