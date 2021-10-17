// PizzaForces
// Codeforces: https://codeforces.com/contest/1555/problem/A
// Author: ETL
// Submitted: Aug/30/2021 23:43	
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        long long a, b, c;
        a=n/6;
        b=n%6;
        if (n<=6) {
            c=15;
        }
        else if (b==0) {
           c=a*15; 
        }
        else if (b<=2) {
            c=a*15+5;
        }
        else if (b<=4) {
            c=a*15+10;
        }
        else {
            c=(a+1)*15;
        }
        cout<<c<< endl;
    }
}