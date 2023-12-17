#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ofstream& fout, ll t) {
	fout << t << endl;
	while (t--) {
		fout << getRand(0, 15) << " " << getRand(0, 15) << endl;
	}
}

int main() {

	ofstream fout;
	fout.open("t1.txt");

	// helper(fout, 5);

	helper(fout, 1e3);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/