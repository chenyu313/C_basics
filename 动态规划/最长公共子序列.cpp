//�����������
/*
	������������S1��S2,����߹��������� 
*/ 
#include<iostream>
#include<string>
using namespace std;
int dp[105][105];
string a,b;
int main()
{
	cin>>a>>b;
	int lena=a.size();
	int lenb=b.size();
	for(int i=1;i<lena;i++)
	{
		for(int j=1;j<lenb;j++)
		{
			if(a[i-1]==b[j-1])		//��S1�ĵ�iλ����S2�ĵ�jλ
			{
				dp[i][j]=dp[i-1][j-1]+1; 
			} 
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);		//������ʱ��ȡ����һλ���ֵ(����ǰ����������) 
				/*cout<<i-1<<" "<<j<<"="<<dp[i-1][j]<<endl; 
				cout<<i<<" "<<j-1<<"="<<dp[i][j-1]<<endl; 
				cout<<i<<" "<<j<<"="<<dp[i][j]<<endl; 
				cout<<endl;*/
			}
			 
		}
	}
	cout<<dp[lena-1][lenb-1]<<endl;
	return 0;
}
/*����
abcdef
abefcd
*/ 
