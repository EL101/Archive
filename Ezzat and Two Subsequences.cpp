// Ezzat and Two Subsequences
// Codeforces: https://codeforces.com/contest/1557/problem/A
// Author: ETL
// Submitted: Sep/09/2021 19:01	
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        ll arr[n];
        ll sum=0;
        for (int i=0; i<n; i++) {
            cin>>arr[i];
            sum+=arr[i];
        }
        ll max=arr[0];
        for (int i=0; i<n; i++) {
            if (arr[i]>max) {
                max=arr[i];
            }
        }
        ll middle=sum/2.0;
        ll sum2=sum-max;
        double ans=max+(sum-max)/(double)(n-1);
        printf("%.9f\n", ans);
    }
}