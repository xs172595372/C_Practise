#include<stdio.h>
#include<math.h>
struct student{
	int sg,tz;
	double bz;
}stu[20];
int main(){
	int num,i;
	double c;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d %d",&stu[i].sg,&stu[i].tz);
		stu[i].bz=0;
	}
	for(i=0;i<num;i++){
		stu[i].bz=(stu[i].sg-100)*0.9;
		c=stu[i].bz-(double)stu[i].tz/2.0;
		if(stu[i].bz*0.1>fabs(c)){
			printf("You are wan mei!\n");
		}
		if(c>0&&stu[i].bz*0.1<=fabs(c)){
			printf("You are tai shou le!\n");
		}
		if(c<0&&stu[i].bz*0.1<=fabs(c)){
			printf("You are tai pang le!\n");
		}
	}
	return 0;
}