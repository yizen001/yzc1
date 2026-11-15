#include<bits/stdc++.h>
using namespace std;
int a,b[6],c[6],c1=0,b1=0;
bool cmp(int d,int e) {
    return d>e;
}
bool cmp1(int d,int e) {
    return d<e;
}
int main(){
    for(int i=0;i<10;i++){
        cin>>a;
        if(a%2==0) {
            c1++;
            c[c1]=a;
        }
        if(a%2==1) {
            b1++;
            b[b1]=a;
        }
    }
    sort(b,b+b1+1,cmp);
    sort(c,c+c1+1,cmp1);
    for(int i=1;i<=b1;i++) cout<<b[i]<<" ";
    for(int i=1;i<=c1-1;i++) cout<<c[i]<<" ";
    cout<<c[c1];
    return 0;
}