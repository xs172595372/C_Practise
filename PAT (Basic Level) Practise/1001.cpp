#include<iostream>
using namespace std;
int count=0; 
int judge(int num){
	if(num%2==0){
		num=num/2;
		count++;
	}else{
		num=(3*num+1)/2;
		count++;
	}
	if(num==1){
		return count;
	}else{
		judge(num);
	} 
}
int main(){
	int num;
	cin>>num;
	if(num==1){
		cout<<0;
	}else{
		cout<<judge(num);
	}
	return 0;
} 
