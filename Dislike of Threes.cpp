// Dislike of Threes
// Codeforces: https://codeforces.com/contest/1560/problem/A
// Author: ETL
// Submitted: Aug/19/2021 05:36	
#include <iostream>
using namespace std;
 
int main() {
    int t; cin>>t;
    while (t--) {
        int k;
        cin>>k;
        int count=0;
        for (int i=1; i>0; i++) {
            if (count==k) {
                cout<<i-1<< endl;
                break;
            }
            else if (i%10==3 || i%3==0) {
                continue;
            }
            else {
                count++;
            }
        }
    }
}