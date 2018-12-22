#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int fun(int num,int l){
	int sum=0;
	int i;
	sum=num;
	for(i=1;i<l;i++){
		sum=sum*10+num;
	}
	return sum;
}
int main(){
	char a[20];
	char b[20];
	int x,y;
	scanf("%s %d %s %d",a,&x,b,&y);
	int lena=strlen(a);
	int lenb=strlen(b);
	int i=0;
	int countx=0,county=0;
	for(i=0;i<lena;i++){
		if(a[i]-'0'==x){
			countx++;
		}
	}
	if(countx==0){
		x=0;
	}else{
		x=fun(x,countx);
	}
	for(i=0;i<lenb;i++){
		if(b[i]-'0'==y){
			county++;
		}
	}
	if(county==0){
		y=0;
	}else{
		y=fun(y,county);
	}
	cout<<x+y;
	return 0;
} 
