#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;


void helper(ofstream& fout, ll t, ll k, ll size, ll m, ll M) {
	fout << t << endl;
	ll temp = size;
	while (t--) {
		int n = getRand(m, temp);
		while (n % k != 1) n = getRand(m, temp);
		nonRepeating(fout, n, k, m, M);
	}
}

int main() {

	ofstream fout;
	fout.open("t2.txt");


	//sample
	// helper(fout, 5, 3, 15, 1, 15);

	//t1
	// helper(fout, 1e3, 3, 1e3, 1, 1e6);

	// t2
	helper(fout, 10, 3, 2e5, 1, 1e6);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/