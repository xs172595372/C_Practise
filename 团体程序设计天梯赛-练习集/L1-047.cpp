#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string name;
		int l,r;
		cin>>name>>l>>r;
		if(l<15||l>20||r<50||r>70){
			cout<<name<<endl;
		}
	}
	return 0;
}
