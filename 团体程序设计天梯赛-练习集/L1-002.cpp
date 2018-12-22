#include<stdio.h>
int main() {
	int num,i,n,j,max;
	char c;
	scanf("%d %c",&num,&c);
	n=num;
	n=n-1;
	if(n>=6) {
		for(i=6; n>=i; i+=4) {
			n=n-i;
		}
	} else {
		printf("%c\n",c);
	}
	max=(i-4)/2;
	for(i=0; i<(max+1)/2; i++) {
		for(j=0; j<i; j++) {
			printf(" ");
		}
		for(j=0; j<max-i*2; j++) {
			printf("%c",c);
		}
		printf("\n");
	}
	for(i=0; i<(max-1)/2; i++) {
		for(j=(max-1)/2-1; j>i; j--) {
			printf(" ");
		}
		for(j=0; j<3+i*2; j++) {
			printf("%c",c);
		}
		printf("\n");
	}

	printf("%d\n",n);

	return 0;
}
