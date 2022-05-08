//迷宫搜索优化 
/*可以将方向写在数组里*/
#include<iostream>
#include<string>
using namespace std;
int n,m;
bool vis[110][110];
string maze[110];		//迷宫地图，相当于二维数组 
int dir[4][2]={{-1,0},{0,-1},{1,0},{0,1}}; 
bool in(int x,int y)	//是否在范围内 
{
	return 0<=x&&x<n&&0<=y&&y<m;
}
bool dfs(int x,int y)	//深度搜索 
{
	if(maze[x][y]=='T')		//如果这是终点的话 
	{
		return true;
	}
	vis[x][y]=1;		//否则标记该点走过
	maze[x][y]='m';
	int tx,ty;
	for(int i=0;i<4;i++)
	{
		tx=x+dir[i][0];
		ty=y+dir[i][1];
		if(in(tx,ty) && maze[tx][ty]!='*' && !vis[tx][ty])
		{
			if(dfs(tx,ty))
				return true;
		}	
	} 
	
	vis[x][y]=0;
	maze[x][y]='.';
	return false;
}
int main()
{
	int x,y; 
	cin>>n>>m;			//输入迷宫的高度和宽度 
	for(int i=0;i<n;i++)
	{
		cin>>maze[i];
	} 
	for(int j=0;j<n;j++)
		for(int k=0;k<m;k++)
		{
			if(maze[j][k]=='S')
			{
				x=j;
				y=k;
			}
		}
	if(dfs(x,y))
	{
		for(int i=0;i<n;i++)
			cout<<maze[i]<<endl;
	}
	else
		cout<<"No!"<<endl;
	return 0;
} 
/*样例

5 6
....S*
.***..
.*..*.
*.***.
.T....

*/ 
