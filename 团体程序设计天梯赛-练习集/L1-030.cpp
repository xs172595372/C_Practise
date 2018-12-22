#include<stdio.h>
struct stu{
	int flag;
	char name[10];
	int group;
}s[50];
int main(){
	int i,j,x=1,num,p=0;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d %s",&(s[i].flag),s[i].name);
		s[i].group=0;
	}
	for(i=0;i<num;i++){
		if(s[i].flag==0&&s[i].group==0){
			for(j=num-1;j>=0;j--){
				if(s[j].group==0&&s[j].flag==1){
					s[i].group=x;
					s[j].group=x;
					x++;
					break;
				}
			}
		}
		if(s[i].flag==1&&s[i].group==0){
			for(j=num-1;j>=0;j--){
				if(s[j].group==0&&s[j].flag==0){
					s[i].group=x;
					s[j].group=x;
					x++;
					break;
				}
			}
		}
	}
	for(i=1;i<num/2+1;i++){
		for(j=0;j<num;j++){
			if(s[j].group==i){
				printf("%s",s[j].name);
				p++;
				if(p%2==1){
					printf(" ");
				}
			}	
		}
		
		if(i!=(int)(num/2))
			printf("\n");
	}
	return 0;
}