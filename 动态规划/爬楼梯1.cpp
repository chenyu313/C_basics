//爬楼梯
/*某同学每次只能一步跨一个楼梯或两个楼梯，对于一共有n阶楼梯，一共有多少种方法(结果可能很大，对100007取模)*/
#include<iostream>
using namespace std;
int dp[10005];
int mod=100007;
int main()
{
	dp[0]=dp[1]=1;
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		dp[i]=(dp[i-1]+dp[i-2])%mod;
	}
	cout<<dp[n]<<endl;
	return 0;
} 
