#include<bits/stdc++.h>
#include "../../testcase.cpp"
#define cin fin
#define cout fout

using namespace std;
int main() {
	ifstream fin("1_t2.txt");
	ofstream fout;
	fout.open("1_o2.txt");

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int x (0), y(0);

		int m = 4 * n - 1;

		FOR(i, m) {
			int a, b;
			cin >> a >> b;
			x ^= a;
			y ^= b;
		}
		cout << x << " " << y << endl;

	}


	return 0;
}

