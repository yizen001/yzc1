#include<bits/stdc++.h>
using namespace std;
int a[1001];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    //for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<a[n/2];
    return 0;
}