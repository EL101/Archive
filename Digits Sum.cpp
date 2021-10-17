// Digits Sum
// Codeforces: https://codeforces.com/contest/1553/problem/A
// Author: ETL
// Submitted: Aug/17/2021 23:03	
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n%10==9) {
            cout<<n/10+1<< endl;
        }
        else {
            cout<<n/10<< endl;
        }
    }
}