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
		int n;
		cin >> n;
		ll res = 0;
		FOR(i, n) {
			ll x;
			cin >> x;
			res += x;
		}
		cout << res << endl;
	}

	return 0;
}

