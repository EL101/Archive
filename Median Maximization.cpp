// Median Maximization
// Codeforces: https://codeforces.com/contest/1566/problem/A
// Author: ETL
// Submitted: Sep/12/2021 18:12	
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        ll n, s;
        cin>>n>>s;
        cout<<s/(n/2+1)<<"\n";
    }
}