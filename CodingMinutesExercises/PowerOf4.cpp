#include<iostream>
using namespace std;

bool isPowerOfFour(int n) {
	int mask = (3);
	if ((mask & n)==0) return true;
	return false;
}
int main() {
	cout << isPowerOfFour(16) << endl;
	cout << isPowerOfFour(5) << endl;
}
