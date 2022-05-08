//爬楼梯
/*
有一个小孩正在爬楼梯，楼梯有n个台阶，小孩 可以爬1、2、3个台阶 
请实现一个方法，求小孩有多少种上楼方式 
*/ 
//方法1：dfs
#include<iostream>
using namespace std;
int ans;
int dfs(int n)
{
	if(n<0)
		return 0;
	if(n==1|| n==0)
		return 1;
	if(n==2)
		return 2;
	return dfs(n-1)+dfs(n-2)+dfs(n-3);
}
int main()
{
	int n;
	cin>>n;
	ans=dfs(n);
	cout<<ans<<endl;
	return 0;	
} 


/*#include<iostream>
using namespace std;
int dp[1005];
int main()
{
	int n;
	cin>>n;
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	for(int i=4;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	}
	cout<<dp[n]<<endl;
	return 0;
}*/
