// Domino Disaster
// Codeforces: https://codeforces.com/contest/1567/problem/A
// Author: ETL
// Submitted: Sep/05/2021 17:49	
#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    if (s=="U") {
        return "D";
    }
    else if (s=="LR") {
        return "LR";
    }
    else if (s=="D") {
        return "U";
    }
    else {
        if (s.at(0)=='U') {
            return "D"+solve(s.substr(1,s.size()-1));
        }
        else if (s.at(0)=='D') {
            return "U"+solve(s.substr(1,s.size()-1));
        }
        else {
            return "LR"+solve(s.substr(2,s.size()-2));
        }
    }
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solve(s)<< endl;
    }
}