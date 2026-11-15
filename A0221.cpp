#include<iostream>
using namespace std;
long long a[300001];
int main(){
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++) cin>>a[i];
    for(long long i=1;i<n;i++) {
        for(long long j=i+1;j<=n;j++) {
            if(a[j]<a[i]) swap(a[j],a[i]);
        }
    }
    for(long long i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;
}