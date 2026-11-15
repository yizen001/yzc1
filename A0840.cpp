#include <iostream>
using namespace std;
int n;
int main() {
    cin>>n;
    int h[1001]={0};
    for(int i=1;i<=n;i++) {
        cin>>h[i];
    }
    for(int i=1;i<=n;i++) {
        long long b=100000001;
        int a=0;
        for(int j=1;j<=n;j++) {
            if(j==i) continue;
            if(h[j]>h[i]) {
                int d=h[j]-h[i];
                if(d<b) {
                    b=d;
                    a=j;
                }
                if (d==b && j<a) a=j;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}