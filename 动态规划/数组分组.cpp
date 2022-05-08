//数组分组
/*一个长度为n的数组a，我们把它分成任意组，每一组是一段连续的区间。比如数组1,2,3,4,5可以分成(1,2),(3,4,5)
两个组。每个组都有一个权值，这个权值就是每个数的乘积对1000取模的结果。那么对于a，分组以后的最大权值和是
多少？
输入格式：
		输入一个整数n(1<=n<=1000)。
		接下来一行n个整数，表示数组a，数组每个元素小于等于100.
输出格式：
		数组最大的分组权值和。*/
#include<iostream>
using namespace std;
int a[1010];
int dp[1010];
int pre[1010][1010];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		pre[i][i]=a[i];
		for(int j=i+1;j<=n;j++)
		{
			pre[i][j]=pre[i][j-1]*a[j]%1000;
		}
	}
	dp[0]=0;
	dp[1]=a[1];
	for(int i=2;i<=n;i++)
	{
			for(int j=0;j<i;j++)
		{
			dp[i]=max(dp[i],dp[j]+pre[j+1][i]);
		}
		cout<<dp[i]<<endl;
	}
	//	cout<<dp[n]<<endl;
	return 0;
}
