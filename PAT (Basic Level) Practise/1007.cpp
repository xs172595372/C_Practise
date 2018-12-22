#include<iostream>
#include<cmath>
using namespace std;
int judge(int num){
	double len=sqrt(num);
	int i;
	for(i=2;i<=len;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
} 
int main(){
	int i,num,count=0;
	cin>>num;
//	cout<<judge(num);
	for(i=3;i<=num-2;i+=2){
		if(judge(i)){
			if(judge(i+2)){
			//	cout<<i<<' '; 
				count++;
			}
		}
	}
	cout<<count;
	return 0;
} 
