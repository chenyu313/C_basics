//�Թ������Ż� 
/*���Խ�����д��������*/
#include<iostream>
#include<string>
using namespace std;
int n,m;
bool vis[110][110];
string maze[110];		//�Թ���ͼ���൱�ڶ�ά���� 
int dir[4][2]={{-1,0},{0,-1},{1,0},{0,1}}; 
bool in(int x,int y)	//�Ƿ��ڷ�Χ�� 
{
	return 0<=x&&x<n&&0<=y&&y<m;
}
bool dfs(int x,int y)	//������� 
{
	if(maze[x][y]=='T')		//��������յ�Ļ� 
	{
		return true;
	}
	vis[x][y]=1;		//�����Ǹõ��߹�
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
	cin>>n>>m;			//�����Թ��ĸ߶ȺͿ�� 
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
/*����

5 6
....S*
.***..
.*..*.
*.***.
.T....

*/ 
