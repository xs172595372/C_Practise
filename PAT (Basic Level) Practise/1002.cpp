#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main(){
	char s[1000];
	char t[1000];
	gets(s);
	int i;
	int len=strlen(s);
	int sum=0;
	for(i=0;i<len;i++){
		sum=sum+(s[i]-'0');
	}
	sprintf(t,"%d",sum);
	len=strlen(t);
	for(i=0;i<len;i++){
		switch(t[i]-'0'){
			case 0:cout<<"ling";break;
			case 1:cout<<"yi";break;
			case 2:cout<<"er";break;
			case 3:cout<<"san";break; 
			case 4:cout<<"si";break;
			case 5:cout<<"wu";break; 
			case 6:cout<<"liu";break;
			case 7:cout<<"qi";break; 
			case 8:cout<<"ba";break;
			case 9:cout<<"jiu";break; 
		}
		if(i!=len-1){
			cout<<" ";
		}
	} 
	return 0;
} 
