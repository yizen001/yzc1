#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,m,s,h;
    cin>>x;
    h=x/60/60;
    m=x/60%60;
    x=x%60;
    s=x;
    printf("%d %d %d",h,m,s);
    return 0;
}