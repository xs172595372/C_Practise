#include<iostream>
#include<vector>
#include<string>
using namespace std;
string a,b;
int sum[1005]={0};
int handle(){
	int lena=a.size();
	int dota=a.find('.');
	if(dota>a.size()){
		dota=a.size();
		lena++;
		a+=".";
	}
	int resta=lena-dota-1;
	
	int lenb=b.size();
	int dotb=b.find('.');
	if(dotb>b.size()){
		dotb=b.size();
		lenb++;
		b+=".";
	}
	int restb=lenb-dotb-1;
	
	string maxl,maxr,max;
	if(dota>dotb){
		string add(dota-dotb,'a');
		b=add+b;
	}else{
		string add(dotb-dota,'a');
		a=add+a;
	}
	if(resta>restb){
		string add(resta-restb,'a');
		b=b+add;
	}else{
		string add(restb-resta,'a');
		a=a+add;
	}
	int k;
	for(int i=a.size()-1;i>=0;i--){
		if(a[i]=='.'){
			sum[i]='.';
			k=i;
			continue;
		}
		int t;
		t=a[i]+b[i]-194;
		
		if(t>=26){
			t=t-26;
			sum[i+1]++;
		}
		sum[i]+=t;
	}
	int len=a.size();
	if(a[len-1]=='.'){
		len--;
	}
	for(int i=0;i<len;i++){
		if(i!=k){
			sum[i]=sum[i]+97;
		}
		printf("%c",sum[i]);
	}
	return 0;
}
int DO(){
	cin>>a;
	cin>>b;
	handle();
	return 0;
}
int main(){
	int num;
	cin>>num;
	while(num--){
		DO();
	}
	return 0;
}
