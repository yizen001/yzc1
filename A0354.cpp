#include <bits/stdc++.h>
using namespace std;
double c[15];
int main() {
    int n;
    cin>>n;
    double a=2,b=3,a1=0;
    for(int i=0;i<n;i++) {
        cout<<a/b<<endl;
        c[i]=(a/b);
        a1++;
        a+=a1;
        b+=2;
    }
    sort(c,c+n);
    for(int i=0;i<n;i++) cout<<c[i]<<endl;
}