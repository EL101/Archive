// GCD Sum
// Codeforces: https://codeforces.com/contest/1498/problem/A
// Author: ETL
// Submitted: Aug/25/2021 23:32	
#include <bits/stdc++.h>
using namespace std;

long long sumDigits(long long n) {
    long long sum=0;
    while (n) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        while (1) {
            if (__gcd(n, sumDigits(n))>1) {
                cout<<n<< endl;
                break;
            }
            n++;
        }
    }
}