#include<stdio.h>
int main(){
	long long num,a,b,c,i;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a+b>c){
			printf("Case #%lld: true\n",i+1);
		}else{
			printf("Case #%lld: false\n",i+1);
		}
		
	}
	return 0;
} 
