#include"stdc++.h"
using namespace std;


int solve(int n) {
	bool ant = false;
	int maxV = 0;
	int parc = 0;
	while (n > 0) {
		int last_bit = (n & 1);
		if (last_bit) {
			if (ant) {
				parc++;
				maxV = max(maxV, parc);
			}
			else {
				parc = 1;
				ant = true;
				maxV = max(maxV, parc);
			}
		}
		else {
			parc = 0;
			ant = false;
		}
		n = n >> 1;
	}
	return maxV;
}

int mainLC1() {
	cout << solve(156);
	return 0;
}