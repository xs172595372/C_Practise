#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > s;
int find(int x){
	
}
int main(){
	int num,i;
	cin>>num;
	for(i=0;i<num;i++){
		int n,m,k,t;
		cin>>n>>m>>k;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){ 
				cin>>t;
				s[n].push_back(t);
			}
		}
		int max=find(0);
		for(int i=0;i<k;i++){
			max+=find(1);
		}
		cout<<max<<endl;
	}
	return 0;
} 
