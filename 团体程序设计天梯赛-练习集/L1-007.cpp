#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	int len,i;
	gets(c);
	len=strlen(c);
	for(i=0;i<len;i++){
		switch(c[i]){
		case '-':printf("fu");break;
		case '0':printf("ling");break;
		case '1':printf("yi");break;
		case '2':printf("er");break;
		case '3':printf("san");break;
		case '4':printf("si");break;
		case '5':printf("wu");break;
		case '6':printf("liu");break;
		case '7':printf("qi");break;
		case '8':printf("ba");break;
		case '9':printf("jiu");break;
		}
		if(i<len-1){
			printf(" ");
		}
	}
	return 0;
}