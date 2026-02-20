#include <iostream>
#include <string>
#include <assert.h>
using namespace std;

string FizzBuzz(int input);

int main() {

	assert(FizzBuzz(7) == "7");
	assert(FizzBuzz(3) == "Fizz");
	assert(FizzBuzz(5) == "Buzz");
	assert(FizzBuzz(15) == "FizzBuzz");

	for (int i = 1; i <= 20; i++)
		cout << FizzBuzz(i) << endl;

	cout << "\n\n======END======\n";
}

string FizzBuzz(int input) {
	bool fizz = false, buzz = false;
	if (((input % 3) == 0) && ((input % 5) != 0))
		return "Fizz";
	if (((input % 3) != 0) && ((input % 5) == 0))
		return "Buzz";
	if (((input % 3) == 0) && ((input % 5) == 0))
		return "FizzBuzz";

	return to_string(input);
}