#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct a {
	int a,b;
} s[1000];
int cmp(int a,int b) {
	return a>b;
}
int Do() {
	int N,M;
	cin>>N>>M;
	for(int i=0; i<M; i++) {
		cin>>s[i].a>>s[i].b;
	}
	vector<int> arr;
	for(int i=1; i<=N; i++) {
		arr.push_back(i);
	}
	sort(arr.begin(),arr.end(),cmp);
	int fa=-2,fb=-1,success=1;
	do {
		for(int i=0; i<M; i++) {
			for(int j=0; j<N; j++) {
				if(arr[j]==s[i].a) {
					fa=j;
				}
				if(arr[j]==s[i].b) {
					fb=j;
				}
			}
			if(fa>=fb) {
				success=0;
				break;
			}
		}
		if(success) {
			for(vector<int>::iterator it=arr.begin(); it!=arr.end(); it++) {
				cout<<*it<<" ";
			}
			return 0;
		}
		success=1;
	} while(prev_permutation(arr.begin(),arr.end()));
}
int main() {
	int num;
	cin>>num;
	while(num--) Do();
	return 0;
}
