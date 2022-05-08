//蛇形填数
/*在nxn方阵里填入1,2.....,nxn，要求填成蛇形，例：
输入：
	4
输出：
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
	memset(a,0,sizeof(a));		//初始化
	a[0][n-1]=1;				//开始 
	x=0;
	y=n-1;
	while(t<n*n){
		//下
		while(x+1<n&&!a[x+1][y])
			a[++x][y]=++t; 
		//左
		while(y-1>=0&&!a[x][y-1])
			a[x][--y]=++t;
		//上
		while(x-1>=0&&!a[x-1][y])
			a[--x][y]=++t;
		//右
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

