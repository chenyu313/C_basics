//ȫ����
/*
�����ʽ:
		����һ������
�����ʽ��
		��һ�����ȫ���е��ܷ�����
		�������������*/
#include<iostream>
using namespace std;
int n,ans=1;
bool vis[15];
void dfs(int cnt,int num)	//nΪλ�� 
{
	if(cnt==n)		//���ﵽλ��ʱ 
	{
		cout<<num<<endl;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			vis[i]=true;
			dfs(cnt+1,num*10+i);
			vis[i]=false;
		}
		
	} 
	return;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		ans*=i;
	}
	cout<<ans<<endl;
	dfs(0,0);
	return 0;
}		 
