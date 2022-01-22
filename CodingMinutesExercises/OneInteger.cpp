#include<set>
#include <vector>
#include <iostream>
using namespace std;

int solve(vector<int> nums) {
	multiset<int> ms;
	for (int i : nums) {
		ms.insert(i);
	}
	int cost = 0;
	while (ms.size() > 1) {
		int n = *(ms.begin());
		ms.erase(ms.begin());
		n += *(ms.begin());
		ms.erase(ms.begin());
		ms.insert(n);
		cost += n;
		cout << endl;
		//for (auto x : ms) cout << x << " ";
	}
	return cost;
}
int mainOI() {
	vector<int> nums = { 1,2,3,4,5 };
	cout << solve(nums);

	return 0;
}