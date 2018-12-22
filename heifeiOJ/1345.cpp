#include<iostream>
#include<cstdlib>
#include<cstring>
#define N 1000000
using namespace std;
bool u[N+1]; 
int su[N+1],len; 
void getPrime() { 
	int i,j;
	memset(u,true,sizeof(u));
	for(i=2; i<=N; i++) {        
		if(u[i]) su[++len]=i;
		for(j=1; j<=len; j++) {   
			if(i*su[j]>N) break;  
			u[i*su[j]]=false;     
			if(i%su[j]==0) break; 
		}
	}
}
int main() {
	getPrime();
	int num;
	cin>>num;
	while(num--) {
		int n,m,a,b;
		cin>>n>>m>>a>>b;
		int flag=1;
		for(int i=a; ; i+=flag,b++) {
			if(u[b]==true) {
				flag*=-1;
			}
			int z=i%n;
			if(z==0){
				z=n;
			}
			if(z==m) {
				break;
			}
		}
		if(u[b]==true) {
			cout<<"duang"<<endl;
		} else {
			cout<<b<<endl;
		}
	}
	return 0;
}
