//最大子矩阵和
/*
问题描述
　　给定一个n*m的矩阵A，求A中的一个非空子矩阵，使这个子矩阵中的元素和最大。

　　其中，A的子矩阵指在A中行和列均连续的一块。
输入格式
　　输入的第一行包含两个整数n, m，分别表示矩阵A的行数和列数。
　　接下来n行，每行m个整数，表示矩阵A。
输出格式
　　输出一行，包含一个整数，表示A中最大的子矩阵中的元素和。
样例输入
3 3
-1 -4 3
3 4 -1
-5 -2 8
样例输出
10
*/
#include<iostream>
using namespace std;
long long num[105][105];
long long presum[105][105];
int main()
{
	int N,M;
	long long ans,sum;
	ans=-1000001;
	cin>>N>>M;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			cin>>num[i][j];
			ans=max(ans,num[i][j]);
		}	
	}
	if(ans<=0)
	{
		cout<<ans<<endl;
	}
	else
	{
		for(int i=1;i<=N;i++)
			for(int j=1;j<=M;j++)
				presum[i][j]=presum[i-1][j]+num[i][j];
		for(int i=1;i<=N;i++)		//代表行数的可行数(i=0时，行数为n行) 
		{
			for(int j=i;j<=N;j++)		//每次增加一行 
			{
				sum=0;		//每次循环到底sum清零 
				for(int k=1;k<=M;k++)
				{
					if(sum+presum[j][k]-presum[i-1][k]<0)
					{
						sum=0;
					}
					else
					{
						sum+=presum[j][k]-presum[i-1][k];	
					}	
				} 
			}
			ans=max(sum,ans); 
		} 
	}
	cout<<ans<<endl;
	return 0;
} 
/*样例
3 3
1 -2 3
-4 5 -6
7 -8 9
*/ 
