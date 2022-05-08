//����������
/*
������ N ��������������С�� 10000.0��������Ҫ����Щ������������������������Ĳ��С�������򣬸��������������������Ĳ�ԽС��
�������������λԽ��ǰ���������ȣ����ո�������ֵ��С��������

�����ʽ
������ 2 ��

��һ��Ϊһ������ N��0 < N < 101��
�ڶ���Ϊ�ÿո������ N ��������������С�� 10000.0��
�����ʽ
����� 1 �У�Ϊ������ĿҪ�������� N �������������������뱣�� 6 λС�����ÿո������
*/
#include<cstdio>
#include<algorithm>
#include<cmath>
#define EP 1e-6			//���������Ĳ�С��10e-6ʱ�����Ե������������
using namespace std;
double num[105]; 
bool cmp(double a,double b)
{
	double da=fabs(a-round(a));		//round()Ϊ�������뺯������������a��������� 
	double db=fabs(b-round(b));
	if(fabs(da-db)<EP)			//���������Ĳ�С��10e-6ʱ�����Ե������ 
	{
		return a<b;		
	} 
	return da<db;			//���رȽϽ�� 
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%lf",&num[i]); 
	}
	sort(num,num+N,cmp);
	for(int j=0;j<N;j++)
	{
		if(j!=N-1)			//��ֹ��ĩ�ո� 
		{
			printf("%.6lf ",num[j]);
		}
		else
		{
			printf("%.6lf\n",num[j]);
		}
		
	}
	return 0;
} 

/*
9
1.001 2.1 3.2 4.0001 5.000001 6.9 7.2 8.001 9.0
*/
