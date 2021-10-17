// Cherry
// Codeforces: https://codeforces.com/contest/1554/problem/A
// Author: ETL
// Submitted: Aug/14/2021 00:01	
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n, ans=0;
        cin>>n;
        long long arr[n+3];
        for (int i=0; i<n; i++)cin>>arr[i];
        for (int i=0; i<n-1; i++) {
            ans=max(ans, arr[i]*arr[i+1]);
        }
        cout<<ans<< endl;
    }
}