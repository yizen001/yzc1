#include<iostream>
using namespace std;
int n,g,s,b,q;
int main(){
    cin>>n;
    g=n%10;
    s=n/10%10;
    b=n/100%10;
    q=n/1000%10;
    cout<<g*1000+s*100+b*10+q<<endl<<s<<g<<q<<b<<endl<<g+s+b+q;
    return 0;
}