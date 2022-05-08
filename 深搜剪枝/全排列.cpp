//全排列
/*
输入格式:
		输入一个整数
输出格式：
		第一行输出全排列的总方案数
		接下来输出序列*/
#include<iostream>
using namespace std;
int n,ans=1;
bool vis[15];
void dfs(int cnt,int num)	//n为位数 
{
	if(cnt==n)		//当达到位数时 
	{
		cout<<num<<endl;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i]=true;
			dfs(cnt+1,num*10+i);
			vis[i]=false;
		}
		
	} 
	return;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		ans*=i;
	}
	cout<<ans<<endl;
	dfs(0,0);
	return 0;
}		 
