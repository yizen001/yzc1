#include<bits/stdc++.h>
using namespace std;
int a[1001];
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    //for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<a[k-1];
    return 0;
}