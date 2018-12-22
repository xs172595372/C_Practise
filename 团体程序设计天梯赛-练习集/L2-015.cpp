#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,k,m;
	cin>>n>>k>>m;
	int flag=0;
	int s[10005][15];
	double a[25];
	int z=0;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			cin>>s[i][j];
		} 
	} 
//	for(i=0;i<n;i++){
//		for(j=0;j<k;j++){
//			cout<<s[i][j]<<" ";
//		} 
//		cout<<endl;
//	}
	int max=0,min=100,sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			if(s[i][j]>max){
				max=s[i][j];
			}
			if(s[i][j]<min){
				min=s[i][j];
			}
			sum=sum+s[i][j];
		} 
		a[z++]=1.0*(sum-max-min)/(k-2);
		max=0;
		min=100;
		sum=0;
	} 
	
	sort(a,a+z);
	z--;
	z-=m;
	while(m--){
		z++;
		
		if(flag==0){
			printf("%.3f",a[z]);
			flag=1;
		}else{
			printf(" %.3f",a[z]);
		}
	} 
	return 0;
}
