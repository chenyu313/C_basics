//�������㷨
/*
��A^B�������λ����ʾ��������
˵����A^B�ĺ����ǡ�A��B�η���

Input
�������ݰ����������ʵ����ÿ��ʵ��ռһ�У�������������A��B��ɣ�1<=A,B<=10000����
���A=0, B=0�����ʾ�������ݵĽ�������������
 
Output
����ÿ������ʵ���������A^B�������λ��ʾ��������ÿ�����ռһ�С�

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
����1��ѭ���ⷨ-->ָ����ը-->2^100���� 
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

//����2���������㷨
/*
a<<1�൱�ڳ�2 
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
//˵ʵ�����Ҿ���ѭ�����㷨����(�Ż�֮��) 
