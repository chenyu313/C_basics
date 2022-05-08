//�༭����
/*�������ַ���S��T����ӣ�ɾ���ͱ仯�����ٵĴ�����T���S*/
#include<iostream>
#include<string>
using namespace std;
int dp[105][105];	//dp[i][j]��ʾ��S��ǰiλ��T��ǰjΪ��������ٿ۵ķ��� 
int main()
{
	string a,b;
	cin>>a>>b;
	int lena=a.size();
	int lenb=b.size();
	//��ʼ���߽�(dp[i][0]=i  dp[0][j]=j)
	for(int i=1;i<=lena;i++)
	{
		dp[i][0]=i;	
	} 
	for(int j=0;j<=lenb;j++)
	{
		dp[0][j]=j;
	}
	//�����������(��ͬ����ͬ<��ӣ�ɾ�����仯>) 
	for(int i=1;i<=lena;i++)
	{
		for(int j=1;j<=lenb;j++)
		{
			if(a[i-1]==b[j-1])	//����ͬ�����۷� 
			{
				dp[i][j]=dp[i-1][j-1]; 
			}
			else
			{
				dp[i][j]=min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1])+1;	//�۷� 
			}
		}
	} 
	cout<<dp[lena][lenb]<<endl;
	return 0;
} 
