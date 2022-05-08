//�Թ�����ʵ��
#include<iostream>
#include<string>
using namespace std;
int n,m;
bool vis[110][110];
string maze[110];		//�Թ���ͼ���൱�ڶ�ά���� 
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
	//������
	int tx=x-1,ty=y;
	if(in(tx,ty) && maze[tx][ty]!='*' && !vis[tx][ty])		//�õ��ڷ�Χ�ڣ��Ҳ���ǽ��δ���ʹ� 
	{
		if(dfs(tx,ty))
		{
			return true;
		}
	} 
	//������
	tx=x,ty=y-1; 
	if(in(tx,ty) && maze[tx][ty]!='*' && !vis[tx][ty])
	{
		if(dfs(tx,ty))
		{
			return true;
		}
	} 
	//������
	tx=x+1,ty=y;
	if(in(tx,ty) && maze[tx][ty]!='*' && !vis[tx][ty])
	{
		if(dfs(tx,ty))
		{
			return true;
		}
	}  
	//������
	tx=x,ty=y+1;
	if(in(tx,ty) && maze[tx][ty]!='*' && !vis[tx][ty])
	{
		if(dfs(tx,ty))
		{
			return true;
		}
	}
	//�����еĻ�����
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
