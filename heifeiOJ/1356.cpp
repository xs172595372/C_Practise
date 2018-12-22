#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int T;  
    cin>>T;  
    while(T--){  
        double a,b,r;  
        cin>>a>>b>>r;  
        double xa,ya;  
        cin>>xa>>ya;  
        double w,t;  
        cin>>w>>t;  
        double xb=a+r*cos(w*t);  
        double yb=b+r*sin(w*t);  
        double d=abs((b-ya)*(xa-xb)-(ya-yb)*(a-xa))/(sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb)));  
        double ans=2*(sqrt(r*r-d*d));  
        printf("%.2f\n",ans);  
    }  
	return 0;
}
