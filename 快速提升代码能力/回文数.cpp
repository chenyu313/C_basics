/*������
һ������������������ߵ�λ���ԭ����ȣ���ô�������Ϊ������������121��2332���ǻ�����
��1234567�Ͳ��ǻ�����
����һ��������������䲻�ǻ��������������ߵ�λ�����Ժ��ԭ����ӵõ�һ���µ���������µ������ǻ��������ظ�����任
ֱ���õ�һ��������Ϊֹ��
���룺
����һ������N
�����
�����һ�б�ʾ�任����
�ڶ�������任�����á�--->������ 
*/
#include<cstdio>
using namespace std;
int ans[105];
//�ж��Ƿ�Ϊ������ 
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
//�任
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
