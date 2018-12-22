#include<stdio.h>
#include<math.h>
int ss(int a){
	int i=0;
	if(a==1){
		return 0;
	}
	for(i=2;i<sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}


int main(){
	int num,i;
	long a[10];
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++){
		a[i]=ss(a[i]);
	}
	for(i=0;i<num;i++){
		if(a[i]==1){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}