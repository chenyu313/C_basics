//回家
/*某同学要回家，已知他在左下角(1,1)，而家在右上角(n,n)，他没走一个格子会花费一些体力，而且他只会
往上或往右，他现在想知道回家最少花费的体力*/
#include<iostream>
#include<algorithm>
using namespace std;
int a[100][100];		//表示地图 
int n;
int d[100][100];		//表示到家花费的体力 
int main()
{
	d[1][1]=0; 
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int x=1;x<=n;x++)
		for(int y=1;y<=n;y++)
		{
			if(x==1&&y==1)
				continue;
			else if(x==1)
			{
				d[x][y]=d[x][y-1]+a[x][y];
			}
			else if(y==1)
			{
				d[x][y]=d[x-1][y]+a[x][y];
			}
			else
			{

				d[x][y]=(d[x-1][y]>d[x][y-1]?d[x][y-1]:d[x-1][y])+a[x][y];
			}
		}
	cout<<d[n][n]<<endl; 
	return 0;
} 
/*样例
3
0 3 4
6 2 5
5 4 3
*/ 
