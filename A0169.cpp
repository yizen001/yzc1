#include<bits/stdc++.h>
using namespace std;
int main(){
	int n = 0,j=0,x=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(j=0;j<(n-i);j++) {
			cout<<" ";
		}
		for(j=0;j<x;j++) {
			cout<<"+";
		}
		cout<<endl;
		x++;
	}
	return 0;
}