// Ordinary Numbers
// Codeforces: https://codeforces.com/contest/1520/problem/B
// Author: ETL
// Submitted: Aug/13/2021 23:35	
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n, ans=0;
        cin>>n;
        for (int i=1; i<10; i++) {
            long long k=i;
            while (k<=n) {
                ans++;
                k=k*10+i;
            }
        }
        cout<<ans<< endl;
    }
    return 0;
}