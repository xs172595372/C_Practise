#include<iostream>
#include<algorithm>
using namespace std;
int cmp(int a,int b){
	return a>b;
}
int main(){
	int num;
	int len[100005]={0};
	int i,j;
	cin>>num;
	for(i=0;i<num;i++){
		cin>>len[i];
	}
	int max;
	sort(len,len+num,cmp);
	for(i=0;i<num;i++){
		if(len[i]>i+1){
			max=i+1;
		}
	}
	cout<<max;
	return 0;
} 
