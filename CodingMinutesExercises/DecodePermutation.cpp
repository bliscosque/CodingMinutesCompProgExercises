#include "stdc++.h"
using namespace std;

vector<int> decode(vector<int> encoded) {
	int n = encoded.size()+1;
	
	vector<int> perm;
	for (int i = 1; i <= n; i++)
		perm.push_back(i);

	do {
		int valid = true;
		for (int i = 0; i < perm.size()-1; i++) {
			int m = perm[i] ^ perm[i + 1];
			if (m != encoded[i]) {
				valid = false;
				break;
			}
		}
		if (valid) break;

	} while (next_permutation(perm.begin(), perm.end()));
	return perm;
}

int mainDP() {
	vector<int> encoded = { 3,1 };
	vector<int> perm = decode(encoded);
	for (auto i : perm) cout << i << " ";
	return 0;
}



/* RESPOSTA DO AUTOR DO CURSO
#include<bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> encoded) {
	int val = 0, val1 = 0, n = encoded.size();
	vector<int>ans(n + 1);
	for (int i = 1; i <= n + 1; i++)
	{
		val1 ^= i;
	}
	for (int i = 0; i < n; i++)
	{
		if (i % 2)
		{
			val ^= encoded[i];
		}
	}
	ans[0] = val ^ val1;
	for (int i = 1; i <= n; i++)
	{
		ans[i] = ans[i - 1] ^ encoded[i - 1];
	}
	return ans;
}

*/