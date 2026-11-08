#include<iostream>
using namespace std;
int n,a=0;
int main() {
    cin>>n;
    for(int i=1;i<=n-1;i++) {
        for(int j=i+1;j<=n;j++) {
            a++;
            printf("%d %d\n",i,j);
        }
    }
    cout<<endl<<a;
    return 0;
}