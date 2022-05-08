//快速幂算法
/*
求A^B的最后三位数表示的整数。
说明：A^B的含义是“A的B次方”

Input
输入数据包含多个测试实例，每个实例占一行，由两个正整数A和B组成（1<=A,B<=10000），
如果A=0, B=0，则表示输入数据的结束，不做处理。
 
Output
对于每个测试实例，请输出A^B的最后三位表示的整数，每个输出占一行。

Sample Input
2 3
12 6
6789 10000
0 0

Sample Output
8
984
1
*/ 
/*
方法1：循环解法-->指数爆炸-->2^100测试 
*/
/*#include<iostream>
using namespace std;
int main()
{
	long long ans=1;
	int A,B;
	cin>>A>>B;
	while(A!=0&&B!=0)
	{
		
		for(int i=0;i<B;i++)
		{
			ans=ans*A%1000;
		}
		cout<<ans%1000<<endl;
		ans=1;
		cin>>A>>B;
	}
	return 0;
}*/

//方法2：快速幂算法
/*
a<<1相当于乘2 
*/ 
#include<stdio.h>
using namespace std;
int ex(int a,int n)
{
	if(n==1)
		return a;
	int res=1;
	int m=1;
	int temp=a;
	while((m<<1)<n)
	{
		temp=(temp*temp)%1000;
		m=m<<1;
	}
	res*=ex(a,n-m);
	return res*temp;
}
int main()
{
	int A,B;
	scanf("%d%d",&A,&B);
	int ans=ex(A,B);
	printf("%d\n",ans%1000);
	return 0;
}
//说实话，我觉得循环的算法更好(优化之后) 
