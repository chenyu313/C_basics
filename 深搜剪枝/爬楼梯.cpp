//��¥��
/*
��һ��С��������¥�ݣ�¥����n��̨�ף�С�� ������1��2��3��̨�� 
��ʵ��һ����������С���ж�������¥��ʽ 
*/ 
//����1��dfs
#include<iostream>
using namespace std;
int ans;
int dfs(int n)
{
	if(n<0)
		return 0;
	if(n==1|| n==0)
		return 1;
	if(n==2)
		return 2;
	return dfs(n-1)+dfs(n-2)+dfs(n-3);
}
int main()
{
	int n;
	cin>>n;
	ans=dfs(n);
	cout<<ans<<endl;
	return 0;	
} 


/*#include<iostream>
using namespace std;
int dp[1005];
int main()
{
	int n;
	cin>>n;
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	for(int i=4;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	}
	cout<<dp[n]<<endl;
	return 0;
}*/
