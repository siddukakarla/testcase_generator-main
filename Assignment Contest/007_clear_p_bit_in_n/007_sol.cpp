#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("t1.txt");
	ofstream fout;
	fout.open("o1.txt");

	int t;
	cin >> t;
	while (t--) {
		int n, p;
		cin >> n >> p;
		if ((n & (1 << p)) != 0) {
			cout << (n ^ (1 << p)) << endl;
		} else {
			cout << n << endl;
		}
	}


	return 0;
}

