#include <iostream>
#include <vector>
using namespace std;
int n,K;
const int maxn=100;
const int maxk=100000;
int a[maxn],m[maxn];
bool dp[maxn][maxk];
int main() {
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++)
		cin>>m[i];
	cin>>K;
	dp[0][0]=1;
	for(int i=0; i<n; i++)
		for(int j=0; j<=K; j++)
			for(int k=0; k<=m[i] && k*a[i]<=j; k++) {
				dp[i+1][j] |=dp[i][j-k*a[i]];  //只要k=0,1,2....中的任意一种为真，那么dp[i+1][j]就能为真
			}

	if(dp[n][K])cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	//cout<<dp[n][K]<<endl;
	return 0;
}
