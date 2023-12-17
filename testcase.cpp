#include "testlib.h"
#include <iostream>
#define endl "\n"
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define lll __uint128_t
#define vi vector<int>
#define vvi vector<vector<int> >
#define vvll vector<vector<ll> >
#define vb vector<bool>
#define vc vector<char>
#define vll vector<ll>
#define vstr vector<string>
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define pqmax(x) priority_queue<x>
#define pqmin(x) priority_queue<x, vector<x>, greater<x> >
#define buffer(x) getRand(1,x)
#define sortasc(ar) sort(ar.begin(), ar.end())
#define sortdsc(ar) sort(ar.begin(), ar.end(), greater<ll>())
#define shuffle(ar) random_shuffle(ar.begin(), ar.end())
#define minelement(ar) *min_element(ar.begin(), ar.end())
#define maxelement(ar) *max_element(ar.begin(), ar.end())
#define sumelement(ar) accumulate(ar.begin(), ar.end(), 0)
#define rotatec(ar, k) rotate(ar.begin(), ar.begin()+ar.size()-k, ar.end())
#define rotateac(ar, k) rotate(ar.begin(), ar.begin()-k, ar.end())

#define FOR(i, n) for (auto i = 0; i < n; i++)
#define FOOR(i, j, k) for (auto i = j; i < k; i++)
#define MOD 1000000007

#define umii unordered_map<int, int>
#define umll unordered_map<ll, ll>
#define mii map<int, int>
#define usi unordered_set<int>
#define usll unordered_set<ll>
using namespace std;

// random_device rd;  //Will be used to obtain a seed for the random number engine
// mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()

/**
 *
 *
 *
 * ARRAYS
 * Helper functions for generating the testcases for the array related functions
 *
 *
 *
 *
 */

ll getRand(ll m = 1, ll M = 1000000000)
{
	// uniform_int_distribution<> distrib(m, M);
	// return distrib(gen);
	return rnd.next(m, M);
}

vll getRandomArray(ll n, ll m = 1, ll M = 1e9, bool sorted = false)
{
	vll ar;
	FOR(i, n) ar.pb(getRand(m, M));
	if (sorted) sortasc(ar);
	return ar;
}


vll getRandomArrayPoNe(ll n, ll m = 1, ll M = 1e9, bool sorted = false)
{
	vll ar;
	FOR(i, n) ar.pb(getRand(m, M));
	if (sorted) sortasc(ar);
	ll x = maxelement(ar) >> 1;
	FOR(i, n) ar[i] -= x;
	return ar;
}


vvll getRandomMatrix(ll x, ll y, ll m, ll M, bool pone = false) {
	vvll res;
	FOR(i, x) {
		if (!pone) {
			res.pb(getRandomArray(y, m, M));
		} else {
			res.pb(getRandomArrayPoNe(y, m, M));
		}
	}
	return res;
}


string getRandomString(ll n)
{
	return rnd.next("[a-z]{" + to_string(n) + "}");
}

vll getRandomArrayNoDup(ll n, ll m = 1, ll M = 1e9, bool sorted = false)
{
	vll ar;
	usll s;
	FOR(i, n)
	{
		ll ele = getRand(m, M);
		while (s.find(ele) != s.end())
			ele = getRand(m, M);
		s.insert(ele);
		ar.pb(ele);
	}
	if (sorted) sortasc(ar);
	return ar;
}

void printpair(ofstream& fout, pll x) {
	fout << x.first << " " << x.second;
}

pll getRandomPair(ll m = 1, ll M = 1e9) {
	return make_pair(getRand(m, M), getRand(m, M));
}

void multipleRandomPair(ofstream& fout, ll t, ll diff, ll m = 1, ll M = 1e9) {
	fout << t << endl;
	while (t--) {
		ll n = getRand(m, M);
		ll m = getRand(1, n);
		fout << n << " " << m << endl;
	}
}

void rangeRandomPairMultiple(ofstream& fout, ll t, ll m1 = 1, ll M1 = 1e9, ll m2 = 1, ll M2 = 1e9) {
	fout << t << endl;
	while (t--) {
		ll n = getRand(m1, M1);
		ll m = getRand(m2, M2);
		fout << n << " " << m << endl;
	}
}

vll increasingContigous(ofstream &fout, ll n, ll m = 1, ll M = 1e9)
{
	vll ar;
	for (ll i = m; i < (m + n); i++)
	{
		ar.pb(i);
	}
	return ar;
}

void decreasingContigous(ofstream &fout, ll n, ll m = 1, ll M = 1e9)
{
	fout << n << endl;
	for (ll i = (m + n - 1); i >= m; i--)
	{
		fout << i << " ";
	}
	fout << endl;
}

void intervalShuffle(ofstream &fout, ll n, ll m = 1)
{
	fout << n << endl;

	vll ar;
	for (ll i = m; i < (m + n); i++)
	{
		ar.push_back(i);
	}
	random_shuffle(ar.begin(), ar.end());
	FOR(i, ar.size())
	fout << ar[i] << " ";
	fout << endl;
}

void increasingRandom(ofstream &fout, ll n, ll m = 1, ll M = 1e9)
{
	fout << n << endl;
	vll ar;
	// usll s;
	FOR(i, n)
	{
		ll ele = getRand(m, M);
		ar.push_back(ele);
	}
	sortasc(ar);
	FOR(i, n)
	fout << ar[i] << " ";
	fout << endl;
}

void decreasingRandom(ofstream &fout, ll n, ll m = 1, ll M = 1e9)
{
	fout << n << endl;
	vll ar;
	FOR(i, n)
	ar.push_back(getRand(m, M));
	sortdsc(ar);
	FOR(i, n)
	fout << ar[i] << " ";
	fout << endl;
}

void singleElementArray(ofstream &fout, ll n, ll ele = getRand(1, 1e9))
{
	fout << n << endl;
	FOR(i, n)
	fout << ele << " ";
	fout << endl;
}

void eleKTimesRepeat(ofstream &fout, ll n, ll k, ll m = 1, ll M = 1e9, bool sorted = false)
{
	fout << n << endl;
	vll ar;
	FOR(i, (n / k))
	{
		ll ele = getRand(m, M);
		FOR(j, k)
		ar.pb(ele);
	}
	// if (getRand(1, 3) & 1) {
	// 	ar[0] = 1e9;
	// }
	if (!sorted)
		random_shuffle(ar.begin(), ar.end());
	else
		sortasc(ar);
	FOR(i, ar.size()) fout << ar[i] << " ";
	fout << endl;
}

void randomArray(ofstream &fout, ll n, ll m = 1, ll M = 1e9)
{
	fout << n << endl;
	vll ar;
	FOR(i, n)
	ar.pb(getRand(m, M));
	shuffle(ar);
	FOR(i, n)
	fout << ar[i] << " ";
	fout << endl;
}

void maxTestCase(ofstream &fout, ll n, ll M = 1e9)
{
	fout << 1 << endl;
	fout << n << endl;
	FOR(i, n)
	fout << M << " ";
	fout << endl;
}

void t1t2(ofstream &fout, ll n, int m, int M)
{
	fout << 10 << endl;
	increasingRandom(fout, n, m, M);
	increasingContigous(fout, n, m, M);
	decreasingRandom(fout, n, m, M);
	decreasingContigous(fout, n, m, M);
	singleElementArray(fout, n, getRand(m, M));
	intervalShuffle(fout, n);
	int k = getRand(m, M);
	while (n % k != 0)
		k = getRand(m, n);
	eleKTimesRepeat(fout, n, k, m, M);
	randomArray(fout, n, m, M);
	randomArray(fout, n, m, M);
	randomArray(fout, n, M);
}

void singleNumber(ofstream &fout, ll n, ll m = 1, ll M = 1e9)
{
	fout << n << endl;
	FOR(i, n)
	fout << getRand(m, M) << endl;
}

void singleNumberWithoutDup(ofstream &fout, ll n, ll m = 1, ll M = 1e9)
{
	fout << n << endl;
	usll s;
	FOR(i, n)
	{
		int ele = getRand(m, M);
		while (s.find(ele) != s.end())
			ele = getRand(m, M);
		fout << ele << endl;
		s.insert(ele);
	}
}

ll replaceZeroOne(ofstream &fout, int x)
{
	string s = to_string(x);
	FOR(i, s.length())
	{
		if ((s[i] == '0') || (s[i] == '1'))
			s[i] = '8';
	}
	ll res = 0;
	FOR(i, s.length())
	res = (res * 10) + (s[i] - '0');
	return res;
}

void singleNumberWithoutZeroOne(ofstream &fout, ll n, ll m = 1, ll M = 1e9)
{
	fout << n << endl;
	FOR(i, n)
	{
		ll x = getRand(m, M);
		x = replaceZeroOne(fout, x);
		fout << x << endl;
	}
}

void nonRepeating(ofstream &fout, ll n, ll k, ll m = 1, ll M = 1e9, bool sorted = false)
{
	fout << n << endl;
	--n;
	vll ar;
	usll s;
	FOR(i, (n / k))
	{
		ll ele = getRand(m, M);
		while (s.find(ele) != s.end())
			ele = getRand(m, M);
		FOR(j, k)
		ar.pb(ele);
		s.insert(ele);
	}
	int ans = getRand(m, M);
	while (s.find(ans) != s.end())
		ans = getRand(m, M);
	ar.pb(ans);
	if (!sorted)
		shuffle(ar);
	else
		sortasc(ar);
	FOR(i, ar.size())
	fout << ar[i] << " ";
	fout << endl;
}

void pairTestcases(ofstream &fout, ll n, ll m1, ll M1, ll m2, ll M2)
{
	fout << n << endl;
	while (n--)
	{
		fout << getRand(m1, M1) << " " << getRand(m2, M2) << endl;
	}
}

void multipleRandomArraysPoNe(ofstream& fout, ll t, ll maxSize, ll m = 1, ll M = 1e9) {
	fout << t << endl;
	while (t--) {
		int n = getRand(1, maxSize);
		vll ar = getRandomArray(n, m, M);
		ll x = maxelement(ar) >> 1;
		FOR(i, n) ar[i] -= x;
		fout << n << endl;
		FOR(i, n) fout << ar[i] << " "; fout << endl;
	}
}

void multipleRandomArrays(ofstream &fout, ll t, ll maxSize, ll m = 1, ll M = 1e9)
{
	fout << t << endl;
	while (t--)
	{
		int n = getRand(m, maxSize);
		if (n == 1) n = getRand(m, maxSize);
		randomArray(fout, n, m, M);
	}
}

void multipleRandomArraysNoDup(ofstream &fout, ll t, ll maxSize, ll m = 1, ll M = 1e9)
{
	fout << t << endl;
	while (t--)
	{
		int n = getRand(m, maxSize);
		if (n == 1) n = getRand(m, maxSize);
		fout << n << endl;
		vll ar = getRandomArrayNoDup(n, m, M);
		FOR(i, ar.size()) fout << ar[i] << " ";
		fout << endl;
	}
}

void multipleArraysOneParam(ofstream &fout, ll t, ll maxSize, ll m = 0, ll M = 1e9, bool noDup = false, bool sorted = false)
{
	fout << t << endl;
	while (t--)
	{
		int n = getRand(1, maxSize);
		vll res ;
		if (noDup) {
			res = getRandomArrayNoDup(n, m, M);
		} else {
			res = getRandomArray(n, m, M);
		}
		if (sorted)
			sortasc(res);
		int k = getRand(1, n);
		fout << n << " " << k << endl;
		FOR(i, n)
		fout << res[i] << " ";
		fout << endl;
	}
}

void multipleArraysTwoParam(ofstream &fout, ll t, ll maxSize, ll m = 0, ll M = 1e9, bool sorted = false)
{
	fout << t << endl;
	while (t--)
	{
		int n = getRand(1, maxSize);
		vll res = getRandomArrayNoDup(n, m, M);
		if (sorted)
			sortasc(res);
		int k = getRand(1, n);
		ll x = res[getRand(0, n - 1)];
		fout << n << " " << k << " " << x << endl;
		FOR(i, n)
		fout << res[i] << " ";
		fout << endl;
	}
}

void arrayWithPairSum(ofstream &fout, ll n, int f, ll m = 1, ll M = 1e9)
{
	vll res = getRandomArray(n - 2, m, M);
	ll a = getRand(m, M), b = getRand(m, M);
	res.pb(a);
	res.pb(b);
	ll k = a + b;
	if ((f == 1) && (getRand(m, M) & 1))
		k = minelement(res);
	shuffle(res);
	fout << n << " " << k << endl;
	FOR(i, n)
	fout << res[i] << " ";
	fout << endl;
}

void multipleArrayWithPairSum(ofstream &fout, ll t, ll maxSize, ll m = 1, ll M = 1e9)
{
	fout << t << endl;
	while (t--)
	{
		ll n = getRand(1, maxSize);
		arrayWithPairSum(fout, n, t & 1, m, M);
	}
}

void subsetSumTestCases(ofstream &fout, ll t, ll maxSize, ll m = 3, ll M = 1e9)
{
	fout << t << endl;
	while (t--)
	{
		int n = getRand(3, maxSize);
		int sum = 0, count = getRand(1, n - 1);
		usi s;
		vll ar;
		FOR(i, n)
		ar.pb(getRand(m, M));

		while (count--)
		{
			int i = getRand(1, n - 1);
			while (s.find(i) != s.end())
				i = getRand(1, n - 1);
			s.insert(i);
			sum += ar[i - 1];
		}
		if (t & 1)
			sum += M;
		fout << n << " " << sum << endl;
		FOR(i, n)
		fout << ar[i] << " ";
		fout << endl;
	}
}

void twoArraysNoCommonElements(ofstream &fout, ll t, ll s1, ll s2, ll m = 1, ll M = 1e9)
{
	fout << t << endl;
	while (t--)
	{
		int n1 = getRand(1, s1);
		int n2 = getRand(1, s2);
		if (!((n1 + n2) & 1))
			n1++;
		vi ar, br;
		usll s;
		FOR(i, n1)
		{
			int ele = getRand(m, M);
			while (s.find(ele) != s.end())
				ele = getRand(m, M);
			ar.pb(ele);
			s.insert(ele);
		}
		FOR(i, n2)
		{
			int ele = getRand(m, M);
			while (s.find(ele) != s.end())
				ele = getRand(m, M);
			s.insert(ele);
			br.pb(ele);
		}
		sortasc(ar);
		sortasc(br);
		fout << n1 << " " << n2 << endl;
		FOR(i, ar.size())
		fout << ar[i] << " ";
		fout << endl;

		FOR(i, br.size())
		fout << br[i] << " ";
		fout << endl;
	}
}

void randomStrings(ofstream &fout, ll t, ll maxSize)
{
	fout << t << endl;
	while (t--)
	{
		if (t & 1)
		{
			fout << rnd.next("[a-z]{" + to_string(getRand(1, maxSize)) + "}") << endl;
		}
		else
		{
			fout << rnd.next("[a-y]{" + to_string(getRand(1, maxSize)) + "}") << endl;
		}
	}
}

void twoStringsMultiple(ofstream &fout, ll t, ll maxSize)
{
	fout << t << endl;
	while (t--)
	{
		int n = getRand(1, maxSize);
		string x = rnd.next("[a-z]{" + to_string(n) + "}");
		fout << x << " ";
		int m = getRand(1, maxSize);
		string y = rnd.next("[a-z]{" + to_string(m) + "}");
		fout << y << endl;
	}
}

void stringSubstringMultiple(ofstream &fout, ll t, ll maxSize)
{
	fout << t << endl;
	while (t--)
	{
		int n = getRand(1, maxSize);
		// cout << "a" << endl;
		// while(n != 0)n= getRand(1, maxSize);
		int k = getRand(1, n);
		// cout << "b" << endl;
		// while(k != 0) k = getRand(1, n/2);
		// while((n-k) <= 0) k = getRand(1, n/2);
		string t = getRandomString(n - k);
		// cout << "c" << endl;
		string p = getRandomString(k);
		// cout << "d" << endl;
		int idx = getRand(0, t.length());
		// cout << "e" << endl;
		string res = "";
		FOR(i, idx) res += t[i];
		if (getRand(1, 2) & 1) res += p;
		else res += getRandomString(k);
		for (int i = idx; i < t.length(); i++) res += t[i];
		fout << res << " " << p << endl;
	}
}

void typeQueries(ofstream& fout, ll t, ll m1, ll M1, ll m2, ll M2) {
	fout << t << endl;
	while (t--) {
		int x =  getRand(m1, M1);
		int y =  getRand(m2, M2);
		if (x == 1)
			fout << x << " " << y << endl;
		else
			fout << x << endl;
	}
}

/*  Graph Test cases */

vpll generateTree(ll n, ll t = 0) {
	vector<ll> p(n);
	/* setup parents for vertices 1..n-1 */
	FOR(i, n) if (i > 0) p[i] = rnd.wnext(i, t);
	/* shuffle vertices 1..n-1 */
	vector<ll> perm(n);
	FOR(i, n) perm[i] = i;
	random_shuffle(perm.begin() + 1, perm.end());
	/* put edges considering shuffled vertices */
	vpll edges;
	for (int i = 1; i < n; i++)
		if (rnd.next(2))
			edges.push_back(make_pair(perm[i] + 1, perm[p[i]] + 1 ));
		else
			edges.push_back(make_pair(perm[p[i]] + 1, perm[i] + 1));
	/* shuffle edges */
	shuffle(edges);
	return edges;
}


vpll generateGraph(ll v, ll e) {
	vpll edges;
	set<pll> us;
	while (e--) {
		pll t1 = getRandomPair(1, v);
		pll t2 = make_pair(t1.second, t1.first);
		while ((us.find(t1) != us.end()) || (us.find(t2) != us.end()) || (t1.first == t1.second)) {
			t1 = getRandomPair(1, v);
			t2 = make_pair(t1.second, t1.first);
		}
		edges.pb(t1); us.insert(t1);
	}
	shuffle(edges);
	return edges;
}



