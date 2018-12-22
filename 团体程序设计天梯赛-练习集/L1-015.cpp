#include<stdio.h>
int main(){
	int i,j,num;
	char c;
	scanf("%d %c",&num,&c);
	for(i=0;i<num*0.5;i++){
		for(j=0;j<num;j++)
			printf("%c",c);
		printf("\n");
	}
		
	return 0;
}