//����������
/*ĳͬѧ��һ����������������Ȥ������֪����1��n�ķ�Χ�ڣ����������������Ƕ��٣�����ж��������֪��
��С����һ��
�����ʽ��
		��һ������һ��T����ʾ���ݵ�����
		������T��ÿ������һ��������n(1<=T<=100;1<=n<=10^16)
�����ʽ��
		һ�����T�У�ÿһ��һ����������ʾ��������������Ǹ���*/
#include<iostream>
using namespace std;
int T;
long long n,ans,mc;
const int prime[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
//u��ʾ��ǰѡ���˶��ٸ������ӣ�m��ʾ��ѡ����ߴ����Ƕ��٣�x��ʾ��ǰ�����Ƕ��٣�cnt��ʾ���ӵĸ��� 
void dfs(int u,int m,long long x,long long cnt)
{
	if(cnt>mc) 
	{
		mc=cnt;
		ans=x;
	}
	else if(cnt==mc&&x<ans)
	{
		ans=x;
	}
	if(u==15)
		return;
	for(int i=1;i<=m;i++)
	{
		x=x*prime[u];
		if(x>n)
		break;
		dfs(u+1,i,x,cnt*(i+1));
	}
}		
int main()
{
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>n;
		mc=0;
		dfs(0,60,1,1);
		cout<<ans<<endl;
	}
	return 0;
 } 
 /*����
3
10
100
1000
*/ 
