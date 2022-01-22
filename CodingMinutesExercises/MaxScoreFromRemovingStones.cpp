#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int maximumScore(int a, int b, int c) {
	priority_queue<int> pq;
	pq.push(a);
	pq.push(b);
	pq.push(c);
	int pontos = 0;

	while (pq.size() >= 2) {
		int max = pq.top();
		pq.pop();
		int max2 = pq.top();
		pq.pop();
		max--;
		max2--;
		if (max) pq.push(max);
		if (max2) pq.push(max2);
		pontos++;
	}
	return pontos;
}
int mainMSFRS() {
	cout << maximumScore(2, 4, 6);

	return 0;
}