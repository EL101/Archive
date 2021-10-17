// Odd Set
// Codeforces: https://codeforces.com/contest/1542/problem/A
// Author: ETL
// Submitted: Aug/17/2021 22:41	
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> odd, even;
        for (int i=0; i<2*n; i++) {
            int a;
            cin>>a;
            if (a%2==0) {
                even.push_back(a);
            }
            else {
                odd.push_back(a);
            }
        }
        if (even.size()==odd.size()) {
            cout<<"Yes"<< endl;
        }
        else {
            cout<<"No"<< endl;
        }
    }
}