#include<iostream>
using namespace std;
int n,c,a,b;
int main() {
    cin>>n;
    for(int i=1;i<=n;i++){
        b=i;
        a=0;
        // if(i<10) {
        //     c++;
        //     continue;
        // }
        while(b>0) {
            a=a*10+b%10;
            b/=10;
        }

        if(i==a) c++;
    }
    cout<<c;
    return 0;
}