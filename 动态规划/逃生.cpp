//逃生
/*某同学在玩一款逃生游戏。在一个nxm的地图上，该同学位于一点，地图上有加血的药，也有扣血的火焰
如果是正数，则加血，如果是负数则扣血。该同学有v点血量，他的血量上限为c，任何时刻他的血量不可
大于上限，如果血量为0则死亡，不能进行游戏。
矩形地图有四个角(1,1),(1,m),(n,1),(n,m)为游戏出口。如果选定了一个出口只能朝着这个方向走，如果
逃生成功，剩余血量越高，游戏分数越高，为了能拿高分，逃生成功最多能剩余多少血量，如果不能则输出-1

输入格式：
		第一行输入整数n,m,x,y,v,c(x，y表示初始位置)
输出格式：
		输出一个整数，表示成功逃生最多剩余的血量*/
#include<iostream>
using namespace std;
int map[105][105];
int dp[105][105];
int n,m,x,y,v,c;
int ans;
int dx[4]={1,1,-1,-1};
int dy[4]={1,-1,1,-1};
int main()
{
	cin>>n>>m>>x>>y>>v>>c;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			cin>>map[i][j];
		}
	for(int t=0;t<4;t++)	//方向循环 
	{
		for(int a=x;a>0&&a<=n;a-=dx[t])
		{
			for(int b=y;b>0&&b<=m;b-=dy[t])
			{
				if(a==x && b==y)	//定位初始位置 
				{
					dp[a][b]=v;
				}
				else if(a==x)//
				{
					dp[a][b]=c<(dp[a][b+dy[t]]+map[a][b])?c:(dp[a][b+dy[t]]+map[a][b]);	//防止血量超过上限  
				}
				else if(b==y)
				{
					dp[a][b]=min(c,dp[a+dx[t]][b]+map[a][b]);
				} 
				else
				{
					dp[a][b]=min(c,max(dp[a+dx[t]][b],dp[a][b+dy[t]])+map[a][b]);
				}
					
				if(dp[a][b]<=0)
				{
					dp[a][b]=-1000000;
				}
			}
		}
	}
	ans=max(max(dp[1][1],dp[1][m]),max(dp[1][m],dp[n][m])); 
	cout<<ans<<endl;
	return 0;
 } 
 /*样例
4 4 3 2 5 10
1 2 3 4
-1 -2 -3 -4
4 0 2 1
-4 -3 -2 -1
*/
 
 
  
