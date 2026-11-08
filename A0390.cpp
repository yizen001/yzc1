#include<bits/stdc++.h>
using namespace std;
int n,min1=999999,b;
int main() {
    cin>>n;
    int a[n+1]={0};
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        b=0;
        for(int j=0;j<n;j++) {
            b+=abs(a[i]-a[j]);
            //cout<<abs(i-a[j])<<" "<<b<<endl;
        }
        if(b<min1) min1=b;
        //cout<<endl;
    }
    cout<<min1;
    return 0;
}