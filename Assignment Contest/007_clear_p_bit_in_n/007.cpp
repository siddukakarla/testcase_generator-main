#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ofstream& fout, ll t, ll m, ll M) {
	fout << t << endl;
	while (t--) {
		fout << getRand(m, M - 1) << " " << getRand(1, 31) << endl;
	}
}

int main() {

	ofstream fout;
	fout.open("t1.txt");

	//sample
	// helper(fout, 5, 1, 32);

	//sample
	helper(fout, 1e5, 1, 1e9);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/