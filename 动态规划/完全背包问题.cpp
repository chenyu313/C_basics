//��ȫ��������
/*��N����Ʒ���ݻ�ΪV�ı�������֪��i����Ʒ�����Ϊci����ֵΪwi��ÿ����Ʒ�������������޵ģ���������
��*/
#include<iostream>
using namespace std;
int dp[105][1005];
int w[105],c[105];
int main()
{
	int N,V;
	cin>>N>>V;
	for(int i=1;i<=N;i++)
	{
		cin>>w[i]>>c[i]; 
	}
	
	for(int i=1;i<=N;i++)
	{
		for(int j=0;j<=V;j++)
		{
			if(j>=c[i])
			{
				dp[i][j]=max(dp[i][j-c[i]]+w[i],dp[i-1][j]);	//���Դӵ�ǰ��Ʒ����ѡȡ 
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout<<dp[N][V]<<endl;
	return 0;
} 
/*����
5 10
2 1
3 5
2 5
3 4
4 3
*/ 
