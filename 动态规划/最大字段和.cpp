//最大子段和(dp)
#include<iostream>
using namespace std;
const int f=-100000;
int main()
{
	int n,sum=0,ans=f;
	int A[105];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		ans=max(ans,A[i]);		//保证ans是A[i]中的最大值 
	}	
	if(ans<=0)
	{
		cout<<ans<<endl;	//考虑全为负数情况 
	}
	else	//全为正数情况 
	{
		for(int j=0;j<n;j++)
		{
			sum+=A[j];
			if(sum<0)		//保证sum不为负数 
				sum=0;
			if(sum>ans)		//持续更新ans，保证最大 
				ans=sum; 
		}
	cout<<ans<<endl; 
	} 
	return 0;
} 
/*样例
6
-2 11 -4 13 -5 -2
*/ 
