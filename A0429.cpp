#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[10005]={0};
	for(int i=1;i<=n;i++) {
		for(int j=i;j<=n;j+=i) {
			a[j]=1-a[j];
		}
	}
	for(int i=1;i<=n;i++) if(a[i]==1) cout<<i<<endl;
	return 0;
}