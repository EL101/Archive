// Odd Divisor
// Codforces: https://codeforces.com/contest/1475/problem/A
// Author: ETL
// Submitted: Aug/25/2021 22:32
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        bool breaked=false;
        for (int i=1; i<=60; i++) {
            if (pow(2, i)==n) {
                cout<<"NO"<< endl;
                breaked=true;
                break;
            }
        }
        if (breaked==false) {
            cout<<"YES"<< endl;
        }
    }
}