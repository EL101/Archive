// The Miracle and the Sleeper
// Codeforces: https://codeforces.com/contest/1562/problem/A
// Author: ETL
// Submitted: Aug/26/2021 18:10	
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long l;
        cin>>l;
        long long r;
        cin>>r;
        if ((r/2+1)>=l) {
            cout<<r%(r/2+1)<< endl;
        }
        else {
            cout<<r%l<< endl;
        }
        
    }
}