#include<bits/stdc++.h>
using namespace std;
int n,min1=999999;
int main() {
    cin>>n;
    int a[n+1]={0};
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++) {
        for(int j=i+1;j<=n;j++) {
            if(abs(a[i]-a[j])<min1) min1=abs(a[i]-a[j]);
        }
    }
    cout<<min1;
    return 0;
}