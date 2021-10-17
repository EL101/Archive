#include <bits/stdc++.h>
#include <string>
typedef long long ll;
using namespace std;

ll powTen(ll n) {
    ll count=10;
    for (int i=100; i>0; i*=10) {
        if (n/i>0) {
            count*=10;
        }
        else {
            break;
        }
    }
    return count;
}

ll solve(ll n) {
    if (n<10) {
        return 0;
    }
    else {
        ll x=n%(powTen(n));
        return x*2+solve(x);
    }
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        if (n<10) {
            cout<< n-1<< endl;
        }
        else if (n<100) {
            cout<<2*(n%10)<< endl;
        }
        else if (n%100==0) {
            cout<< sqrt(n)-1<< endl;
        }
        else {
            cout<<solve(n)<< endl;
        }
    }
}