#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1]={0};
    for(int i=1;i<=n;i++) if(i%2==0) a[i]=1;
    for(int i=1;i<=n;i++) {
        for(int j=2;j<=8;j=j+3){
            if(i%j==0) a[i]=1-a[i];
        }
    }
    for(int i=1;i<=n;i++) if(a[i]==1) cout<<i<<"\n";
    return 0;
}