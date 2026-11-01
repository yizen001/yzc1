#include<bits/stdc++.h>
using namespace std;
int main(){
	int t=0;
	string in1=" ",A[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"},a[26]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"},num[10]={"0","1","2","3","4","5","6","7","8","9"};
	cin>>in1;
	for(int i=0;i<3;i++) {
		for(int x=0;x<26;x++){
			if(in1==A[x]) {
				cout<<"capital";
				return 0;
			}
		}
		for(int y=0;y<26;y++){
			if(in1==a[y]){
				cout<<"lowercase";
				return 0;
			}
		}
		for(int z=0;z<10;z++){
			if(in1==num[z]) {
				cout<<"number";
				return 0;
			}
		}
	}
	cout<<"others";
	return 0;
}