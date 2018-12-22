#include<iostream>
using namespace std;
int main(){
	string f("1"),s("1");
	int cnt=0;
	while(1){
		string name;
		cin>>name;
		cnt++;
		if(name!="."){
			if(cnt==2){
				f=name;
			}else if(cnt==14){
				s=name;
			}
		}else{
			break;
		}
	}
	if(f=="1"&&s=="1"){
		cout<<"Momo... No one is for you ...";
	} else if(f!="1"&&s=="1"){
		cout<<f<<" is the only one for you...";
	} else if(f!="1"&&s!="1"){
		cout<<f<<" and "<<s<<" are inviting you to dinner...";
	}
	return 0;
}
