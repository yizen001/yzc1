#include<bits/stdc++.h>
bool a[350378];
int main(){
    int n,c;
    std::cin>>n;
    for(int i=2;i<350378;i++) if(!a[i]){
        if(++c==n) return printf("%d",i),0;
        for(int j=i*2;j<350378;j+=i) a[j]=1;
    }
    return 0;
}