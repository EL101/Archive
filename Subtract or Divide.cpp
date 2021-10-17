// Subtract or Divide
// Codeforces: https://codeforces.com/contest/1451/problem/A
// Author: ETL
// Submitted: Sep/02/2021 18:31	
#include <bits/stdc++.h>
#include <cmath>
typedef long long ll;
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        if (n==1) {
            cout<<0<< endl;
        }
        else if (n==2) {
            cout<<1<< endl;
        }
        else if (n==3) {
            cout<<2<< endl;
        }
        else {
            if (n%2==0) {
                cout<<2<< endl;
            }
            else {
                cout<<3<< endl;
            }
        }
    }
}