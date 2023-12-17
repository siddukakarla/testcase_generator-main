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
		int x, y;
		cin >> x >> y;
		cout << (((1 << x) - 1) << y) << endl;
	}


	return 0;
}

