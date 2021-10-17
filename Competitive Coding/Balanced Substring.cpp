#include <bits/stdc++.h>
using namespace std;

bool balanced(string s) {
    int count1=0;
    int count2=0;
    for (int i=0; i<s.size(); i++) {
        if (s.at(i)=='a') {
            count1++;
        }
        else {
            count2++;
        }
    }
    return (count1==count2);
}
bool goodString(string s) {
    int count1=0;
    int count2=0;
    for (int i=0; i<s.size(); i++) {
        if (s.at(i)=='a') {
            count1++;
        }
        else {
            count2++;
        }
    }
    if (count1==s.size() || count2==s.size()) {
        return false;
    }
    else {
        return true;
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
        if (n==1) {
            cout<<-1<<" "<<-1<< endl;
        }
        else if (goodString(s)==false) {
            cout<<-1<<" "<<-1<< endl;
        }
        else {
            bool broke=false;
            for (int i=0; i<n-1; i++) {
                if (s.at(i)=='a' && s.at(i+1)=='b') {
                    cout<<i+1<<" "<<i+2<< endl;
                    break;
                }
                else if (s.at(i)=='b' && s.at(i+1)=='a') {
                    cout<<i+1<<" "<<i+2<< endl;
                    break;
                }
            }
        }
    }
}