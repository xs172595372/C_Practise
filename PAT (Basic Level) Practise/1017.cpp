#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	char s[1005]={0};
	int r[1005]={0};
	int a,b=0;
	scanf("%s %d",s,&a);
	int i,j=0;
	int len=strlen(s);
	for(i=0;i<len;i++){
		r[j++]=(int)((s[i]-'0'+10*b)/a);
		b=(s[i]-'0'+10*b)%a;
	} 
	if(r[0]==0&&r[1]){
		for(i=1;i<j;i++){
			cout<<r[i];
		}
	}else{
		for(i=0;i<j;i++){
			cout<<r[i];
		}
	}
	cout<<" "<<b;
	return 0;
}
