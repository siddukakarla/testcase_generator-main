#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

int main() {

	ofstream fout;
	fout.open("2_t2.txt");

	// multipleRandomArrays(fout, 5, 17, 1, 50);
	// multipleRandomArrays(fout, 10, 1e3, 1, 1e9);
	multipleRandomArrays(fout, 25, 1e5, 1, 1e9);

	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/