#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
    	char sex;
    	double sg;
    	cin>>sex>>sg;
		if(sex=='M'){
			printf("%.2lf\n",sg/1.09);
		} else {
			printf("%.2lf\n",sg*1.09);
		}
	}
    return 0;
}
