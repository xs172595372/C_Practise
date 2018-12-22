#include<iostream>
using namespace std;
class x {
	public:
		int k,v;
};
int main() {
	int num;
	cin>>num;
	while(num--) {
		int n,f=1,m=1;
		x s[101]={0};
		cin>>n;
		while(1) {
			if(f>=n) break;
			 else {
				m*=2;
				f+=m;
			}
		}
		cin>>s[0].k>>s[1].k>>s[2].k;
		for(int i=1; i<n; i++) {
			int root,l,r;
			cin>>root>>l>>r;
			for(int j=0; j<n; j++) {
				if(s[j].k==root) {
					s[2*j+1].k=l;
					s[2*j+2].k=r;
					break;
				}
			}
		}
		for(int i=0; i<f; i++) {
			if(s[i].k!=0)	cin>>s[i].v; 
			else 	s[i].v=0;
		}
		int z[101]= {0},l=1,t=0,p=0;
		z[p++]=s[0].v;
		while(t<=f) {
			l*=2;
			for(int i=l; i>0; i--) {
				int k=t+i;
				z[p++]=s[k].v;
			}
			t+=l;
		}
		int flag=1;
		for(int i=0; i<f; i++) {
			if(s[i].v!=z[i]) {
				flag=0;
				break;
			}
		}
		if(flag) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
