#include<stdio.h>
#include<string.h>
int main() {
	int num,i,len;
	char c;
	char ch[100000]= {0};
	scanf("%d %c",&num,&c);
	getchar();
	gets(ch);
	len=strlen(ch);
	if(num>len) {
		for(i=0; i<num-len; i++) {
			printf("%c",c);
		}
		for(i=0; i<len; i++) {
			printf("%c",ch[i]);
		}
	}else{
		for(i=len-num;i<len;i++){
			printf("%c",ch[i]);
		}
	}
	return 0;
}
