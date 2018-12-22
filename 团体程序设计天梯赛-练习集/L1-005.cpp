#include<stdio.h>
struct stu{
	char zkz[20];
	int js,ks;
}a[1000];
int main(){
	int num1,num2,i,j,z,check[1000];
	scanf("%d",&num1);
	for(i=0;i<num1;i++){
		scanf("%s",a[i].zkz);
		scanf("%d",&a[i].js);
		scanf("%d",&a[i].ks);
	}
	scanf("%d",&num2);
	for(i=0;i<num2;i++){
		scanf("%d",&check[i]);
	}
	for(i=0;i<num2;i++){
		for(j=0;j<num1;j++){
			if(a[j].js==check[i]){
				printf("%s",a[j].zkz);
				printf(" %d\n",a[j].ks);
			}
		}
	}
	return 0;
}