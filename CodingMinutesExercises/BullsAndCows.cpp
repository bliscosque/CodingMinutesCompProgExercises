#include<iostream>
#include<map>
#include<string>

using namespace std;


string getHint(string secret, string guess) {
	map<char, int> mS, mG;
	int bulls = 0, cows = 0;
	for (int i=0;i<secret.size();i++) {
		if (secret[i] == guess[i]) {
			bulls++;
		}
		else {
			mS[secret[i]]++;
			mG[guess[i]]++;
		}
	}
	for (auto x : mS) {
		cows += min(x.second, mG[x.first]);
	}
	//cout << bulls << " " <<cows;

	string ret = to_string(bulls) + "A" + to_string(cows) + "B";
	return ret;
}

int mainBAC() {
	cout << getHint("1123", "0111");
	return 0;
}