#include<stdio.h>
#include<math.h>

long long gys(long long x,long long y) {
	long long i;
	x=abs(x);
	if(x<y) {
		i=x;
	} else {
		i=y;
	}
	for(; i>0; i--) {
		if(x%i==0&&y%i==0) {
			return i;
		}
	}
	if(y==0){
		return 0;
	}
	return 1;
	
}
int main() {
	long long num,i,j,a,b,c,d,e,f,ys;
	scanf("%lld",&num);
	scanf("%lld/%lld",&a,&b);
	for(i=0; i<num-1; i++) {
		scanf("%lld/%lld",&c,&d);
		f=(long long)(b*d/gys(b,d));
		e=f/b*a+f/d*c;
		a=(long long)e;
		b=f;
		ys=gys(a,b);
		a=(long long)(a/ys);
		b=(long long)(b/ys);
	}
	if(num==1) {
		ys=gys(a,b);
		a=(long long)(a/ys);
		b=(long long)(b/ys);
	}
	if(abs(a)>=b) {
		(long long)(c=a/b);
		a=a-c*b;
		if(a==0) {
			printf("%lld",c);
		} else {
			printf("%lld %lld/%lld",c,a,b);
		}
	} else {
		if(a==0) {
			printf("0");
		} else {
			printf("%lld/%lld",a,b);
		}
	}

	return 0;
}
