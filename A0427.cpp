#include<bits/stdc++.h>
using namespace std;
int n,b,a;
int main(){
    cin>>n;
    int c[n+1]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>a;
            b+=a;
        }
        c[i]=b;
        b=0;
    }
    for(int i=0;i<n;i++) {
        int d=1;
        for(int j=0;j<n;j++) {
            if(c[j]>c[i]) d++;
        }
        cout<<d<<" ";
    }
    return 0;
}