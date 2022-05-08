//迷宫最少步数
#include<iostream>
#include<string>
using namespace std;
int n,m;
string map[110];
int dir[4][2]={{-1,0},{0,-1},{1,0},{0,1}};		//定义方向，逆时针
int ans=10000;
bool vis[110][110];
bool in(int x,int y)
{
	return 0<=x&&x<n&&0<=y&&y<m;
}
void dfs(int r,int c,int s)
{
	//剪枝
	if(s>=ans)
	{
		return;
	}
	if(map[r][c]=='T')
	{
		if(ans>s)
		{
			ans=s;
		}
		return;
	}
	vis[r][c]=true;
	map[r][c]='m'; 
	for(int i=0;i<4;i++)
	{
		int vx=r+dir[i][0];
		int vy=c+dir[i][1];
		if(!vis[vx][vy] && map[vx][vy]!='*' && in(vx,vy))
		{
			dfs(vx,vy,s+1);
		}

	}
	vis[r][c]=false;
	map[r][c]='.';
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>map[i];
	for(int j=0;j<n;j++)
		for(int k=0;k<m;k++)
		{
			if(map[j][k]=='S')
				dfs(j,k,0);
		}
	

	cout<<ans<<endl;
	return 0;
}
/*样例


3 4
S**
....
***T


*/
