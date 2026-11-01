#include<iostream>
using namespace std;
int n,a=0;
int main() {
    cin >> n;
    if (n<0) {
        cout<<'-';
        n = -n;
    }
    while (n>0) {
        a=a*10+n%10;
        n/=10;
    }
    cout << a;
    return 0;
}