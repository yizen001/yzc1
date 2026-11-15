#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(b<a) swap(a,b);
    if(c<a) swap(a,c);
    if(c<b) swap(c,b);
    cout<<a<<" "<<b<<" "<<c<<"\n";
    return 0;
}