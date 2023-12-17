#include<bits/stdc++.h>
#include "../../testcase.cpp"

using namespace std;
int main() {

	ofstream fout;
	fout.open("t2.txt");

	//sample
	// pairTestcases(fout, 5, 1, 10, 3, 5);

	//t1
	// pairTestcases(fout, 1e2, 1, 1e3, 1, 1e6);

	//t2
	pairTestcases(fout, 1e2, 1, 1e7, 1, 1e14);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/