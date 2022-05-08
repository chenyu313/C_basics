/*
抢气球 
每个小朋友抢气球，跳的低的先摘，跳的高的后摘(每个人跳的高度不一样)，且把能摘的全摘了，要求统计每个小朋友摘了几个气球
输入：
第一行输入两个空格分隔的整数n,m(1<=n,m<=1000),n表示小朋友的数量，m表示墙上气球的数量
第二行输入n个正整数
第三行输入m个正整数
输出：
一共输出n行，每行表示一个整数 
*/
#include<cstdio>
#include<algorithm>
using namespace std;
int ball[1005];
bool vis[1005];
int ans[1005];
struct S{
	int id;
	int high;
}s[105];
bool cmp(S a,S b)
{
	return a.high<b.high;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		s[i].id=i;
		scanf("%d",&s[i].high);
	}
	for(int j=0;j<m;j++)
	{
		scanf("%d",&ball[j]);
	}
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(!vis[j]&&ball[j]<=s[i].high)	//该球未被访问过并且高度小于小孩 
			{
				vis[j]=true;
				ans[s[i].id]++; 
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}

 //样例1 
 /*
 5 6
 3 7 9 6 4
 1 2 3 4 5 6
 */
 //样例2 
 /*
 10 10
 1 2 3 4 5 6 7 8 9 10
 3 1 4 6 7 8 9 9 4 12
 */
