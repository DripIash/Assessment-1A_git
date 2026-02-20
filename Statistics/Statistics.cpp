#include <iostream>
#include <assert.h>
using namespace std;

int CalcAccuracy(int hit, int shot);

int main() {
	int numHit = 0, numShot = 0;
	int hitArr[5] = { 3, 1, 13, 21, 0 };
	int shotArr[5] = { 4, 2, 13, 173, 0 };
	int result[5] = { 75, 50, 100, 12, 0 };

	for (int i = 0; i < 5; i++) {
		numHit = hitArr[i];
		numShot = shotArr[i];
		assert((numHit <= numShot) && (numHit >= 0) && (numShot >= 0));
		assert(CalcAccuracy(numHit, numShot) == result[i]);
	}

	cout << "\n\n======END======\n";
}

int CalcAccuracy(int hit, int shot) {
	if (shot == 0)
		return 0;
	return hit / shot;
}