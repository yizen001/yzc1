#include<bits/stdc++.h>
using namespace std;
int main() {
	long long a,b,c;
	cin>>a>>b>>c;
	if(a==b && b==c && c==a) cout<<"3";
	else if(a==b || b==c || c==a) cout << "2";
	else if(a+b>c && b+c>a && c+a>b) cout<<"1";
	else cout<<"0";
	return 0;
}