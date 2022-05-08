#include<stdio.h>
#include<string.h>
char s[100005];
int main()
{
	int len;
	scanf("%s",s);
	len=strlen(s);
	for(int i=len-1;i>=0;i--)
		printf("%c",s[i]);
	printf("\n");
	return 0;
}