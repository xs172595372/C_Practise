#include<stdio.h>
int main(){
	char a[10005];
	int i,g=0,p=0,l=0,t=0,len;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]=='G'||a[i]=='g'){
			g++;
		}
		if(a[i]=='P'||a[i]=='p'){
			p++;
		}
		if(a[i]=='L'||a[i]=='l'){
			l++;
		}
		if(a[i]=='T'||a[i]=='t'){
			t++;
		}
	}
	while(g||p||l||t){
		if(g){
			printf("G");
			g--;
		}
		if(p){
			printf("P");
			p--;
		}
		if(l){
			printf("L");
			l--;
		}
		if(t){
			printf("T");
			t--;
		}
	}
	return 0;
} 
