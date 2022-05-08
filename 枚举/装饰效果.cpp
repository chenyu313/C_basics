/*最大子区间
输入：
第一行输入一个整数N表示个数
第二行输入N个整数
输出：
输出最大子区间 
*/
//方法1：枚举法，一段一段地试，求出最大子区间 
/*#include<iostream>
using namespace std;
int N;
int num[1005];
int Max=-1e-6;
int main()
{
	int temp;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<N;i++)
	{
		temp=0;
		for(int j=i;j<N;j++)
		{
			temp+=num[j];
			if(temp>Max)
			{
				Max=temp;
			}
		}
	}
	cout<<Max<<endl;
	return 0;
}
*/

//方法2：动态规划-最大子区间
//思路：定义数组dp[i]表示前i个数组最大和 
#include<iostream>
using namespace std;
int N;
int num[1005];
int dp[1005]; 
int Max=1e-9;
int main()
{
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>num[i];
		dp[i]=num[i];
	}
	//开始边算边求各个子段
	for(int i=1;i<N;i++)
	{
		dp[i]=max(dp[i],dp[i-1]+num[i]);	
	} 
	//根据各个子段求最大子段
	for(int j=0;j<N;j++)
	{
		Max=max(Max,dp[j]);	
	} 
	cout<<Max<<endl;
	return 0;
 } 
//总结：时间复杂度从o(n^2)变到了o(n) 
/*样例1
5
-1 2 -1 2 -1
*/ 
