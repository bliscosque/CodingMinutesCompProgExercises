#include "stdc++.h"
using namespace std;

int rangeBitwiseAnd(int left, int right) {
	int bwa = left;
	for (int i = left + 1; i <= right; i++) {
		bwa = bwa & i;
	}
	return bwa;
}

int mainBWA() {
	cout << rangeBitwiseAnd(5, 7) << endl;
	return 0;
}