//实现报数游戏
/*一共有n个人，数到m的人出列，直到最后一个人 
输入格式：
		输入n和m
输出格式：
		输出最后那个人*/
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int> q;
	int n,m;
	cin>>n>>m;
	//入队 
	for(int i=1;i<=n;i++)
	{
		q.push(i);
	}
	int t=1;		//用来记数
	//开始数数 
	while(q.size()>1)
	{
		int x=q.front();
		q.pop(); 
		if(t==m)
		{
			t=1;
		} 
		else
		{
			q.push(x);
			t++;
		}
	} 
	cout<<q.front()<<endl;
	return 0;
 } 
