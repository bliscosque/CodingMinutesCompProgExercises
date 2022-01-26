#include "stdc++.h"
using namespace std;

int countTriplets(vector<int> nums) {
	int t = 0;
	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums.size(); j++) {
			for (int k = 0; k < nums.size(); k++) {
				if ((nums[i] & nums[j] & nums[k]) == 0) t++;
			}
		}

	}
	return t;
}

int mainTZ() {
	vector<int> nums = { 2,1,3 };
	cout << countTriplets(nums);
	return 0;
}