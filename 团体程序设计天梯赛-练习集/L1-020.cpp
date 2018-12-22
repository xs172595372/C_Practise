#include<stdio.h>
int p[100000],x=0,q[100000]= {0},y;
void scan(int num) {
	while(num--) {
		scanf("%d",&y);
		q[y]++;
		if(q[y]<2) {
			p[x]=y;
			x++;
		}
	}
}
int main() {
	int num,i,len,j=0,id[10000],flag=1,r[100000]= {0},t[100000]={0};
	scanf("%d",&num);
	for(i=0; i<num; i++) {
		scanf("%d",&len);
		if(len!=1) {
			scan(len);
		} else {
			scanf("%d",&y);
		}
	}
	scanf("%d",&num);
	for(i=0; i<num; i++) {
		scanf("%d",&y);
		r[y]++;
		if(r[y]<2) {
			id[j++]=y;
		}
//		if(r[id]<2) {
//			for(j=0; j<x; j++) {
//				if(id==p[j]) {
//					flag=0;
//					break;
//				}
//			}
//			if(flag==1) {
//				if(len)
//					printf("%05d",id);
//				else{
//					printf(" %05d",id);
//				}
//				len=0;
//			}
//			flag=1;
//		}

	}
	for(i=0; i<x; i++) {
		t[p[i]]++;
	}
	for(i=0; i<j; i++) {
		t[id[i]]++;
	}
	for(i=0; i<j; i++) {
		if(t[id[i]]==1){
			if(flag==1){
				printf("%05d",id[i]);
				flag=0;
				continue;
			}
			if(flag==0){
				printf(" %05d",id[i]);
			}
		}
	}
	if(flag) {
		printf("No one is handsome");
	}
	return 0;
}
