#include<iostream>
#include<vector>
#include<map>
#include<deque>
#include<algorithm>

using namespace std;

vector<int> findClosestElements(vector<int> arr, int k, int x) {
	vector<int> closest_id, closest;
	deque<int> dq;
	int menorIgual = 0;;
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] <= x) menorIgual = i;
		else break;
	}
	//cout << menorIgual << endl;
	int inicio = menorIgual - k;
	if (inicio < 0) inicio = 0;
	int fim = menorIgual + k;
	if (fim > arr.size() -1) fim = arr.size()-1;

	map<int, float> m;
	for (int i = inicio; i <=fim ; i++) {
		m[i] = abs(arr[i] - x);
		//cout << "m de " << i << " " << m[i] << endl;
	}
	for (auto e:m) {

		if (dq.size() < k) {
			dq.push_back(e.first); //dq contem os indices
		}
		else {
			if (m[dq.front()] > e.second) {
				dq.pop_front();
				dq.push_back(e.first);
			}
		}
		//cout << endl << "loop: ";
		//for (auto e : dq) {
		//	cout << e << " ";
		//}
	}

	for (auto x:dq) {
		closest.push_back(arr[x]);
	}
	sort(closest.begin(), closest.end());
	return closest;
}

int main() {
	vector<int> is = { 1,2,3,4,5 };
	vector<int> res = findClosestElements(is, 4, 3);
	cout << endl;
	for (int i : res) {
		cout << i << " ";
	}
	return 0;
}