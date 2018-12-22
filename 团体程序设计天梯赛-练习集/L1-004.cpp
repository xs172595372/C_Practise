#include<stdio.h>
int main(){
	int i=0;
	double x=0.0;
	scanf("%d",&i);
	i=i-32;
	i=i*5;
	x=(double)i/9.0;
	printf("Celsius = %d",(int)x);
	return 0;
}