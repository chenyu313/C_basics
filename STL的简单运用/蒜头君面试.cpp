//蒜头君的面试
/*
蒜头君来蒜厂面试的时候，曾经遇到这样一个面试题：
给定 n个整数，求里面出现次数最多的数，如果有多个重复出现的数，求出值最大的一个。
当时可算是给蒜头君难住了。现在蒜头君来考考你。

输入格式
第一行输入一个整数 n ( 1 ≤ n ≤ 100000 ) ，接下来一行输入 n 个 int 范围内的整数。

输出格式
输出出现次数最多的数和出现的次数，中间用一个空格隔开，如果有多个重复出现的数，输出值最大的那个。

样例输入
5
1 1 2 3 4

样例输出
1 2

样例输入
10
9 10 27 4 9 10 3 1 2 6

样例输出
10 2
*/ 
//方法1：用数组存储 
/*#include<iostream>
#include<algorithm>
using namespace std;
int A[100005];
int cnt[100005];
int main()
{
	int n;
	int Max,Maxcnt;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		cnt[A[i]]++;
	}
	sort(A,A+n);
	Max=A[0];
	Maxcnt=cnt[A[0]];
	for(int i=0;i<n;i++)
	{
		if(Max<A[i]&&Maxcnt<=cnt[A[i]])
		{
			Max=A[i];
			Maxcnt=cnt[A[i]];
		}
	}
	cout<<Max<<" "<<Maxcnt<<endl;
	return 0;
}*/

//方法2：用map存储
#include<iostream>
#include<map>
using namespace std;
map<int ,int> m;
int main()
{
	int n,ans1,ans2;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		m[x]++;
	}
	map<int,int>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		if((it->second)>=ans2)
		{
			ans2=(it->second);
			ans1=(it->first);
		}
	}
	cout<<ans1<<" "<<ans2<<endl;
	return 0;
} 
