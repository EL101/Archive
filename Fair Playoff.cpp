// Fair Playoff
// Codeforces: https://codeforces.com/contest/1535/problem/A
// Author: ETL
// Submitted: Sep/08/2021 22:37	
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while (t--) {
        int arr[4];
        for (int i=0; i<4; i++) {
            cin>>arr[i];
        }
        int max1=0;
        int max2=0;
        for (int i=0; i<4; i++) {
            if (arr[i]>max1) {
                max1=arr[i];
            }
        }
        for (int i=0; i<4; i++) {
            if (arr[i]!=max1) {
                if (arr[i]>max2) {
                    max2=arr[i];
                }
            }
        }
        int final1=std::max(arr[0], arr[1]);
        int final2=std::max(arr[2], arr[3]);
        if (final1>final2) {
            if (final1==max1 && final2==max2) {
                cout<<"YES"<< endl;
            }
            else {
                cout<<"NO"<< endl;
            }
        }
        else {
            if (final1==max2 && final2==max1) {
                cout<<"YES"<< endl;
            }
            else {
                cout<<"NO"<< endl;
            }
        }
    }
}