#include<iostream>
#include<algorithm>
using namespace std; 
int main() {
	int num,i;
	cin>>num;
	for(i=0; i<num; i++) {
		int n,m,q;
		int s[40005]= {0};
		int a[1005]= {0};
		cin>>n>>m>>q;
		int j;
		for(j=0; j<n*m; j++) {
			cin>>s[j];
		}
		sort(s,s+n*m);
		for(j=0; j<q; j++) {
			int x;
			int z;
			cin>>x;
			for(z=0; z<n*m; z++) {
				if(s[z]>x) {
					break;
				}
			}
			cout<<m*n-z<<endl;

		}
	}
	return 0;
}
