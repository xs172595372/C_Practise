#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n;
	string s;
	cin>>n;
	getchar();
	getline(cin,s);
	int len=s.size();
	int k=len/n;
	if(len%n){
		k++;
	}
	char z[105][105];
	memset(z,32,sizeof(z));
	int f=0;
	for(int i=k-1; i>=0; i--) {
		for(int j=0; j<n; j++) {
			z[j][i]=s[f++];
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<k; j++) {
			printf("%c",z[i][j]);
		}
		if(i!=n-1) {
			printf("\n");
		}
	}
	return 0;
}
