//С���������ļ�
/*ÿ���˶��е����ܣ�С��Ҳ�����⣬�������ܼ�����һ��С���ϣ������б��ݣ�������һ�������ݱ����ƻ���
�����������ŵڶ����ѵ�һ����ԭ��ÿ�ο���һ������(��ӣ�ɾ�����仯),����������Ҫ���ж��ٲ����ܽ���һ
����ԭ
�����ʽ��
		��һ�������ַ���A
		�ڶ��������ַ���B
�����ʽ:
		������ٲ���*/
//���������ٱ༭���� 
#include<iostream>
using namespace std;
string s1,s2;
int dp[105][105]; 
int main()
{
	cin>>s1>>s2;
	int len1=s1.size();
	int len2=s2.size();
	//�߽����(s1Ϊ0ʱ)
	for(int i=0;i<len2;i++)
	{
		dp[0][i]=i;
	}
	for(int j=0;j<len1;j++)
	{
		dp[j][0]=j;
	}
	for(int i=1;i<=len1;i++)
	{
		for(int j=1;j<=len2;j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
			}
		}
	} 
	cout<<dp[len1][len2]<<endl;
	return 0;
} 
