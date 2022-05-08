//Sticks
/*
问题描述
　　George took sticks of the same length and cut them randomly until all parts became at most 50 units
 long. Now he wants to return sticks to the original state, but he forgot how many sticks he had originally
  and how long they were originally. Please help him and design a program which computes the smallest possible
   original length of those sticks. All lengths expressed in units are integers greater than zero.
输入格式
　　The input contains blocks of 2 lines. The first line contains the number of sticks parts after
 cutting, there are at most 64 sticks. The second line contains the lengths of those parts separated
by the space. The last line of the file contains zero.
输出格式
　　The output should contains the smallest possible length of original sticks, one per line.
样例输入
9
5 2 1 5 2 1 5 2 1
4
1 2 3 4
0
样例输出
5
6
*/
//分析：给了一n个长度均为L的木条，分成m个长度不等的木条，求L最小为多少 
/*#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int m,sum,ans;
int a[1005]; 
int main()
{
	cin>>m;
	while(m!=0)
	{
		memset(a,0,sizeof(a));	//初始化 
		sum=0;
		ans=0;
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+m);
		for(int i=a[m-1];i<=sum;i++)
		{
			if(sum%i==0)
			{
				ans=i;
				break;
			}
		}
		cout<<ans<<endl;
		cin>>m;
	}
	return 0;
}*/
//这种方法容易忽略一个问题，小木棍是否可以再拼回大木棍？

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int n,m;	//n表示原来木条的数目，m表示切割后木条的数目
int sum;	//表示所有木条的总和 
int ans;
int a[1005];
bool vis[1005];
void dfs(int s,int l,int index)	//s表示完成木条的数目，l表示当前木条的长度，index表示木条的下标
{
	if(s==n)
	{
		ans=sum/n;
		return;
	}
	for(int i=index;i<m;i++)    
	{
                
		if(vis[i]||(i&&a[i]==a[i-1]&&!vis[i-1])) //剪枝  
		{
			continue; 
		}
		if(a[i]+l==sum/n)      //成功拼成一个假定长度的小木块 
		{
			vis[i]=true;
			dfs(s+1,0,0);  //s+1即成功拼凑数量加一，开始拼下一个，其他初始化为0
			vis[i]=false;            //回溯 
		} 
		if(a[i]+l<sum/n)        //没拼好 
		{
			vis[i]=true;
			dfs(s,a[i]+l,0);   //递归继续循环将之拼为假设长度 
			vis[i]=false;
		 
		}
		if(i>=m&&s<n)
		{
			return;
		}
	}
	return;	
} 
int main()
{
	cin>>m;
	while(m!=0)
	{
		sum=0;
		ans=0;
		memset(a,0,sizeof(a));
	
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
			sum+=a[i];	
		}
		sort(a,a+m);
		for(int i=a[m-1];i<=sum;i++)
		{
			memset(vis,false,sizeof(vis));
			if(ans!=0)
			{
				break;
			}
			if(sum%i==0)	//如果可求 
			{
				n=sum/i; 
				dfs(1,0,0);
			}
		}
		cout<<ans<<endl;
		cin>>m;	
	} 
	return 0;	
}
//需要考虑的东西比较多，细节要注意，这个需要剪枝，否则会超时 
 
