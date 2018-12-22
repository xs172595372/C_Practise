#include<iostream>
#include<set>
using namespace std;
int main() {
	int num,i;
	cin>>num;
	int temp;
	set<int> s;
	for(i=0; i<num; i++) {
		cin>>temp;
		if(temp!=1) {
			s.insert(temp);
		}
	}
	set<int>::iterator it=s.begin();
//	for(it=s.begin();it!=s.end();it++){
//		cout<<*it<<" ";
//	}

	while(it!=s.end()) {
		int x=*it;
		while(x!=1) {
			if(x%2) {
				x=(3*x+1)/2;
			} else {
				x=x/2;
			}
			s.erase(x);
		}
		it++;
	}
	int a[101]= {0},j=0;
	for(it=s.begin(); it!=s.end(); it++) {
		a[j++]=(*it);
//		cout<<*it;
	}
	for(i=j-1; i>=0; i--) {
		cout<<a[i];
		if(i!=0) {
			cout<<" ";
		}
		
	}
	return 0;
}
