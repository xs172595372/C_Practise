#include<iostream>
#include<queue>
using namespace std;
int a[105][105]= {0};	//��ά����a�洢���� ���ڽӾ���
//int find(int x,int y,int len) {
//	int min=100000;
//	for(int i=1; i<=len; i++) {
//		int sum=0;
//		if(a[x][i]!=0) {
//			sum+= a[x][i];
//			if(a[i][y]!=0) {
//				sum+= a[i][y];
//			} else {
//				sum+=find(i,y,len);
//			}
//		} else {
//			continue;
//		}
//		if(min>sum) {
//			min=sum;
//		}
//	}
//	return min;
//}
void bfs(int i,int j){
	queue<int> Q;
	Q.push(a[i][j]);
	while(!Q.empty()){
		
	}
}
int main() {
	int num;
	cin>>num;
	while(num--) {
		int n,p,c;
		cin>>n>>p>>c;		//n����������p����·�����֣�c���������
		int s[105]= {0};		//s�洢ÿ�������ڵ�·�ں�
		for(int i=0; i<n; i++) {	//ѭ�����ÿ�������ڵ�·�ں�
			cin>>s[i];
		}
		for(int i=0; i<c; i++) {		//�洢����
			int x,y,z;
			cin>>x>>y>>z;
			a[x][y]=z;
			a[y][x]=z;
		}
		for(int i=1; i<=p; i++) {
			for(int j=2; j<=p; j++) {
				if(a[i][j]==0&&i!=j) {
//					a[i][j]=find(i,j,p);
//					a[j][i]=a[i][j];	
					for(int k=1;k<=p;k++){
						if(a[i][k]!=0){
							bfs(i,k);
						}
					}
				}
			}
		}
		int min=1000;
		for(int i=1; i<=p; i++) {
			int sum=0;
			for(int j=0; j<n; j++) {
				sum+=a[i][s[j]];
			}
			if(sum<min&&sum!=0) {
				min=sum;
			}
		}
		cout<<min<<endl;
	}
	return 0;
}


