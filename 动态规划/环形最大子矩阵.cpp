//��������Ӿ���
//(���뷨)
#include<iostream>
using namespace std;
long long num[105][105];
long long presum[105][105],presum2[105][105];
int main()
{
	int N,M;
	long long ans,sum1,sum2;
	ans=-100001;
	cin>>N>>M;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			cin>>num[i][j];
			ans=max(ans,num[i][j]);
		}
	}
	//����
	for(int i=1;i<=N;i++)
	{
		num[i][M+1]=num[i][1];		//�ѵ�һ�в��뵽���һ��	
	} 
	for(int j=1;j<=M;j++)
	{
		num[N+1][j]=num[1][j];		//��һ�в��뵽���һ��	
	} 
	num[N+1][M+1]=num[1][1];		//���һ�����뵽��һ��
	//������Ӿ���
	if(ans<=0)
	{
		cout<<ans<<endl;
	}
	else
	{
		//1~N,1~M
		for(int i=1;i<=N;i++)
			for(int j=1;j<=M;j++)
				presum[i][j]=presum[i-1][j]+num[i][j];
		for(int i=0;i<N;i++)	//��ʾ�Ӿ����ж�����(i=0��ʾ�Ӿ�����N��)
		{
			
			for(int j=i+1;j<=N;j++)
			{
				sum1=0;
				for(int k=1;k<=M;k++)
				{
					if(sum1+presum[j][k]-presum[i][k]<0)
					{
						sum1=0;
					}
					else
					{
						sum1+=presum[j][k]-presum[i][k];
					}
				}
			}
			ans=max(ans,sum1); 
		}
		
		for(int a=1;a<=N;a++)
			num[a][1]=0;
		for(int b=1;b<=M;b++)
			num[1][b]=0;
		num[N+1][1]=0;
		num[1][M+1]=0;
		//2~N+1,2~M+1
		for(int i=1;i<=N;i++)
		{
			for(int j=1;j<=M;j++)
			{
				presum2[i][j]=presum2[i-1][j]+num[i+1][j+1];
			}
		}	
		for(int i=1;i<=N;i++)
		{
			
			for(int j=i+1;j<=N;j++)
			{
				sum2=0;
				for(int k=1;k<=M;k++)
				{
				
					if(sum2+presum2[j][k]-presum2[i][k]<=0)
					{
						sum2=0;
					}
					else
					{
						sum2+=presum2[j][k]-presum2[i][k];
						
					}
				}
			}
			ans=max(ans,sum2); 
		}	
	} 
	cout<<ans<<endl;
	return 0;
} 
