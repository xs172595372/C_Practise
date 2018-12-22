#include<iostream>
using namespace std;
int s[1005]={0};
int main(){
	int n;
	cin>>n;
	while(n--){
		int T;
		cin>>T;
		while(T--){
			int x;
			cin>>x;
			s[x]++;
		}
	}
	int max=0,max_i=0;
	for(int i=0;i<1005;i++){
		if(s[i]>=max){
			max=s[i];
			max_i=i;
		}
	}
	cout<<max_i<<" "<<max; 
	return 0;
}
