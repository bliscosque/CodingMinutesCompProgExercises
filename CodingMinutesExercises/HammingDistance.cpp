#include"stdc++.h"
using namespace std;

int hammingDistance(int x, int y) {
	int count = 0;
	while (x > 0 || y > 0) {
		if ((x & 1) != (y & 1)) count++; //ultimo digito � diferente
		x = x >> 1; 
		y =y >> 1;
	}
	return count;
}

int mainHD() {
	cout << hammingDistance(1, 4);
}