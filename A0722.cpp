#include <iostream>
using namespace std;
int main() {
    int l,m,u,v,b=0;
    cin>>l>>m;
    int a[l+1]={0};
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        for(int j=u;j<=v;j++) {
            if(a[j]==0) a[j]=1;
        }
    }
    for(int i=0;i<=l;i++) if(a[i]==0) b++;
    cout<<b;
    return 0;
}