//����Ӿ����
/*
��������
��������һ��n*m�ľ���A����A�е�һ���ǿ��Ӿ���ʹ����Ӿ����е�Ԫ�غ����

�������У�A���Ӿ���ָ��A���к��о�������һ�顣
�����ʽ
��������ĵ�һ�а�����������n, m���ֱ��ʾ����A��������������
����������n�У�ÿ��m����������ʾ����A��
�����ʽ
�������һ�У�����һ����������ʾA�������Ӿ����е�Ԫ�غ͡�
��������
3 3
-1 -4 3
3 4 -1
-5 -2 8
�������
10
*/
#include<iostream>
using namespace std;
long long num[105][105];
long long presum[105][105];
int main()
{
	int N,M;
	long long ans,sum;
	ans=-1000001;
	cin>>N>>M;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			cin>>num[i][j];
			ans=max(ans,num[i][j]);
		}	
	}
	if(ans<=0)
	{
		cout<<ans<<endl;
	}
	else
	{
		for(int i=1;i<=N;i++)
			for(int j=1;j<=M;j++)
				presum[i][j]=presum[i-1][j]+num[i][j];
		for(int i=1;i<=N;i++)		//���������Ŀ�����(i=0ʱ������Ϊn��) 
		{
			for(int j=i;j<=N;j++)		//ÿ������һ�� 
			{
				sum=0;		//ÿ��ѭ������sum���� 
				for(int k=1;k<=M;k++)
				{
					if(sum+presum[j][k]-presum[i-1][k]<0)
					{
						sum=0;
					}
					else
					{
						sum+=presum[j][k]-presum[i-1][k];	
					}	
				} 
			}
			ans=max(sum,ans); 
		} 
	}
	cout<<ans<<endl;
	return 0;
} 
/*����
3 3
1 -2 3
-4 5 -6
7 -8 9
*/ 
