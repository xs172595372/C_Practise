#include<stdio.h>
#include<string.h>
#include<math.h>
int legal(char a[]){
	int len,i;
	len=strlen(a);
	if(a[0]=='1'&&a[1]=='0'&&a[2]=='0'&&a[3]=='0'&&a[4]=='\0'){
		return 1;
	}
	if(len==0||len>3){
		return 0;
	}
	if(a[0]=='0'){
		return 0;
	}
	for(i=0;i<len;i++){
		if(a[i]-'0'<0||a[i]-'0'>9){
			return 0;
		}
	}
	return 1;
}
int main(){
	char a[10000]={0},b[10000]={0};
	int aj=0,bj=0,flag=1,al,bl,i,j=0;
	gets(b);
	bl=strlen(b);
	for(i=0;i<bl;i++){
		if(b[i]==' '&&i!=0){
			break;
		}
		a[i]=b[i];
	}
	for(i++;i<bl;i++){
		b[j++]=b[i];
	} 
	b[j]='\0';
	aj=legal(a);
	bj=legal(b); 
	al=strlen(a);
	bl=strlen(b);
	if(aj==1){
		printf("%s + ",a);
	}else{
		printf("? + ");
		flag=0;
	}
	if(bj==1){
		printf("%s ",b);
	}else{
		printf("? ");
		flag=0;
	}
	if(flag==0){
		printf("= ?");
	}else{
		aj=0;
		bj=0;
		for(i=0;i<al;i++){
			aj=aj+(a[i]-'0')*pow(10,al-i-1);
		}
		for(i=0;i<bl;i++){
			bj=bj+(b[i]-'0')*pow(10,bl-i-1);
		}
		printf("= %d",aj+bj);
	}
	return 0;
}
