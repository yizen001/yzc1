#include<iostream>
using namespace std;
int a,d;
string a1;
int main(){
    cin>>a1;
    cout<<a1[3]<<a1[2]<<a1[1]<<a1[0]<<endl<<a1[2]<<a1[3]<<a1[0]<<a1[1]<<endl<<(a1[0]+a1[1]+a1[2]+a1[3]);
    return 0;
}