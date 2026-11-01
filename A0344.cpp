#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1]={0};
	for(int i=1;i<=n;i++) if(i%2==0) if(a[i]==0) a[i]=1;
	for(int i=1;i<=n;i++) if(i%5==0) if(a[i]==0) a[i]=1;
	for(int i=1;i<=n;i++) if(a[i]==0) cout<<i<<" ";
	return 0;
}