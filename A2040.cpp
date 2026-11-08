#include<iostream>
using namespace std;
long long n,a=0;
int main() {
    cin>>n;
    for(int i=1;i<=n-1;i++) {
        for(int j=i+1;j<=n;j++) {
            if((i+j)%3==0 || (i+j)%7==0) a++;
        }
    }
    cout<<a;
    return 0;
}