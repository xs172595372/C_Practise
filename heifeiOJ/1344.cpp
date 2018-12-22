#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	while(num--){
		long long n,k;
		cin>>n>>k;
		long long sum=0;
		long long x=n/(2*k)*k*k;
		sum+=x;
		int r=n%(2*k);
		r=n-r+1;
		long long cnt=0;
		int flag=-1;
		for(long long i=r;i<=n;i++){
			cnt++;
			if(cnt>k){
				flag=1;
			}
			int y=i*flag;
			sum+=y;
		}
		cout<<sum<<endl;
	}
	return 0;
}
