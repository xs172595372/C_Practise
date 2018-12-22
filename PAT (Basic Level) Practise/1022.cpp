#include<iostream>
using namespace std;
int c[1000000]= {0},b[1000000]= {0};
int a=0;
void itoa(int x,int c[],int jz) {
	c[a++]=x%jz;
	x=x/jz;
	if(x) {
		itoa(x,c,jz);
	}

}
int main() {
	int x,y,d;
	int i=0,j;
	cin>>x>>y>>d;
	itoa(x+y,c,d);
	while(a--) {
		cout<<c[a];
	}
	return 0;
}
