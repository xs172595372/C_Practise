#include<stdio.h>
int main(){
	int day;
	scanf("%d",&day);
	day+=2;
	switch(day){
	case 8:day=1;break;
	case 9:day=2;break;
	}
	printf("%d",day);
	return 0;
}