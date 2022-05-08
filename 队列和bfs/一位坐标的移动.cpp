//一维坐标的移动(bfs)
/*在一个长度为n的坐标轴上，小明想从A点移动到B点。他的移动规则如下：
(1)向前一步，坐标增加1
(2)向后一步，坐标减少1
(3)跳跃一步，使坐标x2
小明不能移动到坐标小于0，大于n的位置，求从A到B最少的步数
输入格式：
		第一行输入三个整数n,A,B(0<=A,B<=n<=5000)
输出格式：
		输出最少步数*/
#include<iostream>
#include<queue>
using namespace std;
int n,A,B;
int dir[3]={1,2,3};
//模拟点 
struct Node
{
	int o,step;//当前点和步数 
	Node(int oo,int s)
	{
		o=oo;
		step=s;
	}
};
//是否在范围内 
bool in(int x)
{
	return 0<x&&x<n;
}
//广度优先搜索 
int bfs(int x,int y)
{
	queue<Node> q;		
	q.push(Node(x,0));	//录入第一个点的位置和步数 
	while(!q.empty())	//队列非空时 
	{
		Node now=q.front();		
		q.pop();					//队首出队 
		for(int i=0;i<3;i++)
		{
			int tx;
			//模拟位置向前 
			if(i==0)			
			{
				tx=now.o+1;
				if(tx==y)
				{
					return now.step+1;
				}
				if(in(tx))
				{
					q.push(Node(tx,now.step+1));		//将这个点入队 
				}
			}
			//模拟位置向后 
			if(i==1)
			{
				tx=now.o-1;
				if(tx==y)
				{
					return now.step+1;
				}
				if(in(tx))
				{
					q.push(Node(tx,now.step+1));
				}
			}
			//模拟位置跳跃
			if(i==2)
			{
				tx=now.o*2;
				if(tx==y)
				{
					return now.step+1;
				}
				if(in(tx))
				{
					q.push(Node(tx,now.step+1));
				}
			}
		}
	}
	return -1; 
}
int main()
{
	cin>>n>>A>>B;
	cout<<bfs(A,B)<<endl;
	return 0;
 }
 /*样例
 10 2 7
 */ 
