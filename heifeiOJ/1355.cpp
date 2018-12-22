#include<iostream>
#include<set> 
using namespace std;
int a[1005]={0},z=0;
int main(){
	set<int> s;
	int num;
	cin>>num;
	int i;
	for(i=0;i<num;i++){
		int len;
		cin>>len;
		int j;
		for(j=0;j<len;j++){
			int x;
			cin>>x;
			s.insert(x);
		}
		int check;
		cin>>check;
		set<int>::iterator it;
		for(it=s.begin();it!=s.end();it++){
			a[z++]=*it;
		} 
		cout<<a[z-check]<<endl;
		s.clear();
	}
	return 0;
} 
