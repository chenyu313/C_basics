/*
��������
����һ�����У�ÿ��ѯ�������е�l��������r�����е�K��������ĸ���

�����ʽ
��һ�а���һ����n����ʾ���г��ȡ�
�ڶ��а���n������������ʾ���������С�
����������һ��������m����ʾѯ�ʸ�����
������m�У�ÿ��������l,r,K����ʾѯ�����д������ҵ�l��������r�����У��Ӵ���С��K��������ĸ�������Ԫ�ش�1��ʼ��š�
�����ʽ

�ܹ����m�У�ÿ��һ��������ʾѯ�ʵĴ𰸡� 
*/
#include<iostream>
#include<algorithm>
using namespace std;
int A[1005],B[1005],ans[1005];
int main()
{
	int n,m,l,r,K;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cin>>m;
	for(int j=0;j<m;j++)
	{
		for(int k=0;k<n;k++)
			B[k]=A[k];
		cin>>l>>r>>K;
		sort(B+l-1,B+r);
		ans[j]=B[r-K];
	}
	for(int x=0;x<m;x++)
		cout<<ans[x]<<endl;
	return 0;
} 
