#include "stdc++.h"
using namespace std;


int hammingDistance2(int x, int y) {
	int count = 0;
	while (x > 0 || y > 0) {
		if ((x & 1) != (y & 1)) count++; //ultimo digito é diferente
		x = x >> 1;
		y = y >> 1;
	}
	return count;
}

int totalHammingDistance(vector<int> nums) {
	int tHD = 0;
	for (int i = 0; i < nums.size() - 1; i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			tHD += hammingDistance2(nums[i], nums[j]);
		}
	}
	return tHD;
}

int mainTHD() {
	vector<int> nums = { 4,14,2 };
	cout << totalHammingDistance(nums);

	return 0;
}