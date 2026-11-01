#include<iostream>
using namespace std;
long long a,a1,t;
int main() {
    cin>>t;
    long long b[t+1]={0};
    for(int i=0;i<t;i++) {
        a1=0;
        cin>>a;
        while(a!=0) {
            a1+=a%10;
            a/=10;
        }
        b[i]=a1;
    }
    for(int i=0;i<t;i++) cout<<b[i]<<endl;
    return 0;
}