#include<iostream>
using namespace std;
int main(){
	int n;
	int cnt=0;
	while(1){
		cin>>n;
		cnt++;
		if(n==250){
			cout<<cnt;
			break;
		}
	}
	return 0;
}
