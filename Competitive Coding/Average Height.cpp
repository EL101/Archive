#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> even, odd;
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            if (x%2==0) {
                even.push_back(x);
            }
            else {
                odd.push_back(x);
            }
        }
        for (auto &x:even) {
            cout<<x<< endl;
        }
        for (auto &x:odd) {
            cout<<x<< endl;
        }
    }
}