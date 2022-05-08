/*从键盘输入一个数，最多可达10000的整数(long long)放不了，若它是偶数输出YES；
否则输出NO*/
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