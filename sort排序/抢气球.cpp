/*
������ 
ÿ��С�������������ĵ͵���ժ�����ĸߵĺ�ժ(ÿ�������ĸ߶Ȳ�һ��)���Ұ���ժ��ȫժ�ˣ�Ҫ��ͳ��ÿ��С����ժ�˼�������
���룺
��һ�����������ո�ָ�������n,m(1<=n,m<=1000),n��ʾС���ѵ�������m��ʾǽ�����������
�ڶ�������n��������
����������m��������
�����
һ�����n�У�ÿ�б�ʾһ������ 
*/
#include<cstdio>
#include<algorithm>
using namespace std;
int ball[1005];
bool vis[1005];
int ans[1005];
struct S{
	int id;
	int high;
}s[105];
bool cmp(S a,S b)
{
	return a.high<b.high;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		s[i].id=i;
		scanf("%d",&s[i].high);
	}
	for(int j=0;j<m;j++)
	{
		scanf("%d",&ball[j]);
	}
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(!vis[j]&&ball[j]<=s[i].high)	//����δ�����ʹ����Ҹ߶�С��С�� 
			{
				vis[j]=true;
				ans[s[i].id]++; 
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}

 //����1 
 /*
 5 6
 3 7 9 6 4
 1 2 3 4 5 6
 */
 //����2 
 /*
 10 10
 1 2 3 4 5 6 7 8 9 10
 3 1 4 6 7 8 9 9 4 12
 */
