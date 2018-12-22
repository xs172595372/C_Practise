#include<iostream>
using namespace std;
int count=0;
int temp[50000]= {0};
int s[50000]={0};
int func(int s[],int len) {
	count++;
	int i,j;
	j=0;
	for(i=1; i<2*len; i+=2) {
		temp[i]=s[j++];
	}
	for(i=0; i<2*len; i+=2) {
		temp[i]=s[j++];
	}
	int flag=0;
	for(i=0; i<2*len; i++) {
//		cout<<temp[i]<<' ';
		if(temp[i]!=i) {
			flag=1;
		}
		s[i]=temp[i];
	}
//	cout<<endl;
	if(flag==1) {
		func(s,len);
	}
	return count;
}
int main() {
	int len;
	while(scanf("%d",&len)) {
		int i;
		for(i=0; i<2*len; i++) {
			s[i]=i;
		}
		count=0;
		cout<<func(s,len)<<endl;
	}
	return 0;
}
