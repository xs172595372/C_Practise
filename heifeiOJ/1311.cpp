#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int num;
	cin>>num;
	vector<int> s;
	for(int i=0;i<num;i++){
		int t;
		cin>>t;
		s.push_back(t);
	}
	sort(s.begin(),s.end());
	int sum=0;
	for(int i=0;i<num-1;i++){
		sum+=s[i];
	}
	if(num!=1){
		cout<<sum;
	} else{
		cout<<0;
	}
	return 0;
}
