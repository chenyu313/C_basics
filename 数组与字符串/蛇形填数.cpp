//��������
/*��nxn����������1,2.....,nxn��Ҫ��������Σ�����
���룺
	4
�����
	10 11 12 1
	9  16 13 2
	8  15 14 3
	7  6  5  4 
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
#define max 20
using namespace std;
int a[max][max];
int main()
{
	int n,x,y,t=1;
	cin>>n;
	memset(a,0,sizeof(a));		//��ʼ��
	a[0][n-1]=1;				//��ʼ 
	x=0;
	y=n-1;
	while(t<n*n){
		//��
		while(x+1<n&&!a[x+1][y])
			a[++x][y]=++t; 
		//��
		while(y-1>=0&&!a[x][y-1])
			a[x][--y]=++t;
		//��
		while(x-1>=0&&!a[x-1][y])
			a[--x][y]=++t;
		//��
		while(y+1<n&&!a[x][y+1])
			a[x][++y]=++t; 
	} 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<"\t";	
		}
		cout<<endl;
	}
	return 0;
}

