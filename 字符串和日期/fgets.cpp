#include<stdio.h>
#include<string.h>
char s1[5],s2[50];
int main()
{
	fgets(s1,4,stdin);//这里只能输2个字符，因为回车算一个，'\0'也算一个
	fgets(s2,50,stdin);
	int len1=strlen(s1),len2=strlen(s2);//它的长度总是比写入的长度+1，因为回车也算进去了
	printf("%d\n",len1);
	printf("%d\n",len2);
	return 0;
}