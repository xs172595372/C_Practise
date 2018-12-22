#include<stdio.h>
int main(){
	int len,i,js=0,os=0;
	int a[1000];
	scanf("%d",&len);
	for(i=0;i<len;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++){
		if(a[i]%2==0){
			os++;
		}else{
			js++;
		}
	}
	printf("%d %d",js,os);
	return 0;
}