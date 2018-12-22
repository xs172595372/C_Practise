#include<iostream>
#include<set>
using namespace std;
int main(){
  int year,num;
  cin>>year>>num;
  int i;
  for(i=year;i<=3012;i++){
    set<int> s;
    int j;
    int n=i;
    for(j=0;j<4;j++){
      s.insert(n%10);
      n/=10;
    }
    if(s.size()==num){
      cout<<i-year<<" ";
      printf("%04d",i);
      break;
    }
  }
  return 0;
}
