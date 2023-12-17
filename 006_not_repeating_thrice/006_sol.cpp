#include<bits/stdc++.h>
#define cin fin
#define cout fout
using namespace std;

int main() {
    ifstream fin("t2.txt");
    ofstream fout;
    fout.open("o2.txt");

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i = i + 3) {
            if ((i + 1 < n) && (a[i] == a[i + 1]))
                continue;
            else
            {
                cout << a[i] << endl;
                break;
            }
        }

    }
    return 0;
}