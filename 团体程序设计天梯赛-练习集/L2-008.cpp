#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s[10000];
	int i,j,t=0;
	int max=0;
	gets(s);
	int len=strlen(s);
	for(i=0;i<len-1;i++){
		for(j=len-1;j>=i+max;j--){
			while(s[i+t]==s[j-t]){
				if(i+t==j-t&&2*t+1>max){
					max=2*t+1; 
				}
				if(i+t==j-t-1&&2*t+2>max){
					max=2*t+2;
				}
				t++;
			}
			t=0;
		}
	} 
	if(max!=1&&max!=0){
		cout<<max;
		return 0;
	}
	cout<<"1";
	return 0;
}
