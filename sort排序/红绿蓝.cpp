/*
红绿蓝 
蒜头君有一个罐子，里面装着红的、绿的、蓝的玻
璃珠若干，分别用R、G、B表示。蒜头君希望
把它们排成一行，并且按照字典序排列(即B ->
G-> R的顺序)。然后以一红二绿三蓝为一-组串
成一串幸运珠，多余的放回罐子里，那么他能串成
多少串幸运珠呢?
输入： 
RGGBBB
输出：
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

