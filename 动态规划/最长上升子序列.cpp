//�����������
/*
��ԭ������ȡ���������ı�������ԭ�����е��Ⱥ����ȡ�������г�Ϊԭ���е�������
����2,1,5,3,4,6,3�������������Ϊ 1,3,4,6 
*/ 
#include<iostream>
using namespace std;
int main()
{
	int n,ans=0;
	int A[105],dp[105];		//dp[i]��ʾ��iΪ��β���������
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<n;i++)	//��j<i����A[j]<A[i]ʱdp[i]=dp[j]+1; 
	{
		dp[i]=1;
		for(int j=0;j<i;j++)
		{
			if(A[j]<A[i])
			{
				dp[i]=dp[j]+1;	
			}	
		}
		ans=max(dp[i],ans);		//��֤ans���	
	} 
	cout<<ans<<endl; 
	return 0;
}
/*����
8
5 2 7 9 4 5 7 10
*/
 
