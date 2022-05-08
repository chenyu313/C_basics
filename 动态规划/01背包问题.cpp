//01背包问题
/*有N件物品和容积为V的背包，已知第i件物品的体积为ci，价值为wi；在背包能承受的重量下，如何使价值最大
输入格式：
		输入N和V
		再输入N件物品的体积和价值
输出格式：
		输出最大价值 
*/
#include<iostream>
using namespace std;
int dp[50][105];
int c[100],w[100];
int main()
{
	int N,V;
	cin>>N>>V;
	for(int i=1;i<=N;i++)
	{
		cin>>w[i]>>c[i];	//输入物品的价值和体积
	}
	for(int i=1;i<=N;i++)		//表示第i件物品 
	{
		for(int j=0;j<=V;j++)
		{
			if(j>=c[i])			//从小体积开始，体积符合则取价值最大值
			{
				dp[i][j]=max(dp[i-1][j-c[i]]+w[i],dp[i-1][j]);	//当体积为j时，前i个物品价值总和最大为dp[i][j]; 
			} 
			else
			{
				dp[i][j]=dp[i-1][j];		//当当前体积大于j时，取之前的最大值 
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
 
