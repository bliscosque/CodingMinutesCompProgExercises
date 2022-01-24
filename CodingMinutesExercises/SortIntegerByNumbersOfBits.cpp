#include "stdc++.h"
#include<algorithm>
using namespace std;


int count_bits_v2(int num) {
	int ans = 0;
	while (num > 0) {
		num = num & (num - 1);
		ans++;
	}
	return ans;
}

vector<int> sortByBits(vector<int> arr) {
	int count_bits = 0;
	vector<pair<int, int>> v;
	vector<int> res;
	for (int i : arr) {
		v.push_back({ count_bits_v2(i),i });
	}
	sort(v.begin(), v.end());
	for (auto i : v) {
		res.push_back(i.second);
	}
	return res;
}

int mainSBB() {
	vector<int> arr = { 0,1,2,3,4,5,6,7,8 };
	vector<int> res = sortByBits(arr);
	for (auto x : res) cout << x << " ";

	return 0;
}



/*
VERSAO DO CURSO: 

#include<bits/stdc++.h>
using namespace std;

bool comp(const int& a, const int& b){
	int c1 = __builtin_popcount(a);
	int c2 = __builtin_popcount(b);
	if(c1 == c2)
		return a < b;
	return c1 < c2;
}

vector<int> sortByBits(vector<int> arr) {
	sort(arr.begin(),arr.end(), comp);
	return arr;
}
*/