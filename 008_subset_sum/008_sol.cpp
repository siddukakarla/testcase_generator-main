#include<bits/stdc++.h>
#include "../../testcase.cpp"

#define cin fin
#define cout fout
using namespace std;

bool subsets(vi& ar, int i, int n, ll sum, ll k) {
	if (i == n) {
		return sum == k;
	}
	return subsets(ar, i + 1, n, sum, k) || subsets(ar, i + 1, n, sum + ar[i], k);
}

int main() {
	ifstream fin("t3.txt");
	ofstream fout;
	fout.open("o3.txt");

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vi ar(n);
		FOR(i, n) cin >> ar[i];
		if (subsets(ar, 0, n, 0, k)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	return 0;
}

