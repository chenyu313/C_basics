//小明的日志
/*小明喜欢把做过的事情记录下来，写在日志里，为了安全起见，他还有一个备份放在另外一个地方，不过很不幸
，最近他的两个日志都遭到了破坏，但是没有改变原来的顺序，他记录事情都是按照时间顺序的，记录的也都是时间戳，
所以记录的时间肯定是严格递增的，并且只有两份记录都出现的时间戳他才认为有可能自己做了，现在他想知道他
最多可能做了多少件事。
输入格式：
		第一行输入两个整数n,m代表两份记录的长度
		接下来n个整数记录第一个时间戳
		m....
输出格式：
		输出一个整数，代表小明最多可能做了多少件事*/
//方法：最长上升子序列&&最长公共子序列 
#include<iostream>
using namespace std;
int a[105],b[105];
int dp[105][105];
int main()
{
	int n,m;
	int max1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int j=1;j<=m;j++)
	{
		cin>>b[j];
	}
	for(int i=1;i<=n;i++)
	{
		max1=0;
		for(int j=1;j<=m;j++)
		{
			dp[i][j]=dp[i-1][j];
			//cout<<"dp["<<i<<"]"<<"["<<j<<"]"<<"="<<"dp["<<i-1<<"]["<<j<<"]="<<dp[i][j]<<endl;
			if(a[i]>b[j]&&max1<dp[i-1][j])
			{
				max1=dp[i-1][j];
			}
			else if(a[i]==b[j])
			{
				dp[i][j]=max1+1;
			}
			//cout<<"运算后:"<<"dp[i][j]="<<dp[i][j]<<endl; 
		}
	}
	for(int k=1;k<=m;k++)
	{
		max1=max(max1,dp[n][k]);
	}
	cout<<max1<<endl;
	return 0;
}
