#include <bits/stdc++.h>
#define cin fin
#define cout fout

using namespace std;

int util(int n)
{
    return log2(n & -n) + 1;
}

int solve(int n)
{
    if (n == 0)
        return 1;

    if ((n & (n + 1)) == 0)
        return -1;

    return util(~n);
}

int main()
{
    ifstream fin("t1.txt");
    ofstream fout;
    fout.open("o1.txt");

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}