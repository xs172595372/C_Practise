#include<stdio.h>
#include<string.h>
int main(){
	char c[52];
	int i,count=0,len;
	double cs1=1,cs2=1;
	double x=0.0;
	gets(c);
	len=strlen(c);
	for(i=0;i<len;i++){
		if(c[i]-'0'==2){
			count++;
		}
	}
	if((c[len-1]-'0')%2==0){
		cs2=2;
	}
	if(c[0]=='-'){
		cs1=1.5;
		len--;
	}
	x=(double)count/(double)len*cs1*cs2;
	printf("%.2lf",x*100);
	printf("%%");
	return 0;
}
