#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int find(string x) {
	for(int i=0; i<x.length(); i++) {
		if(x[i]=='.') {
			return i;
		}
	}
	return x.length();
}
int main() {
	int num;
	cin>>num;
	while(num--) {
		vector<int> c;
		vector<char> k;
		string x,y;
		cin>>x>>y;
		int lx=find(x);
		int ly=find(y);
		int wx,wy;
		stack<int> s;
		for(wx=lx-1,wy=ly-1; wx>=0||wy>=0; wx--,wy--) {
			if(wx<0) {
				s.push(y[wy]-97);
			} else if(wy<0) {
				s.push(x[wx]-97);
			} else {
				s.push(x[wx]+y[wy]-194);
			}
		}
		int m=s.size();
		while(m--) {
			c.push_back(s.top());
			s.pop();
		}
		int lc=c.size();
		for(wx=lx+1,wy=ly+1; wx<x.size()||wy<y.size(); wx++,wy++) {
			if(wx>=x.size()) {
				c.push_back(y[wy]-97);
			} else if(wy>=y.size()) {
				c.push_back(x[wx]-97);
			} else {
				c.push_back(x[wx]+y[wy]-194);
			}
		}
		vector<int>::iterator it;
		for(it=c.end()-1; it!=c.begin(); it--) {
			if(*it>=26) {
				*it-=26;
				*(it-1)+=1;
			}
		}
		if(*it>=26) {
			*it-=26;
			c.insert(c.begin(),1);
			lc++;
		}
		int cnt=0;
		int flag=0;
		for(it=c.begin(); it!=c.end(); it++,cnt++ ) {
			if(cnt==lc) {
				k.push_back('.');
				flag=1;
			}
			k.push_back(*it+97);
		}
		vector<char>::iterator ite;
		while(1) {
			ite=k.end()-1;
			if(flag==1&&(*ite)=='a') {
				k.pop_back();
			} else {
				break;
			}
		}
		ite=k.end()-1;
		if(flag==1&&(*ite)=='.') {
			k.pop_back();
		}
		while(1) {
			ite=k.begin();
			if(*ite=='a'&&lc>1) {
				k.erase(ite);
				lc--;
			} else {
				break;
			}
		}
		for(ite=k.begin(); ite!=k.end(); ite++) {
			cout<<*ite;
		}
		cout<<endl;
	}
	return 0;
}
