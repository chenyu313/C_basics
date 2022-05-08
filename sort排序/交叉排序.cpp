/*
交叉排序
蒜头君很无聊，现在有 N 个数，其中第 i(1≤i≤N) 个数是 Ai?。
现在他先将 Al1,Al1+1...Ar1从小到大排序。
再将 Al2,Al2+1...Ar2 从大到小排序。
请输出 A 排序后的最终结果。
输入格式
第一行五个整数 N,l1,r1,l2,r2(l1<r1,l2<r2)，均不超过 100000。
第二行 N 个不超过 int 范围的整数，表示 A 数组。
输出格式
一行 N 个用空格分隔的整数，表示 A 排序以后的结果。
样例输入
6 1 3 2 4
8 3 1 6 9 2
样例输出
1 8 6 3 9 2
*/
#include<iostream>
#include<algorithm>
using namespace std;
int N,l1,r1,l2,r2;
int num[105];
bool cmp(int l,int r)
{
	return l>r;
}
int main()
{
	cin>>N>>l1>>r1>>l2>>r2;
	for(int i=0;i<N;i++)
	{
		cin>>num[i];
	}
	sort(num+l1-1,num+r1);
	sort(num+l2-1,num+r2,cmp);
	for(int j=0;j<N;j++)
	{
		if(j!=N-1)
		{
			cout<<num[j]<<" ";	
		}
		else
		{
			cout<<num[j]<<endl;
		}
	}
	return 0;
}
/*
6 1 3 2 4
8 3 1 6 9 2
*/
