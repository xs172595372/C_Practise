#include<iostream>
using namespace std;
int main(){
	int a,b;
	double c;
	cin>>a>>b;
	c=(double)a/b;
	if(b>0){
		printf("%d/%d=%.2lf",a,b,c);
	}else if(b<0){
		printf("%d/(%d)=%.2lf",a,b,c);
	}else{
		printf("%d/%d=Error",a,b);
	}
	return 0;
} 
