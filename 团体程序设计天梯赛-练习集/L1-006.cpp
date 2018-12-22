#include<stdio.h>
#include<math.h>
int main() {
	int num;
	int a[100000]= {0};
	int i,j,max=0,x,y,q,m=1;
	scanf("%d",&num);
	q=(int)(sqrt(num));
	for(i=2; i<=q; i++) {
		x=i;
		y=i;
		while(num%x==0) {
			a[i]++;
			y++;
			x=x*y;
		}
	}
//	for(i=2;i<q;i++) printf("%d ",a[i]);
	for(i=2; i<=q; i++) {
		if(a[i]>max) {
			max=a[i];
			m=i;
		}
	}
	if(a[m]<1){
		printf("%d\n%d",1,num);
	}else{
		printf("%d\n",a[m]);
		x=m;
		y=m;
		while(num%x==0) {
			y++;
			x=x*y;
			if(y-1==1){
				printf("%d",num);
			}else{
				printf("%d",y-1);
			}
			if(num%x==0){
				printf("*");
			}
		}
	}
	
	return 0;
}
