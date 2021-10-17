#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n, m, max;
        max=0;
        cin>>n;
        while (n>0) {
            m=n%10;
            if (m>max) {
                max=m;
            }
            n/=10;
        }
        cout<<max<< endl;
    }
}