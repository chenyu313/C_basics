/*输出最后一个单词的长度，单词是指不包括空格符号的字符串，如果不存在单词，则返回0
*/
#include<stdio.h>
#include<string.h>
char s[10005];
int main()
{
	while(scanf("%s",s)!=EOF);//这里输入完后(回车+^Z+回车+^Z+回车)
	printf("%d\n",strlen(s));
	return 0;
}