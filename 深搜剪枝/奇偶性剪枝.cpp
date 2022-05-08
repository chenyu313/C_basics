//在nxm的地图里要求在时间T(第T步时)的时候出口D才会打开
//奇偶性剪枝 
#include<iostream>
#include<string>
using namespace std;
int n,m,T;
string map[1005];
bool f;
bool vis[1005][1005];
int tx[4]={0,0,-1,1};
int ty[4]={1,-1,0,0};
void dfs(int x,int y,int step)
{
	/*if(f)
	{
		return;
	} */
	if(step==T)
	{
		if(map[x][y]=='D')
		{
			f=true;
		}
		return;
	}
	vis[x][y]=true;
	for(int i=0;i<4;i++)
	{
		int x1=x+tx[i];
		int y1=y+ty[i];
		if(0<=x1&&x1<=n&&0<=y1&&y1<=m&&!vis[x1][y1]&&map[x1][y1]!='X')
		{
			dfs(x1,y1,step+1);
		}
	}
	vis[x][y]=false;
} 
int main()
{
	cin>>n>>m>>T;
	for(int i=0;i<n;i++)
		cin>>map[i];
	int sx,sy,ex,ey;
	for(int j=0;j<n;j++)
		for(int k=0;k<m;k++)
		{
			if(map[j][k]=='S')
			{
				sx=j;
				sy=k;
			}
			if(map[j][k]=='D')
			{
				ex=j;
				ey=k;
			} 
		}
	if((sx+sy+ex+ey+T)%2!=0)
		cout<<"No"<<endl;
	else
	{
		dfs(sx,sy,0);
		if(f)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
 } 
 /*样例
4 4 5
S.X.
..X.
..XD
....

*/ 
