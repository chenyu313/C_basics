#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if('A'<=c && c<='Z')//��ĸ
	{
		for(int i=0;i<=c-'A';i++)//����
		{
			for(int j=0;j<c-'A'-i;j++)//����ո�
				printf(" ");
			for(int k=0;k<=i;k++)//�������
			{
			printf("%c",'A'+k);
			}
			for(int l=i-1;l>=0;l--)//����Ұ��
			{
			printf("%c",'A'+l);
			}
			printf("\n");
		}
	}
	else//����
	{
	
		for(int i=0;i<=c-'1';i++)//����
		{
			for(int j=0;j<c-'1'-i;j++)//����ո�
				printf(" ");
			for(int k=0;k<=i;k++)//�������
			{
			printf("%c",'1'+k);
			}
			for(int l=i-1;l>=0;l--)//����Ұ��
			{
			printf("%c",'1'+l);
			}
			printf("\n");
		}
	}
	return 0;
}