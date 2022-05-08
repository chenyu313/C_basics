#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if('A'<=c && c<='Z')//字母
	{
		for(int i=0;i<=c-'A';i++)//行数
		{
			for(int j=0;j<c-'A'-i;j++)//输出空格
				printf(" ");
			for(int k=0;k<=i;k++)//输出左半边
			{
			printf("%c",'A'+k);
			}
			for(int l=i-1;l>=0;l--)//输出右半边
			{
			printf("%c",'A'+l);
			}
			printf("\n");
		}
	}
	else//数字
	{
	
		for(int i=0;i<=c-'1';i++)//行数
		{
			for(int j=0;j<c-'1'-i;j++)//输出空格
				printf(" ");
			for(int k=0;k<=i;k++)//输出左半边
			{
			printf("%c",'1'+k);
			}
			for(int l=i-1;l>=0;l--)//输出右半边
			{
			printf("%c",'1'+l);
			}
			printf("\n");
		}
	}
	return 0;
}