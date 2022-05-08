//旅游计划
/*某同学打算和家人一起出去旅游，但希望节省开支，他想怎样把所有的城市旅游一遍话费最小(并且同一个城市不会
再去)
输入格式：
		第一行输入一个n(1<=n<=15)，表示有n个城市
		接下来的nxn个矩阵，表示两城市之间火车的话费
输出格式：
		输出一个整数，表示最少花费*/
#include<iostream>
using namespace std;
int n,ans=100000000;
int map[20][20];
bool vis[20];
void dfs(int now,int money,int city)
{
	if(city==n)
	{
		money+=map[now][1];		//返回自己城市的钱 
		if(ans>money)
		{
			ans=money; 
		} 
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i]=true;
			dfs(i,money+map[now][i],city+1);
			vis[i]=false;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>map[i][j];
	dfs(1,0,0);
	cout<<ans<<endl;
	return 0;
 } 
 /*样例
4
0 1 1 1
1 0 2 1
5 5 0 6
1 1 3 0
*/ 
