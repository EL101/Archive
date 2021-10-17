// MIN-MEX Cut
// Codeforces: https://codeforces.com/contest/1566/problem/B
// Author: ETL
// Submitted: Sep/12/2021 18:33	
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int zeros=0;
        int ones=0;
        int twos=0;
        for (int i=0; i<s.length(); i++) {
            if (s.at(i)=='1') {
                ones++;
            }
            else if (s.at(i)=='0') {
                zeros++;
            }
            else {
                twos++;
            }
        }
        if (zeros==s.length()) {
            cout<<1<<"\n";
        }
        else if (ones==s.length()) {
            cout<<0<<"\n";
        }
        else if (twos==s.length()) {
            cout<<0<<"\n";
        }
        else if (zeros==0) {
            cout<<0<<"\n";
        }
        else if (ones==0) {
            cout<<1<<"\n";
        }
        else {
            int count=0;
            int temp=0;
            bool yep=false;
            for (int i=0; i<s.length(); i++) {
                if (s.at(i)=='0') {
                    temp++;
                    yep=true;
                }
                else {
                    if (temp>0) {
                        count++;
                    }
                    temp=0;
                    yep=false;
                }
            }
            if (yep==true) {
                count++;
            }
            if (count<2) {
                cout<<1<<"\n";
            }
            else {
                cout<<2<<"\n";
            }
        }
    }
}