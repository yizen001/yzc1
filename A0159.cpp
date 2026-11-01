#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=0;
	double max1 = 0.0,min1=999.0,temp,pjf = 0.0;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>temp;
		if(temp>max1) max1=temp;
		if(temp<min1) min1=temp;
		pjf=pjf+temp;
	}
	pjf=(pjf-min1-max1)/(n-2);
	printf("%.4lf",pjf);
	return 0;
}