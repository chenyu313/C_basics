/*����һ�����10���ַ�����ʹ��ĸ���ַ���ָ����һ��������z��ָ��a�������'Z'
�������ַ�����*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[105];
	int len;
	scanf("%s",s);
	len=strlen(s);
	for(int i=0;i<len;i++)
	{
		if(s[i]=='z')
			s[i]='a';
		else if(s[i]=='Z')
			s[i]='A';
		else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
			s[i]++;
	}
	printf("%s\n",s);
	return 0;
}