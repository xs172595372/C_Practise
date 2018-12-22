#include<iostream>
#include<cmath>
using namespace std;
int judge(int num) {
	double len=sqrt(num);
	int i;
	for(i=2; i<=len; i++) {
		if(num%i==0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int a,b;
	cin>>a>>b;
	int i=2,count=0,j=0,z=0;
	int flag=0;
	while(count<b) {
		if(judge(i)) {
			count++;
			if(count>=a) {
				cout<<i;
				j++;z++;
				if(j==10){
					cout<<endl;
					j=0;
				} else{
					if(z!=b-a+1){
						cout<<" ";
					}
				}
			}
		}
		i++;
	}
	return 0;
}
