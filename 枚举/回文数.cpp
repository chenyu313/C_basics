/*����һ��n������λ������λ���еĻ��������ң�������λ��ӵ���n�Ļ����������*/
#include<stdio.h>
int n;
bool Judge(int x)
{
	int A[10],m=0,sum=0;
	while(x)
	{
		A[m++]=x%10;
		sum+=x%10;
		x/=10;
	}
	if(sum!=n)
		return false;
	for(int i=0;i<m/2;i++)
	{
		if(A[i]!=A[m-i-1])
			return false;
	}	
	return true;
}
int main()
{
	scanf("%d",&n);
	for(int i=10000;i<1e6;i++)
	{
		if(Judge(i))
			printf("%d\n",i);
	}
	return 0;
} 
