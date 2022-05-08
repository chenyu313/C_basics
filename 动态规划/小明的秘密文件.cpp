//小明的秘密文件
/*每个人都有点秘密，小明也不例外，他把秘密记在了一个小本上，并留有备份，不过第一本的内容被人破坏了
他现在想照着第二本把第一本还原，每次可做一个操作(添加，删除，变化),问他最少需要进行多少步才能将第一
本还原
输入格式：
		第一行输入字符串A
		第二行输入字符串B
输出格式:
		输出最少步骤*/
//方法：最少编辑距离 
#include<iostream>
using namespace std;
string s1,s2;
int dp[105][105]; 
int main()
{
	cin>>s1>>s2;
	int len1=s1.size();
	int len2=s2.size();
	//边界情况(s1为0时)
	for(int i=0;i<len2;i++)
	{
		dp[0][i]=i;
	}
	for(int j=0;j<len1;j++)
	{
		dp[j][0]=j;
	}
	for(int i=1;i<=len1;i++)
	{
		for(int j=1;j<=len2;j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
			}
		}
	} 
	cout<<dp[len1][len2]<<endl;
	return 0;
} 
