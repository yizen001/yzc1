#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b) {
    return a<b;
}
long long a[300001];
int main(){
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,cmp);
    for(long long i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}