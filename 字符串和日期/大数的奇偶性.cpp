/*�Ӽ�������һ���������ɴ�10000������(long long)�Ų��ˣ�������ż�����YES��
�������NO*/
#include<stdio.h>
#include<string.h>
char s[10005];
int main()
{
	int len;
	scanf("%s",s);
	len=strlen(s);
	if(int(s[len-1])%2==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}