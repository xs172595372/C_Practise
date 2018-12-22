#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char s[100]= {0};
	while(gets(s)) {
		int len=strlen(s);
		int flag=0;
		for(int i=0; i<len; i++) {
			if((s[i]<'a'||s[i]>'z')&&(s[i]<'A'||s[i]>'Z')) {
				int j=i-flag;
				int z=i-1;
				flag=i+1;
				while(j--) {
					cout<<s[z--];
				}
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
