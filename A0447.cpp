#include<bits/stdc++.h>
using namespace std;
int n,max1,max2;
int main() {
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]>max1){
            max1=a[i];
            max2=i;
        }
    }
    a[max2]=0;
    max1=0;
    max2=0;
    for(int i=0;i<n;i++) {
        if(a[i]>max1) {
            max2=i;
            max1=a[i];
        }
    }
    cout<<++max2<<" "<<max1;
    return 0;
}