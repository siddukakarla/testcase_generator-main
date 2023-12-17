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
		int n , k;
		cin >> n >> k;
		if (((n >> k) & 1) == 1) cout << "SET" << endl;
		else cout << "UNSET" << endl;
	}

	return 0;
}

