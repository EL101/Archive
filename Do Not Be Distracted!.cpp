// Do Not Be Distracted!
// Codeforces: https://codeforces.com/contest/1520/problem/A
// Author: ETL
// Submitted: Aug/30/2021 22:57	
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool broke=false;
        for (int i=0; i<n-1; i++) {
            int count=0;
            for (int j=i+1; j<n; j++) {
                if (s.at(i)==s.at(j)) {
                    count++;
                    if ((j-i)==count) {
                        continue;
                    }
                    else {
                        broke=true;
                        cout<<"NO"<< endl;
                        break;
                    }
                }
            }
            if (broke==true) {
                break;
            }
        }
        if (broke==false) {
            cout<<"YES"<< endl;
        }
    }
}