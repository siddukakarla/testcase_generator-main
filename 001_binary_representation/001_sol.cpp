#include<bits/stdc++.h>
using namespace std;
#define cin fin
#define cout fout


ifstream fin("t2.txt");

void tobinary(ofstream& fout, long long int n) {
    if (n == 0) {
        fout << 0 << endl;
        return;
    }
    char c[32] = {0};
    int i = 0;
    while (n != 0) {
        if (n & 1 == 1) {
            c[i] = '1';
        } else {
            c[i] = '0';
        }
        n = n >> 1;
        i++;
    }
    //printf("i = %d\n", i);
    int b = 0, l = i - 1;
    while (b < l) {
        char temp = c[b];
        c[b] = c[l];
        c[l] = temp;
        b++;
        l--;
    }
    fout << c << endl;
}

int main() {

    ofstream fout;
    fout.open("o2.txt");

    int t;
    fin >> t;
    for (int x = 0; x < t; x++) {
        long long int n;
        fin >> n;
        tobinary(fout, n);
    }
    fout.close();
}