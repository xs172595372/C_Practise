#include<stdio.h>
int main(){
	int x,y,sum=1;
	scanf("%d",&x);
	y=x;
	while(y--){
		sum=sum*2;
	}
	printf("2^%d = %d",x,sum);
	return 0;
}