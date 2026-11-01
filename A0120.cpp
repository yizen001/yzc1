#include<bits/stdc++.h>
using namespace std;
int main(){
	long long m,n,max1=0;
	cin>>m>>n;
	for(int i=1;i<=max(m,n);i++) {
		if(m%i==0 && n%i==0) {
			if(i>max1) max1=i;
		}
	}
	long long m1 = m / max1;
	long long n1 = n / max1;
	long long a = m1 * n1 * max1;
	cout<<a;
	return 0;
}