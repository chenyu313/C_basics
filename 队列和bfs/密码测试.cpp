//密码测试
/*输入一串四个数字的密码，可以加，减或者和相邻的数交换位置(9加1还是1,1减1是9)
输入格式：
		第一行输入测试密码 
		第二行输入目标密码
输出格式：
		输出最少步骤*/
#include<iostream>
#include<queue>
using namespace std;
int vis[11][11][11][11];
struct Node
{
	int num[4],step;
	
}test,goal;
int bfs()
{
	queue<Node> q;
	Node a,next;
	a=test;
	a.step=0;
	q.push(a);
	vis[a.num[0]][a.num[1]][a.num[2]][a.num[3]]=1;
	while(!q.empty())
	{
		Node now=q.front();
		q.pop();
		if(now.num[0]==goal.num[0]&&now.num[1]==goal.num[1]&&now.num[2]==goal.num[2]&&now.num[3]==goal.num[3])
		{
			return now.step;
		}
		//加
		for(int i=0;i<4;i++)
		{
			next=now;
			next.num[i]++;
			if(next.num[i]==10)
			{
				next.num[i]=1;
			} 
			if(!vis[next.num[0]][next.num[1]][next.num[2]][next.num[3]])
			{
				vis[next.num[0]][next.num[1]][next.num[2]][next.num[3]]=1;
				next.step++;
				q.push(next);
			}
		} 
		//减
		for(int i=0;i<4;i++)
		{
			next=now;
			next.num[i]--;
			if(next.num[i]==0)
			{
				next.num[i]=9;
			} 
			if(!vis[next.num[0]] [next.num[1]] [next.num[2]] [next.num[3]])
			{
				vis[next.num[0]][next.num[1]][next.num[2]][next.num[3]]=1;
				next.step++;
				q.push(next);
			}
		} 
		//位置互换
		for(int i=0;i<3;i++)
		{
			next=now;
			next.num[i]=now.num[i+1];
			next.num[i+1]=now.num[i];
			if(!vis[next.num[0]] [next.num[1]] [next.num[2]] [next.num[3]])
			{
				vis[next.num[0]] [next.num[1]] [next.num[2]] [next.num[3]]=1;
				next.step++;
				q.push(next);
			}
		}
	}
}
int main()
{
	for(int i=0;i<4;i++)
		cin>>test.num[i];
	for(int i=0;i<4;i++)
		cin>>goal.num[i];
	cout<<bfs()<<endl;
} 
/*样例
1 2 3 4
2 1 4 4
*/ 
