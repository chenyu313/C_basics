/*һ��3x3��ƽ��ħ���У���ƽ��ħ���У�ÿ��������ֱ����ظ���д��1-9��һ����4��ƽ��ħ���Ĳ���
(1)ѡ��ĳһ������
(2)ѡ��ĳһ������ 
(3)ѡ��ĳһ������ 
(4) ѡ��ĳһ������
���ڸ���ħ��һ��״̬�������Ƿ��ܽ�ħ����ԭ�ɳ�ʼ״̬��������Ҫ��������
�����ʽ��
		�������У�ÿ����1��9֮�������
�����ʽ��
		����ܻ�ԭ�ɳ�ʼ״̬��������ٲ����������������-1*/
#include<iostream>
using namespace std;
struct node
{
	int a[3][3];
	bool operator < (const node &x) const
	{
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
			{
				if(a[i][j]<x.a[i][j])
					return true;
			}
		return false;
	}
	bool operator ==(const node &x) const
	{
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
			{
				if(a[i][j]!=x.a[i][j])
					return true;
			}
		return false;
	}
	void print()
	{
		for(int i=0;i<3;i++)
		{
			for(int i=0;i<3;i++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}	
	}
	int tonum()
	{
		int res=0;
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
			{
				res=res*10+a[i][j];
			}
		return res;
	}
}init;
int bfs(node t)
{
	
}
int main()
{
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			init.a[i][j]=i*3+j+1;
		}
	node t;
	for (int i=0;i<3;i++)
	{
		int n;
		cin>>n;
		t.a[i][2]=n%10;
		n/=10;
		t.a[i][1]=n%10;
		n/=10;
		t.a[i][0]=n;
	}
	int ans=bfs(t);
	cout<<ans<<endl;
	return 0;
}
