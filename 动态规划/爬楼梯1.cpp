//��¥��
/*ĳͬѧÿ��ֻ��һ����һ��¥�ݻ�����¥�ݣ�����һ����n��¥�ݣ�һ���ж����ַ���(������ܴܺ󣬶�100007ȡģ)*/
#include<iostream>
using namespace std;
int dp[10005];
int mod=100007;
int main()
{
	dp[0]=dp[1]=1;
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		dp[i]=(dp[i-1]+dp[i-2])%mod;
	}
	cout<<dp[n]<<endl;
	return 0;
} 
