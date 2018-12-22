#include<stdio.h>
int main() {
	int x,y,num,i,a[4],b,c;
	scanf("%d %d",&x,&y);
	scanf("%d",&num);
	b=x;
	c=y;
	for(i=0; i<num; i++) {
		scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
		if(a[1]!=a[3]) {
			if(a[0]+a[2]==a[1]) {
				x--;
				if(x<0){
					printf("A\n");
					printf("%d",c-y);
					return 0;
				}
			}
			if(a[0]+a[2]==a[3]) {
				y--;
				if(y<0){
					printf("B\n");
					printf("%d",b-x);
					return 0;
				}
			}
		}

	}

	return 0;
}
