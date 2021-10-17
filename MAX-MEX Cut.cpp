// MAX-MEX Cut
// Codeforces: https://codeforces.com/contest/1566/problem/C
// Author: ETL
// Submitted: Sep/12/2021 19:11	
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        string row1, row2;
        cin>>row1>>row2;
        int ans=0;
        int arr[n][2];
        for (int i=0; i<n; i++) {
            arr[i][0]=row1[i];
            arr[i][1]=row2[i];
        }
        for (int i=0; i<n; i++) {
            if (arr[i][0]=='0') {
                if (arr[i][1]=='0') {
                    if (i<n-1) {
                        bool yep=false;
                        if (arr[i+1][0]=='1' && arr[i+1][1]=='1') {
                            ans+=2;
                            i++;
                            yep=true;
                        }
                        else {
                            ans++;
                        }
                    }
                    else {
                        ans++;
                    }
                }
                else if (arr[i][1]=='1') {
                    ans+=2;
                }
                else {
                    ans+=1;
                }
            }
            else if (arr[i][0]=='1') {
                if (arr[i][1]=='0') {
                    ans+=2;
                }
                else if (arr[i][1]=='1') {
                    if (i<n-1) {
                        if (arr[i+1][0]=='0' && arr[i+1][1]=='0') {
                            ans+=2;
                            i++;
                        }
                    }
                }
                else {
                    ans+=0;
                }
            }
            else {
                if (arr[i][1]=='0') {
                    ans+=1;
                }
                else if (arr[i][1]=='1') {
                    ans+=0;
                }
                else {
                    ans+=1;
                }
            }
        }
        cout<<ans<<"\n";
    }
}