#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
    string s;
    cin>>s;
    set<string> Set;
    for (int i=0; i<s.size(); i++) {
        Set.insert(s.at(i));
    }
    if (Set.size()%2==0) {
        cout<<"CHAT WITH HER!"<< endl;
    }
    else {
        cout<<"IGNORE HIM!"<< endl;
    }
}