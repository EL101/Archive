// Who's Opposite?
// Codeforces: https://codeforces.com/contest/1560/submission/126458477
// Author: ETL
// Submitted: Aug/19/2021 17:56	
#include <iostream>
using namespace std;
 
int main() {
    long long t; cin>>t;
    while (t--) {
        long long a,b,c;
        cin>>a>>b>>c;
        long long total=2*abs(a-b);
        int ans=0;
        if (a>total || b>total || c>total) {
            ans=-1;
        }
        else {
            ans=c+total/2;
            if (ans>total) {
                ans=c-total/2;
            }
        }
        cout<<ans<< endl;
    }
}