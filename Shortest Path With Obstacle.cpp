// Shortest Path With Obstacle
// Codeforces: https://codeforces.com/contest/1547/problem/A
// Author: ETL
// Submitted: Sep/10/2021 19:05	
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int A[2];
        int B[2];
        int C[2];
        cin>>A[0]>>A[1]>>B[0]>>B[1]>>C[0]>>C[1];
        if (A[0]==B[0] && B[0]==C[0]) {
            if (C[1]>A[1] && B[1]<A[1]) {
                cout<<A[1]-B[1]<<"\n";
            }
            else if (C[1]>B[1] && A[1]<B[1]) {
                cout<<B[1]-A[1]<<"\n";
            }
            else if (C[1]<A[1] && B[1]>A[1]) {
                cout<<B[1]-A[1]<<"\n";
            }
            else if (C[1]<B[1] && A[1]>B[1]) {
                cout<<A[1]-B[1]<<"\n";
            }
            else {
                cout<<abs(B[1]-A[1])+2<<"\n";
            }
        }
        else if (A[1]==B[1] && B[1]==C[1]) {
            if (C[0]>A[0] && B[0]<A[0]) {
                cout<<A[0]-B[0]<<"\n";
            }
            else if (C[0]>B[0] && A[0]<B[0]) {
                cout<<B[0]-A[0]<<"\n";
            }
            else if (C[0]<A[0] && B[0]>A[0]) {
                cout<<B[0]-A[0]<<"\n";
            }
            else if (C[0]<B[0] && A[0]>B[0]) {
                cout<<A[0]-B[0]<<"\n";
            }
            else {
                cout<<abs(B[0]-A[0])+2<<"\n";
            }
        }
        else {
            cout<<abs(B[0]-A[0])+abs(B[1]-A[1])<<"\n";
        }
    }
}