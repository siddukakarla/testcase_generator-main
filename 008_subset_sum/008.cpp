#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;




int main() {

	ofstream fout;
	fout.open("sample.txt");

	//sample
	subsetSumTestCases(fout, 5, 5, 1, 10);

	//t1
	// subsetSumTestCases(fout, 50, 10, 1, 1e4);

	//t2
	// subsetSumTestCases(fout, 100, 10, 1, 1e8);


	//t3
	// subsetSumTestCases(fout, 10, 20, 1, 1e8);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/

