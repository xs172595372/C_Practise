#include<iostream>
using namespace std;
int main() {
	int num;
	cin>>num;
	getchar();
	while(num--) {
		string s;
		getline(cin,s);
		int H=0,C=0,O=0,N=0;
		for(int i=0; i<s.size(); i++) {
			if(s[i]=='H') {
				H++;
			} else if(s[i]=='C') {
				C++;
			} else if(s[i]=='O') {
				O++;
			} else if(s[i]=='N') {
				N++;
			} else if(s[i]>'0'&&s[i]<='9') {
				int k=s[i]-'0'-1;
				if(s[i-1]=='H') {
					H+=k;
				} else if(s[i-1]=='C') {
					C+=k;
				} else if(s[i-1]=='O') {
					O+=k;
				} else if(s[i-1]=='N') {
					N+=k;
				}
			}
		}
		int r=H*1+C*12+N*14+O*16;
		cout<<r<<endl;
	}
	return 0;
}
