#include<stdio.h>
#include<string.h>
char s1[5],s2[50];
int main()
{
	fgets(s1,4,stdin);//����ֻ����2���ַ�����Ϊ�س���һ����'\0'Ҳ��һ��
	fgets(s2,50,stdin);
	int len1=strlen(s1),len2=strlen(s2);//���ĳ������Ǳ�д��ĳ���+1����Ϊ�س�Ҳ���ȥ��
	printf("%d\n",len1);
	printf("%d\n",len2);
	return 0;
}