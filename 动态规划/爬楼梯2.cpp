//��¥��2
/*ÿ���ܿ�����¥�ݣ���n��¥�ݵ����߷�*/
#include<iostream>
using namespace std;
int mod=100007;
int dp[10005];
int main()
{
	int n;
	cin>>n;
	dp[0]=1;
	for(int i=1;i<=n;i++)
	{
		dp[i]=0; 
		for(int j=i-1;j>=0;j-=2)//��ʾ������������� 
		{
			dp[i]+=dp[j];
		}
	}
	cout<<dp[n]<<endl;
	return 0;
} 
