/*
������ 
��ͷ����һ�����ӣ�����װ�ź�ġ��̵ġ����Ĳ�
�������ɣ��ֱ���R��G��B��ʾ����ͷ��ϣ��
�������ų�һ�У����Ұ����ֵ�������(��B ->
G-> R��˳��)��Ȼ����һ���������Ϊһ-�鴮
��һ�������飬����ķŻع������ô���ܴ���
���ٴ���������?
���룺 
RGGBBB
�����
BBBGGR
1 
*/
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char s[10005];
int ans;
int main()
{
	int R,G,B; 
	scanf("%s",&s);
	int len=strlen(s);
	sort(s,s+len);
	printf("%s\n",s);
	R=0;
	G=0;
	B=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='R')
		{
			R++;
		}
		else if(s[i]=='G')
		{
			G++;
		}
		else
		{
			B++;
		}
	}
	B=B/3;
	G=G/2;
	ans=min(B,min(G,R));
	printf("%d\n",ans);
	return 0;
}

