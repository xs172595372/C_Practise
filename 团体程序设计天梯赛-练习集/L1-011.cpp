#include<stdio.h>
#include<string.h>
int main(){
	char s1[10005]={0};
	char s2[10005]={0};
	char s3[10005]={0};
	int i,j,z,len_s1,len_s2;
	gets(s1);
	len_s1=strlen(s1);
	gets(s2);
	len_s2=strlen(s2);
	for(i=0;i<len_s1;i++){
		for(j=0;j<len_s2;j++){
			if(s1[i]==s2[j]){
				s1[i]=NULL;
			}
		}
	}
	j=0;
	for(i=0;i<len_s1;i++){
		if(s1[i]!=NULL){
			s3[j++]=s1[i];
		}
	}
	puts(s3);
	return 0;
}