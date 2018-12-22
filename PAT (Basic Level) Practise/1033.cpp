#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char del[100005],c[100005];
	gets(del);
	gets(c);
	int lend=strlen(del);
	int lenc=strlen(c);
	int i=0,j;
	int flag=0;
	for(i=0; i<lend; i++) {
		if(del[i]=='+') {
			flag=1;
		}
	}
	for(i=0; i<lenc; i++) {
		if(flag==1&&c[i]>='A'&&c[i]<='Z') {
			c[i]=0;
		}
	}
	for(i=0; i<lenc; i++) {
		for(j=0; j<lend; j++) {
			if(c[i]==del[j]||c[i]-32==del[j]) {
				c[i]=0;
			}
		}
	}
//	puts(c);
	int g=0;
	for(i=0; i<lenc; i++) {
		if(c[i]!=0) {
			cout<<c[i];
			g=1;
		}
	}
	if(g==0) {
		cout<<endl;
	}
	return 0;
}
