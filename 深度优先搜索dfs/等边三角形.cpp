//�ȱ�������
/*����������һЩľ�������ǳ��̲�һ��ĳͬѧ�뽫���ľ��ƴ��һ���ȱ������Σ�����ÿ��ľ����Ҫ�õ�
�����ʽ��
		����n(3<=n<=10)����ʾľ������pi��ʾľ���ĳ���
�����ʽ��
		����ƴ���ȱ������������'Yes',�������'No'	*/
#include<iostream>
using namespace std;
int p[15],n,sum=0;
bool f=false;
bool vis[15];
void dfs(int cnt,int len,int s)		//cnt��ʾ����������ľ������len��ʾľ���ĳ��ȣ�s��ʾ�ӵ��Ǹ�ľ�� 
{
	if(f)				//����ҵ��˷��� 
	{
		return;
	}
	if(cnt==3)			//�������ľ�����ҵ��ˣ����� 
	{
		f=true;
		return;
	}
	if(len==sum/3)		
	{
		dfs(cnt+1,0,0);
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(!vis[i])
		{
			vis[i]=true;
			dfs(cnt,len+p[i],i+1);			//˳���ң���ֹ�ҵ������ 
			vis[i]=false;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<n;i++)
	{
		sum+=p[i];
	}
	if(sum%3!=0)
		cout<<"no"<<endl;
	else
	{
		dfs(0,0,0);
		if(f)
		{
			cout<<"yes"<<endl;
		}
		else
			cout<<"no"<<endl;
	} 
	return 0;
 } 
