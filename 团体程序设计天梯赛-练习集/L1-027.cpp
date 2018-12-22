#include<stdio.h>
int sort(int a[],int L,int R){
	int i=L;
	int j=R;
	int v=a[(i+j)/2];
	int temp;
	while(i<=j){
		while(a[i]>v){
			i++;
		}
		while(v>a[j]){
			j--;
		}
		if(i<=j){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;	
			i++;
			j--;
		}
	}
	if(L<j){
		sort(a,L,j);
	}
	if(i<R){
		sort(a,i,R);
	}
	return 0;
}
int main(){
	char tel[12]={0};
	int count[12]={0};
	int arr[12]={0};
	int index[12]={0};
	int i,j=0,z;
	gets(tel);
	for(i=0;i<11;i++){
		count[tel[i]-'0']++;
	}
	for(i=0;i<11;i++){
		if(count[i]){
			arr[j++]=i;
		}
	}
	sort(arr,0,j-1);
	for(i=0;i<j;i++){
		for(z=0;z<11;z++){
			if(arr[i]==(tel[z]-'0')){
				index[z]=i;
			}
		}
	}
	printf("int[] arr = new int[]{");
	for(i=0;i<j-1;i++){
		printf("%d,",arr[i]);
	}
	printf("%d};\n",arr[i]);

	printf("int[] index = new int[]{");
	for(i=0;i<10;i++){
		printf("%d,",index[i]);
	}
	printf("%d};",index[i]);
	return 0;
}