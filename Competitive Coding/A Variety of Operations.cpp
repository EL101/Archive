#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        ll c, d;
        cin>>c>>d;
        ll a=0;
        ll b=0;
        if (((c+d)/2)<((c+d)/2.0)) {
            cout<<-1<< endl;
        }
        else {
            if (c==d && d==0) {
                cout<<0<< endl;
            }
            else if (c==d) {
                cout<<1<< endl;
            }
            else {
                cout<<2<< endl;
            }
        }
    }
}