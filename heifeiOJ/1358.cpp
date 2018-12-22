#include<iostream>
#include<algorithm>
using namespace std;
struct score {
	int max;
	int mid;
	int min;
} s[1005];
int cmp(struct score a,struct score b) {
	return a.mid>b.mid;
}
int main() {
	int num;
	cin>>num;
	while(num--) {
		int t;
		cin>>t;
		int i,sum=0;
		for(i=0; i<t; i++) {
			cin>>s[i].max>>s[i].min>>s[i].min;
			s[i].mid=s[i].max-s[i].min;
			sum+=s[i].max;
		}
		int time;
		cin>>time;
		sort(s,s+t,cmp);
		int cnt=t;
		i=0;
		while(sum>time){
			sum-=s[i++].mid;
			cnt--;
		}
		if(cnt<0){
			cout<<"Oh,my god!"<<endl;
		}else{
			cout<<cnt<<endl;
		}
	}
	return 0;
}
