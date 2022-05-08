//编辑距离
/*给两个字符串S，T用添加，删除和变化用最少的次数将T变成S*/
#include<iostream>
#include<string>
using namespace std;
int dp[105][105];	//dp[i][j]表示，S的前i位和T的前j为对齐后最少扣的分数 
int main()
{
	string a,b;
	cin>>a>>b;
	int lena=a.size();
	int lenb=b.size();
	//初始化边界(dp[i][0]=i  dp[0][j]=j)
	for(int i=1;i<=lena;i++)
	{
		dp[i][0]=i;	
	} 
	for(int j=0;j<=lenb;j++)
	{
		dp[0][j]=j;
	}
	//考虑四种情况(相同，不同<添加，删除，变化>) 
	for(int i=1;i<=lena;i++)
	{
		for(int j=1;j<=lenb;j++)
		{
			if(a[i-1]==b[j-1])	//若相同，不扣分 
			{
				dp[i][j]=dp[i-1][j-1]; 
			}
			else
			{
				dp[i][j]=min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1])+1;	//扣分 
			}
		}
	} 
	cout<<dp[lena][lenb]<<endl;
	return 0;
} 
