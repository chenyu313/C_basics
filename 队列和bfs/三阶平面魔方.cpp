/*一个3x3的平面魔方中，在平面魔方中，每个格子里分别无重复地写上1-9，一共有4种平面魔方的操作
(1)选择某一行左移
(2)选择某一行右移 
(3)选择某一列上移 
(4) 选择某一列下移
现在给出魔方一个状态，问你是否能将魔方复原成初始状态，最少需要操作几步
输入格式：
		输入三行，每三个1到9之间的整数
输出格式：
		如果能还原成初始状态，输出最少操作步数，否则输出-1*/
#include<iostream>
using namespace std;
struct node
{
	int a[3][3];
	bool operator < (const node &x) const
	{
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
			{
				if(a[i][j]<x.a[i][j])
					return true;
			}
		return false;
	}
	bool operator ==(const node &x) const
	{
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
			{
				if(a[i][j]!=x.a[i][j])
					return true;
			}
		return false;
	}
	void print()
	{
		for(int i=0;i<3;i++)
		{
			for(int i=0;i<3;i++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}	
	}
	int tonum()
	{
		int res=0;
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
			{
				res=res*10+a[i][j];
			}
		return res;
	}
}init;
int bfs(node t)
{
	
}
int main()
{
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			init.a[i][j]=i*3+j+1;
		}
	node t;
	for (int i=0;i<3;i++)
	{
		int n;
		cin>>n;
		t.a[i][2]=n%10;
		n/=10;
		t.a[i][1]=n%10;
		n/=10;
		t.a[i][0]=n;
	}
	int ans=bfs(t);
	cout<<ans<<endl;
	return 0;
}
