#include<iostream>
using namespace std;
int main(){
	int num;
	char a;
	cin>>num>>a;
	int i=0,j;
	for(i=0;i<num;i++){
		cout<<a;
	}
	cout<<endl;
	int len;
	num%2==0?len=num/2:len=(num+1)/2;
	for(i=0;i<len-2;i++){
		cout<<a;
		for(j=0;j<num-2;j++){
			cout<<" ";
		}
		cout<<a;
		cout<<endl;
	}
	for(i=0;i<num;i++){
		cout<<a;
	}
	return 0;
} 
