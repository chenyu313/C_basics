/*������һ�����ʵĳ��ȣ�������ָ�������ո���ŵ��ַ�������������ڵ��ʣ��򷵻�0
*/
#include<stdio.h>
#include<string.h>
char s[10005];
int main()
{
	while(scanf("%s",s)!=EOF);//�����������(�س�+^Z+�س�+^Z+�س�)
	printf("%d\n",strlen(s));
	return 0;
}