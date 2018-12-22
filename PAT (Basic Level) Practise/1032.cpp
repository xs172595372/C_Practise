#include<iostream>
#include<algorithm>
using namespace std;
struct wjj{
	int id;
	int score;
}s[100005]={0};
int cmp(wjj a,wjj b){
	return a.score>b.score;
}
int main(){
	int num;
	cin>>num;
	int i;
	for(i=0;i<num;i++){
		int id,x;
		cin>>id;
		cin>>x;
		s[id].id=id;
		s[id].score+=x;
	}
	sort(s,s+num+1,cmp);
	cout<<s[0].id<<" "<<s[0].score;
	return 0;
}
