#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num;
	cin>>num;
	int i;
	for(i=0;i<num;i++){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<abs(a*b-c*d)<<endl;
	}
	return 0;
} 
