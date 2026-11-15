#include<bits/stdc++.h>
using namespace std;
int a[5001],b[5001];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) {
        if(a[i]%2==1) b[i]=a[i];
    }
    sort(b,b+n);
    int i=0;
    for(i;i<n;i++) {
        if(b[i]!=0){
            cout<<b[i];
            break;
        }
    }
    for(i+=1;i<n;i++) if(b[i]!=0) cout<<","<<b[i];
    return 0;
}