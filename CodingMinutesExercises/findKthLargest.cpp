#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;

int findKthLargest(vector<int> nums, int k) {
	sort(nums.begin(), nums.end(), greater<>());
	//for (int i : nums) cout << i << " ";
	return nums[k-1];
}
int mainFkle() {
	vector<int> nums = { 3,2,3,1,2,4,5,5,6 };
	cout << findKthLargest(nums, 4) << endl;
	return 0;
}