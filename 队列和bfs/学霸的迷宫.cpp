//学霸的迷宫
/*问题描述
　　学霸抢走了大家的作业，班长为了帮同学们找回作业，决定去找学霸决斗。但学霸为了不要别人打扰，住在一个
城堡里，城堡外面是一个二维的格子迷宫，要进城堡必须得先通过迷宫。因为班长还有妹子要陪，磨刀不误砍柴功
，他为了节约时间，从线人那里搞到了迷宫的地图，准备提前计算最短的路线。可是他现在正向妹子解释这件事情
，于是就委托你帮他找一条最短的路线。
输入格式：
	第一行两个整数n， m，为迷宫的长宽。
　　接下来n行，每行m个数，数之间没有间隔，为0或1中的一个。0表示这个格子可以通过，1表示不可以。假设你
现在已经在迷宫坐标(1,1)的地方，即左上角，迷宫的出口在(n,m)。每次移动时只能向上下左右4个方向移动到另外
一个可以通过的格子里，每次移动算一步。数据保证(1,1)，(n,m)可以通过。
输出格式：
		第一行一个数为需要的最少步数K。
　　第二行K个字符，每个字符∈{U,D,L,R},分别表示上下左右。如果有多条长度相同的最短路径，选择在此表示方
法下字典序最小的一个。*/
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
