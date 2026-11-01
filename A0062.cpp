#include<iostream>
using namespace std;
int n,g,s,b,q;
int main(){
    cin>>n;
    g=n%10;
    s=n/10%10;
    b=n/100%10;
    cout<<g<<s<<b<<endl<<g*100+s*10+b;;
    return 0;
}