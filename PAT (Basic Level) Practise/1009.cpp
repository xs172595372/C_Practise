#include<iostream>
#include<cstring> 
using namespace std;
int main(){
	char s[80][80]={0};
	char a[80]={0};
	gets(a);
	int len=strlen(a);
	int i,j=0,z=0;
	for(i=0;i<len;i++){
		if(a[i]!=32){
			s[j][z++]=a[i];
		}else{
			j++;
			z=0;
			continue;
		}
	}
	for(i=j;i>=0;i--){
		for(z=0;s[i][z];z++){
			cout<<s[i][z];
		}
		if(i){
			cout<<" ";
		}
	}
	return 0;
} 
