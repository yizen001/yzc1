#include<iostream>
using namespace std;
int n,a,b;
int main() {
    cin>>n;
    b=n;
    if(n<0) {
        cout<<"false";
        return 0;
    }
    while(n>0) {
        a=a*10+n%10;
        n=n/10;
    }
    //cout<<a<<endl<<b<<endl;
    if(b==a) cout<<"true";
    else if(b!=a) cout<<"false";
    return 0;
}