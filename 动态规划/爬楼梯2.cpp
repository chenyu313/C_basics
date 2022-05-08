//爬楼梯2
/*每次能跨奇数楼梯，求n阶楼梯的总走法*/
#include<iostream>
using namespace std;
int mod=100007;
int dp[10005];
int main()
{
	int n;
	cin>>n;
	dp[0]=1;
	for(int i=1;i<=n;i++)
	{
		dp[i]=0; 
		for(int j=i-1;j>=0;j-=2)//表示奇数的所有情况 
		{
			dp[i]+=dp[j];
		}
	}
	cout<<dp[n]<<endl;
	return 0;
} 
