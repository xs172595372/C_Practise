#include<stdio.h>
int main(){

	int hh,mm,i;
	scanf("%d:%d",&hh,&mm);
	if(hh<12){
		printf("Only %02d:%02d.  Too early to Dang.",hh,mm);
	}else if(mm==0){
		if(hh==12){
			printf("Only %02d:%02d.  Too early to Dang.",hh,mm);
		}else{
			for(i=0;i<hh-12;i++){
				printf("Dang");
			}
		}
		
	}else{
		for(i=0;i<hh-12;i++){
			printf("Dang");
		}
		printf("Dang");
	}
	return 0;
}