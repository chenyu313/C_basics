/*
��������
��ͷ�������ģ������� N ���������е� i(1��i��N) ������ Ai?��
�������Ƚ� Al1,Al1+1...Ar1��С��������
�ٽ� Al2,Al2+1...Ar2 �Ӵ�С����
����� A ���������ս����
�����ʽ
��һ��������� N,l1,r1,l2,r2(l1<r1,l2<r2)���������� 100000��
�ڶ��� N �������� int ��Χ����������ʾ A ���顣
�����ʽ
һ�� N ���ÿո�ָ�����������ʾ A �����Ժ�Ľ����
��������
6 1 3 2 4
8 3 1 6 9 2
�������
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
