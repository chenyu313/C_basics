//��ˮ��
/*ĳͬѧ����һ����Ϸ����Ҫ��ɽ��ˮ������������ɽ����ÿ��һ���߶Ⱦ��ܻ��һ��ˮ��
���һ��ˮ����������ɽ����״��һ���������Σ�������ѡ�������»������£������������
�������ܻ���������*/
#include<iostream>
using namespace std;
int f[1005][1005];
int inf=-10000;
int ma=inf;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			cin>>f[i][j];
	}
	for(int x=1;x<=n;x++)
		for(int y=1;y<=x;y++)
		{
			f[x][y]+=f[x-1][y]>f[x-1][y-1]?f[x-1][y]:f[x-1][y-1];
			if(x==n)
			{
				ma=f[x][y]>ma?f[x][y]:ma;
			}
		}
	if(ma==inf)
		cout<<0<<endl;
	else
		cout<<ma<<endl;
	return 0;
}
/*����
4
3
1 2
6 2 3
3 5 4 1
*/