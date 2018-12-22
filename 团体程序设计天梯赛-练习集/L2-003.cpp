#include<iostream>
#include<algorithm>
using namespace std;
struct yb {
	float kc;
	float sj;
	float value;
} s[1005];
bool cmp(struct yb a,struct yb b) {
	return a.value>b.value;
}
int main() {
	int a,b;
	int i;
	float sy=0.0;
	cin>>a>>b;
	for(i=0; i<a; i++) {
		cin>>s[i].kc;
	}
	for(i=0; i<a; i++) {
		cin>>s[i].sj;
	}
	for(i=0; i<a; i++) {
		s[i].value=s[i].sj/s[i].kc;
	}
	sort(s,s+a,cmp);
	for(i=0; i<a; i++) {
		if(b>s[i].kc) {
			b=b-s[i].kc;
			sy=sy+s[i].sj;
		} else {
			sy=sy+b*s[i].value;
			break;
		}
	}
	printf("%.2f",sy);
	return 0;
}
