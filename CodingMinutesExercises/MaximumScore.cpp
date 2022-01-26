#include "stdc++.h"
using namespace std;

int calc(vector<vector<int>> grid) {
	int soma = 0;
	for (vector<int> lin : grid) {
		int sLin = 0;
		int pot = 0;
		for (int i = lin.size() - 1; i >= 0;i--) {
			sLin += (1 << pot) * lin[i];
			pot++;
		}
		//cout << "sLin: " << sLin << endl;
		soma += sLin;
	}
	return soma;
}

int reverseLine(vector<vector<int>> &grid, int line) {
	//for (int i=0;i<grid.)
	return 0;
}

int matrixScore(vector<vector<int>> grid) {
	int somaAt = calc(grid);
	for (int i = 0; i < grid.size(); i++) {

	}

	return somaAt;
}
int mainMS() {
	vector<vector<int>> grid = { {0,0,1,1},
		{1,0,1,1},
		{1,1,0,0}
	};

	matrixScore(grid);


	return 0;
}