#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    float j=(float) a/b;
    float i=(float) c/d;
    float final=j/(1-(1-j)*(1-i));
    cout<<final<< endl;
}