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
	for(i=1; i<=a; i++) {							//ѭ��a�Σ�����a�����ϴ����Ӧ��s[i] 
		cin>>b;
		for(j=0; j<b; j++) {
			cin>>num;
			s[i].insert(num);
		}
	}
	cin>>c;
	for(i=0; i<c; i++) {							// ѭ��c�ν���c�����ƶȼ��� 
		cin>>a>>b;
		for(it=s[a].begin();it!=s[a].end();it++){	//����s[a],����ss 
			ss.insert(*it);
		}
		for(it=s[b].begin();it!=s[b].end();it++){	//����s[b],����ss,��ʱ�Ѿ���ȥa,b����ͬԪ�� 
			ss.insert(*it);
		}
	//	ss.insert(s[a].begin(),s[a].end());
	//	ss.insert(s[b].begin(),s[b].end());
		nc=s[a].size()+s[b].size()-ss.size();		//���㱻��ȥ����ͬԪ�ظ�������nc 
		nt=ss.size();								//��ʱss�ĳ��ȼ�Ϊnt 
		x=(double)nc/(double)nt*100.0;
		printf("%.2lf\%\n",x);
	}
	return 0;
}
