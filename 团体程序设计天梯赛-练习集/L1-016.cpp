#include<stdio.h>
int main(){
	int num,i,j,ys=0,flag=1;
	char M;
	char id[19];
	int qz[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%s",id);
		//gets(id);
		for(j=0;j<17;j++){
			ys=ys+qz[j]*(id[j]-'0');
		}
		ys=ys%11;
		switch(ys){
			case 0:M='1';break;
			case 1:M='0';break;
			case 2:M='X';break;
			case 3:M='9';break;
			case 4:M='8';break;
			case 5:M='7';break;
			case 6:M='6';break;
			case 7:M='5';break;
			case 8:M='4';break;
			case 9:M='3';break;
			case 10:M='2';break;
		}
		if(M!=id[17]){
			puts(id);
			flag=0;
		}
		ys=0;
	}
	if(flag==1){
		puts("All passed");
	}
	return 0;
}