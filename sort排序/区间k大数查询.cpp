/*
问题描述
给定一个序列，每次询问序列中第l个数到第r个数中第K大的数是哪个。

输入格式
第一行包含一个数n，表示序列长度。
第二行包含n个正整数，表示给定的序列。
第三个包含一个正整数m，表示询问个数。
接下来m行，每行三个数l,r,K，表示询问序列从左往右第l个数到第r个数中，从大往小第K大的数是哪个。序列元素从1开始标号。
输出格式

总共输出m行，每行一个数，表示询问的答案。 
*/
#include<iostream>
#include<algorithm>
using namespace std;
int A[1005],B[1005],ans[1005];
int main()
{
	int n,m,l,r,K;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cin>>m;
	for(int j=0;j<m;j++)
	{
		for(int k=0;k<n;k++)
			B[k]=A[k];
		cin>>l>>r>>K;
		sort(B+l-1,B+r);
		ans[j]=B[r-K];
	}
	for(int x=0;x<m;x++)
		cout<<ans[x]<<endl;
	return 0;
} 
