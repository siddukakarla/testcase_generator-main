#include<bits/stdc++.h>
#include "../../testcase.cpp"
using namespace std;

void helper(ofstream& fout, int t, int maxSize, int m, int M) {
	fout << t << endl;
	while (t--) {
		usi mp;
		vpll ar;
		int n = getRand(1, maxSize);

		FOR(i, n) {

			int a = getRand(m, M);
			while (mp.find(a) != mp.end()) a = getRand(m, M);
			mp.insert(a);

			int b = getRand(m, M);
			while (mp.find(b) != mp.end()) b = getRand(m, M);
			mp.insert(b);

			int c = getRand(m, M);
			while (mp.find(c) != mp.end()) c = getRand(m, M);
			mp.insert(c);

			int d = getRand(m, M);
			while (mp.find(d) != mp.end()) d = getRand(m, M);
			mp.insert(d);

			ar.pb(make_pair(a, b));
			ar.pb(make_pair(a, c));
			ar.pb(make_pair(d, b));
			ar.pb(make_pair(d, c));

		}
		shuffle(ar);
		int ele = getRand(0, ar.size() - 1);
		fout << n << endl;
		FOR(i, ar.size()) {
			if (i != ele)
				fout << ar[i].first << " " << ar[i].second << endl;
		}

	}
}

int main() {

	ofstream fout;
	fout.open("1_t2.txt");

	// helper(fout, 2, 3, 1, 17);
	// helper(fout, 1e1, 1e5, 1, 1e9);
	helper(fout, 1e2, 1e4, 1, 1e9);


	return 0;
}


/*
#define cin fin
#define cout fout

ifstream fin("sampleout.txt");
ofstream fout;
fout.open("sample.txt");

*/