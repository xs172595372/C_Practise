#include<iostream>
#include<set>
using namespace std;
struct p {
	int a,b;
} s[1005];
int main() {
	int N;
	cin>>N;
	while(N--) {
		int num;
		set<double> k;
		cin>>num;
		for(int i=0; i<num; i++) {
			cin>>s[i].a>>s[i].b;
		}
		for(int i=0; i<num; i++) {
			for(int j=i+1; j<num; j++) {
				double b=s[i].a-s[j].a;
				double c=s[i].b-s[j].b;
				if(b!=0) {
					double x=c/b;
					k.insert(x);
				}

			}
		}
		cout<<k.size()<<endl;
	}
	return 0;
}
