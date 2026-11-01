#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=100;
	while (n>0)
		if (n%2)
			break;
	else if (n%3==0)
		n-=5;
	else
		n-=20;
	cout<<n;
	return 0;
}