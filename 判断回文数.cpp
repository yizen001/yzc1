#include<iostream>
using namespace std;
int n,x,a;
int main() {
    cin>>n;
    x=n;
    while(n!=0) {
        a=a*10+n%10;
        n=n/10;
    }
    if(a==x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}