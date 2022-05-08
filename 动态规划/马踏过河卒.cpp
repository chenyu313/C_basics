//马踏过河卒
/*点A(0,0)有一个过河卒,需要走到目标B(n,m)点.过河卒行走规则：可以向下或者向右。同时在棋盘上的任一点有一个对方的马
现要求卒不能通过对方马的控制点走到B*/
#include<iostream>
using namespace std;
int dir[8][2]={{1,2},{2,1},{1,-2},{-2,1},{-1,2},{2,-1},{-1,-2},{-2,-1}};
bool d[30][30];
long long dp[30][30];		//表示能走到点B的方案数 
int main()
{
	int n,m,cx,cy;		//n,m是棋盘大小，cx,cy是马的位置
	cin>>n>>m>>cx>>cy;
	d[cx][cy]=true;
	for(int k=0;k<8;k++)
	{
		int tx=cx+dir[k][0];
		int ty=cy+dir[k][1];
		if(0<=tx&&tx<=n&&0<=ty&&ty<=m)
		{
			d[tx][ty]=true;
		}
	}
	dp[0][0]=1;
	for(int i=0;i<=n;i++)
		for(int j=0;j<=m;j++)
		{
			if(!d[i][j])
			{
				if(i)
					dp[i][j]+=dp[i-1][j];	//B点的走法等于它上面的格子加上它左边的格子 
				if(j)
					dp[i][j]+=dp[i][j-1];
			}
		} 
	cout<<dp[n][m]<<endl; 
	return 0;
} 
