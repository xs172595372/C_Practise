#include<iostream>
#include<set>
using namespace std;
int main() {
	set<long long> s[55],ss;
	set<long long>::iterator it;
	long long num;
	int a,b,c,i,j,nc,nt;
	double x;
	cin>>a;
	for(i=1; i<=a; i++) {							//循环a次，输入a个集合存入对应的s[i] 
		cin>>b;
		for(j=0; j<b; j++) {
			cin>>num;
			s[i].insert(num);
		}
	}
	cin>>c;
	for(i=0; i<c; i++) {							// 循环c次进行c次相似度计算 
		cin>>a>>b;
		for(it=s[a].begin();it!=s[a].end();it++){	//遍历s[a],存入ss 
			ss.insert(*it);
		}
		for(it=s[b].begin();it!=s[b].end();it++){	//遍历s[b],存入ss,此时已经除去a,b中相同元素 
			ss.insert(*it);
		}
	//	ss.insert(s[a].begin(),s[a].end());
	//	ss.insert(s[b].begin(),s[b].end());
		nc=s[a].size()+s[b].size()-ss.size();		//计算被除去的相同元素个数，即nc 
		nt=ss.size();								//此时ss的长度即为nt 
		x=(double)nc/(double)nt*100.0;
		printf("%.2lf\%\n",x);
	}
	return 0;
}
