#include<stdio.h>
int main(){
	int num,sum=1,i,x=1;
	scanf("%d",&num);
	for(i=1;i<num;i++){
		x=x*(i+1);
		sum=sum+x;
	}
	printf("%d",sum);
	return 0;
}