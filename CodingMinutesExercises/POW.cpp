#include "stdc++.h"
using namespace std;

int mod(int num) {
	if (num < 0) return -1 * num;
	else return num;
}

string solve(int A, int B, int C) {
	if (A > 0 && B > 0) {
		if (A > B) return ">";
		else if (B > A) return "<";
		else return "=";
	}
	else if (A < 0 && B>0 || A > 0 && B < 0) {
		if (C & 1 == 1) { //odd power
			if (A > B) return ">";
			else if (B > A) return "<";
			else return "=";
		}
		else {
			if (mod(A) > mod(B)) return ">";
			else if (mod(B) > mod(A)) return "<";
			else return "=";
		}
	}
	else { //both negative
		if (C & 1 == 1) { //odd power
			if (A > B) return ">";
			else if (B > A) return "<";
			else return "=";
		}
		else {
			if (mod(A) > mod(B)) return ">";
			else if (mod(B) > mod(A)) return "<";
			else return "=";
		}
	}
}

int mainPOW() {
	
	cout << solve(3, 2, 4) << endl; //">"
	cout << solve(-7, 7, 2) << endl; //"="
	cout << solve(-2, -3, 2) << endl; //"<"


	return 0;
}


/* DO INSTRUTOR DO CURSO
#include<bits/stdc++.h>
using namespace std;

string solve(int A,int B, int C){
	int sign1=(A<0 && C%2);
	int sign2=(B<0 && C%2);
	string ans;
	if(sign1!=sign2){
		ans=sign1? "<": ">";
	}
	else{
		if(abs(A)==abs(B)){
			ans="=";
		}
		else if((abs(A)<abs(B)) ^ sign1){
			ans="<";
		}
		else{
			ans=">";
		}
	}
	return ans;
}

*/