#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int distributeCandies(vector<int> candies) {
	map<int, int> m;
	for (int i: candies) {
		m[i]++;
	}
	return(min(m.size(), candies.size() / 2));

}

int mainDC() {
	vector<int> candies = { 1,1,2,2,3,3 };
	cout << distributeCandies(candies);
	return 0;
}