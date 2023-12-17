#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("sample.txt");
	ofstream fout;
	fout.open("sampleout.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << (n & (n - 1)) << endl;
	}


	return 0;
}

