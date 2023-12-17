#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("2_t2.txt");
	ofstream fout;
	fout.open("2_o2.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ar[n];
		int M = 1000000007;
		for (int i = 0; i < n; i++) {
			cin >> ar[i];
		}
		sort(ar, ar + n);
		ll res = 0;
		int count = 0;
		for (int i = n - 1; i >= 0; i--) {
			res = (res + (ll)max(ar[i] - count, 0)) % M;
			count++;
		}
		cout << res << endl;
	}


	return 0;
}

