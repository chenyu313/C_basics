//���μƻ�
/*ĳͬѧ����ͼ���һ���ȥ���Σ���ϣ����ʡ��֧���������������еĳ�������һ�黰����С(����ͬһ�����в���
��ȥ)
�����ʽ��
		��һ������һ��n(1<=n<=15)����ʾ��n������
		��������nxn�����󣬱�ʾ������֮��𳵵Ļ���
�����ʽ��
		���һ����������ʾ���ٻ���*/
#include<iostream>
using namespace std;
int n,ans=100000000;
int map[20][20];
bool vis[20];
void dfs(int now,int money,int city)
{
	if(city==n)
	{
		money+=map[now][1];		//�����Լ����е�Ǯ 
		if(ans>money)
		{
			ans=money; 
		} 
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i]=true;
			dfs(i,money+map[now][i],city+1);
			vis[i]=false;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>map[i][j];
	dfs(1,0,0);
	cout<<ans<<endl;
	return 0;
 } 
 /*����
4
0 1 1 1
1 0 2 1
5 5 0 6
1 1 3 0
*/ 
