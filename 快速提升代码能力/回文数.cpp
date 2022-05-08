/*回文数
一个正整数，如果交换高低位后和原数相等，那么称这个数为回文数。比如121，2332都是回文数
像1234567就不是回文数
任意一个回文数，如果其不是回文数，将该数高低位交换以后和原数相加得到一个新的数，如果新的数不是回文数，重复这个变换
直到得到一个回文数为止。
输入：
输入一个整数N
输出：
输出第一行表示变换次数
第二行输出变换过程用“--->”连接 
*/
#include<cstdio>
using namespace std;
int ans[105];
//判断是否为回文数 
bool Judge(int x)
{
	int a=x;
	int t=0;
	while(a)
	{
		t=t*10+a%10;
		a/=10;	
	}
	if(t==x)
	{
		return true;	
	}	
	else
	{
		return false;
	}
}
//变换
int transfer(int x)
{
	int a=x;
	int t=0;
	while(a)
	{
		t=t*10+a%10;
		a/=10;	
	}
	return t;	
} 
int main()
{
	int n;
	scanf("%d",&n);
	int m=0;
	ans[m++]=n;
	while(!Judge(n))
	{
		n+=transfer(n);
		ans[m++]=n;
	}
	printf("%d\n",m-1);
	for(int i=0;i<m;i++)
	{
		if(i!=m-1)
		{
			printf("%d--->",ans[i]);
		}
		else
		{
			printf("%d\n",ans[i]);
		}
	}
	return 0;
}
/*#include<stdio.h>
int ans[105]; 
int A[105];
bool Judge(int n)
{
	int m=0;
	while(n>0)
	{
		A[m++]=n%10;
		n/=10;
	}
	for(int i=0;i<m/2;i++)
	{
		if(A[i]!=A[m-i-1])
			return false; 
	}
	return true;
}
int nev(int n)
{
	int a=0;
	while(n>0)
	{
		a=a*10+n%10;
		n/=10;
	}
	return a;
}
int main()
{
	int n,m=0;
	scanf("%d",&n);
	ans[m]=n;
	m++;
	while(!Judge(n))
	{
		n+=nev(n);
		ans[m++]=n;
	}
	for(int i=0;i<m;i++)
		if(i<m-1)
		{
			printf("%d--->",ans[i]);
		}
		else
		{
			printf("%d\n",ans[i]);
		}
		return 0;
}
*/ 
