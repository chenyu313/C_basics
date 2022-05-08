/*最大子矩阵*/
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

/*#include<iostream>
using namespace std;
int A[505][505];
int main()
{
	int n,m,maxs=-1000005;
	cin>>n>>m;
	//输入 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
			maxs=max(A[i][j],maxs);
		}
	}
	//查找
	for(int up=0;up<n;up++)	//上 
	{
		for(int down=up;down<n;down++)	//下 
		{
			for(int left=0;left<m;left++)	//左 
			{
				for(int right=left;right<m;right++)	//右
				{
					//找最大子矩阵 
					int sum=0;
					for(int i=up;i<=down;i++)
					{
						for(int j=left;j<=right;j++)
						{
							sum+=A[i][j];
						}
					}
					//比较 
					if(maxs<sum)
					{
						maxs=sum;
					}
				} 
			}
		} 
	} 
	cout<<maxs<<endl; 
	return 0;
} */
/*样例1
 3 3
 2 -4 1
 -1 2 1
 4 -2 2
*/
//暴力解法，明天给出动态规划解法 

/*#include <iostream>
#include <cstring>
using namespace std;
int maxsub(int a[],int n)
{
    int i,max=-5005,b=0;
    for(i=0;i<n;i++)
    {
        if(b > 0)
            b += a[i];
        else
            b = a[i];
        if(b > max)
            max = b;
    }
    return max;
}

int main()
{
    int n,m,i,j,k,ans,maxsubarr;
    int dp[505][505],arr[505];
  	cin>>n>>m;
    for(i=0;i<n;i++)
    	for(j=0;j<m;j++)
            cin>>dp[i][j];
     ans=-5005;
     for(i=0;i<n;i++)
     {
         memset(arr,0,sizeof(arr));
         for(j=i;j<n;j++)
         {
             for(k=0;k<m;k++)
                 arr[k] += dp[j][k];
             maxsubarr = maxsub(arr,m);
             if(maxsubarr > ans) ans = maxsubarr;
         }
     }
     cout<<ans<<endl;
}*/

//动态规划：将二维数组看做一维数组，求最大字段
/*
思路：先找出行中最大子行，然后转为一维数组传入求最大列中的子列 
*/ 
#include<iostream>
#include<cstring>
using namespace std;
int arr[505][505],dp[505];
//找最大子串(列) 
int maxsub(int a[],int m)
{
	int maxs=-5005;
	int sum=0;
	for(int i=0;i<m;i++)
	{
		if(sum>0)
		{
			sum+=a[i];
		}
		else
		{
			sum=a[i];
		}
		if(maxs<sum)
		{
			maxs=sum;
		}
	}
	return maxs;	
} 
int main()
{
	int n,m;
	//输入 
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int ans=-5005;
	int maxsubarr=0;
	//求最大子行
	for(int i=0;i<n;i++)	//作为行起点 
	{
		memset(dp,0,sizeof(dp)); 
		for(int j=i;j<n;j++)	//行 
		{
			for(int k=0;k<m;k++)	//列 
			{
				dp[k]+=arr[j][k];	//将每列压缩	
			} 
			maxsubarr=maxsub(dp,m);	//将压缩后的列作为一维数组传入 
			if(maxsubarr>ans)
			{
				ans=maxsubarr;
			}
		}	
	} 
	cout<<ans<<endl;
	return 0;
}
