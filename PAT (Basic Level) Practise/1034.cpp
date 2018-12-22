#include<stdio.h>
#include<math.h>
long gys(long a,long b){
	long i;
	for(i=abs(a);i>=0;i--){
		if(a%i==0&&b%i==0){
			return i;
		}
	}
	return 1;
}
int main(){
	long a,b,c,d,g,x,y,temp;
	int flag=0;
	scanf("%d/%d %d/%d",&a,&b,&c,&d);
	g=gys(a*d+b*c,b*d);
	(long)(x=(a*d+b*c)/g);
	(long)(y=(b*d)/g);
	printf("%d/%d + %d/%d=",a,b,c,d);
	if(x>y){
		temp=x/y;
		x=x-temp*y;
		printf("(%d %d/%d)\n",temp,x,y);
	}else{
		printf("%d/%d\n",x,y);
	}
	g=gys(a*d-b*c,b*d);
	(long)(x=(a*d-b*c)/g);
	(long)(y=(b*d)/g);
	printf("%d/%d - %d/%d=",a,b,c,d);
	if(x>y){
		temp=x/y;
		x=x-temp*y;
		printf("(%d %d/%d)\n",temp,x,y);
	}else{
		printf("%d/%d\n",x,y);
	}
	g=gys(a*c,b*d);
	(long)(x=a*c/g);
	(long)(y=(b*d)/g);
	printf("%d/%d * %d/%d=",a,b,c,d);
	if(x>y){
		(long)temp=x/y;
		x=x-temp*y;
		printf("(%d %d/%d)\n",temp,x,y);
	}else{
		printf("%d/%d\n",x,y);
	}
	g=gys(a*d,b*c);
	(long)(x=a*d/g);
	(long)(y=b*c/g);
	printf("%d/%d / %d/%d=",a,b,c,d);
	if(x>y){
		temp=x/y;
		x=x-temp*y;
		printf("(%d %d/%d)\n",temp,x,y);
	}else{
		printf("%d/%d\n",x,y);
	}
	return 0;
}