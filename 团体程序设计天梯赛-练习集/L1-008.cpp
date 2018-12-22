#include<stdio.h>
int main(){
	int x,y,i,sum=0;
	scanf("%d %d",&x,&y);
	for(i=0;x<y+1;x++,i++){
		printf("%5d",x);
		sum+=x;
		if(i%5==4){
			printf("\n");
		}
	}
	i--;
	if(i%5!=4){
		printf("\n");
	}
	printf("Sum = %d",sum);
	return 0;
}