#include<bits/stdc++.h>
using namespace std;
int a[2002];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n+m;i++) cin>>a[i];
    sort(a,a+n+m);
    for(int i=0;i<n+m;i++) cout<<a[i]<<" ";
    return 0;
}