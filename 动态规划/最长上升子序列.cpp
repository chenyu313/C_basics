//最长上升子序列
/*
在原序列中取任意多项，不改变他们在原来序列的先后次序，取到的序列称为原序列的子序列
例：2,1,5,3,4,6,3的最长上升子序列为 1,3,4,6 
*/ 
#include<iostream>
using namespace std;
int main()
{
	int n,ans=0;
	int A[105],dp[105];		//dp[i]表示以i为结尾的最长子序列
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<n;i++)	//当j<i并且A[j]<A[i]时dp[i]=dp[j]+1; 
	{
		dp[i]=1;
		for(int j=0;j<i;j++)
		{
			if(A[j]<A[i])
			{
				dp[i]=dp[j]+1;	
			}	
		}
		ans=max(dp[i],ans);		//保证ans最大	
	} 
	cout<<ans<<endl; 
	return 0;
}
/*样例
8
5 2 7 9 4 5 7 10
*/
 
