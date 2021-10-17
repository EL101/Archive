#include <bits/stdc++.h>
using namespace std;

int OnlyZeros(string s) {
    for (int i=0; i<s.length(); i++) {
        if (s[i]!='0') {
            return false;
        }
    }
    return true;
}
void swap(string s, int n, int m) {
    char temp=s[n];
    s[n]=s[m];
    s[m]=temp;
}
int solve(int n, string s) {
    int ans=0;
    while (OnlyZeros(s)==false) {
        if (s[n-1]!='0') {
            ans+=((int)s[n-1]-48);
            s[n-1]='0';
            for (int i=n-1; i>=0; i--) {
                if (s[i]!='0') {
                    swap(s, n-1, i);
                    ans+=1;
                    break;
                }
            }
        }
        else {
            for (int i=n-1; i>=0; i--) {
                if (s[i]!='0') {
                    swap(s, n-1, i);
                    ans+=1;
                    break;
                }
            }
            continue;
        }
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n; cin>>n;
        string s; cin>>s;
        if ((int)s==pow(10, n-1)) {
            cout<<2<<"\n";
        }
        cout<<solve(n, s)<<"\n";
    }
}