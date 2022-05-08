/*
整数排序进阶
N个整数，将这些正整数每一位数字相加，从小到大排序，即该正整数的每一位数字相加的和越小排位越靠前。
如果各位相加和相等，则按正整数的值从小到大排 
输入：
4
20 12 1 11
输出：
1 11 20 12 
*/
#include<iostream>
#include<algorithm>
using namespace std;
int num[10005];
bool cmp(int a,int b)
{
	int sum1=0,sum2=0;
	int a1=a;
	int b1=b;
	while(a1)
	{
		sum1+=a1%10;
		a1/=10;
	}
	while(b1)
	{
		sum2+=b1%10;
		b1/=10;
	}
	if(sum1!=sum2)
	{
		return sum1<sum2;
	}else
	{
		return a<b;
	}
}
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>num[i];
	}
	sort(num,num+N,cmp);
	for(int j=0;j<N;j++)
	{
		if(j!=N-1)
		{
			cout<<num[j]<<" ";
		}else
		{
			cout<<num[j]<<endl;
		}
	}
	return 0;
}

