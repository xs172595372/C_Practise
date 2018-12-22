#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(){
	int num;
	cin>>num;
	char a[15];
	sprintf(a,"%d",num);
	int len=strlen(a);
	if(len==3){
		int x=a[0]-'0';
		int y=a[1]-'0';
		int z=a[2]-'0'; 
		while(x--){
			cout<<"B";
		}
		while(y--){
			cout<<"S";
		}
		int i;
		for(i=1;i<=z;i++){
			cout<<i;
		}
	}	 
	if(len==2){
		int y=a[0]-'0';
		int z=a[1]-'0'; 
		while(y--){
			cout<<"S";
		}
		int i;
		for(i=1;i<=z;i++){
			cout<<i;
		}
	}	 
	if(len==1){
		int z=a[0]-'0'; 
		int i;
		for(i=1;i<=z;i++){
			cout<<i;
		}
	}
	return 0;
}
