#include<iostream>
#include<vector>
using namespace std;

vector<int> decode(vector<int> encoded, int first) {
	vector<int> v;
	v.push_back(first);
	for (int i=0;i<encoded.size();i++) {
		v.push_back(v[i] ^ encoded[i]);
	}
	return v;
}
int mainDXORA() {
	vector<int> encoded={1,2,3};
	int first = 1;
	vector<int> v = decode(encoded, first);
	for (auto x : v) cout << x << " ";
	return 0;
}