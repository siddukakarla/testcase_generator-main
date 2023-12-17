#include<bits/stdc++.h>
#include "testcase.cpp"

using namespace std;
int main() {
	fio;
	ofstream fout;
	fout.open("test/outfile.txt");
	ll n = 1e3, m = 1, M = 1e18;

	// increasingRandom(fout, n, m, M);
	// increasingContigous(fout, n, m, M);
	// decreasingRandom(fout, n, m, M);
	// decreasingContigous(fout, n, m, M);
	// singleElementArray(fout, n);
	// intervalShuffle(fout, n);
	// int k = getRand(m, n + 1);
	// while (n % k != 0) k = getRand(m, n);
	// fout << k << endl;
	// eleKTimesRepeat(fout, n, k, m, M, true);
	// randomArray(fout, n, m, M);
	// randomArray(fout, n, m, M);
	// randomArray(fout, n, m, M);
	// maxTestCase(fout, n, M);
	singleNumber(fout, n);

	return 0;
}