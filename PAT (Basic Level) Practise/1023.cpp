#include<iostream>
using namespace std;
int main(){
	int i,sum=0;
	int a[10];
	for(i=0;i<10;i++){
		cin>>a[i];
		sum=sum+a[i];
	} 
	for(i=1;i<10;i++){
		if(a[i]!=0){
			cout<<i;
			a[i]--;
			break;
		}
	}
//	cout<<sum;
	for(i=0;i<10;i++){
		while(a[i]){
			cout<<i;
			a[i]--;
		}
	}
	return 0;
}
