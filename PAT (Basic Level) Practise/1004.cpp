#include<iostream>
#include<cstdio>
using namespace std;
struct stu{
	string name;
	string id;
	int score;
}temp,min1,max1;
int main(){
	int num;
	int i=0;
	max1.score=0;
	min1.score=100;
	cin>>num;
	for(i=0;i<num;i++){
		cin>>temp.name>>temp.id>>temp.score;
		if(max1.score<temp.score){
			max1.name=temp.name;
			max1.id=temp.id;
			max1.score=temp.score;
		}
		if(min1.score>temp.score){
			min1.name=temp.name;
			min1.id=temp.id;
			min1.score=temp.score;
		}
	} 
	cout<<max1.name<<" "<<max1.id<<endl;
	cout<<min1.name<<" "<<min1.id<<endl;
	return 0;
} 
