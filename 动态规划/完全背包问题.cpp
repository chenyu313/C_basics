//完全背包问题
/*有N件物品和容积为V的背包，已知第i件物品的体积为ci，价值为wi，每种物品的数量都是无限的，可以任意
放*/
#include<iostream>
using namespace std;
int dp[105][1005];
int w[105],c[105];
int main()
{
	int N,V;
	cin>>N>>V;
	for(int i=1;i<=N;i++)
	{
		cin>>w[i]>>c[i]; 
	}
	
	for(int i=1;i<=N;i++)
	{
		for(int j=0;j<=V;j++)
		{
			if(j>=c[i])
			{
				dp[i][j]=max(dp[i][j-c[i]]+w[i],dp[i-1][j]);	//可以从当前物品不断选取 
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout<<dp[N][V]<<endl;
	return 0;
} 
/*样例
5 10
2 1
3 5
2 5
3 4
4 3
*/ 
