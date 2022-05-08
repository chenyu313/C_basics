//ѧ�Ե��Թ�
/*��������
����ѧ�������˴�ҵ���ҵ���೤Ϊ�˰�ͬѧ���һ���ҵ������ȥ��ѧ�Ծ�������ѧ��Ϊ�˲�Ҫ���˴��ţ�ס��һ��
�Ǳ���Ǳ�������һ����ά�ĸ����Թ���Ҫ���Ǳ��������ͨ���Թ�����Ϊ�೤��������Ҫ�㣬ĥ�����󿳲�
����Ϊ�˽�Լʱ�䣬����������㵽���Թ��ĵ�ͼ��׼����ǰ������̵�·�ߡ������������������ӽ����������
�����Ǿ�ί���������һ����̵�·�ߡ�
�����ʽ��
	��һ����������n�� m��Ϊ�Թ��ĳ���
����������n�У�ÿ��m��������֮��û�м����Ϊ0��1�е�һ����0��ʾ������ӿ���ͨ����1��ʾ�����ԡ�������
�����Ѿ����Թ�����(1,1)�ĵط��������Ͻǣ��Թ��ĳ�����(n,m)��ÿ���ƶ�ʱֻ������������4�������ƶ�������
һ������ͨ���ĸ����ÿ���ƶ���һ�������ݱ�֤(1,1)��(n,m)����ͨ����
�����ʽ��
		��һ��һ����Ϊ��Ҫ�����ٲ���K��
�����ڶ���K���ַ���ÿ���ַ���{U,D,L,R},�ֱ��ʾ�������ҡ�����ж���������ͬ�����·����ѡ���ڴ˱�ʾ��
�����ֵ�����С��һ����*/
#include<iostream>
#include<queue>
#include<string>
using namespace std;
string map[510];
int n,m;
bool vis[510][510];
int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};
char dir[4]={'D','L','R','U'};
bool in(int x,int y)
{
	return 0<=x&&x<n&&0<=y&&y<m;
}
struct Node
{
	int x,y,step;
	string path;
	Node(int xx,int yy,int s,string p)
	{
		x=xx;
		y=yy;
		step=s;
		path=p;
	}
};
void bfs(int x,int y)
{
	queue<Node> q;
	q.push(Node(x,y,0,""));
	vis[x][y]=true;
	while(!q.empty())
	{
		Node now=q.front();
		q.pop();
		for(int i=0;i<4;i++)
		{
			int tx=now.x+dx[i];
			int ty=now.y+dy[i];
			if(!vis[tx][ty]&&in(tx,ty)&&map[tx][ty]!='1')
			{
				if(tx==n-1&&ty==m-1)
				{
					cout<<now.step+1<<endl;
					cout<<now.path+dir[i]<<endl;
					return;
				}
				else
				{
					vis[tx][ty]=true;
					q.push(Node(tx,ty,now.step+1,now.path+dir[i]));
				}
				
			}	
		} 
		
	}
}
int main()
{
	
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>map[i];
	bfs(0,0);
	return 0;
}
