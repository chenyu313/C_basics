/*����ת��
����һ��ʮ������N������ת��ΪR�������������10<=N<=16������£���A��ʾ10��B��ʾ11��C��ʾ12��D��ʾ13
E��ʾ14��F��ʾ15��
�����ʽ��
������������N(N<10000)��R(2<=R<=16)
ע��N�����Ǹ���

�����ʽ��
���һ�б�ʾת�������

�������룺
23 12

���������
1B 
*/ 
#include<cstdio>
using namespace std;
char ans[1005];
int main()
{
	int N,R;
	scanf("%d%d",&N,&R);
	if(N<0)
	{
		printf("-");	//���������
		N=-N; 
	}
	int m=0;	//�Ʋ���
	while(N)
	{
		if(N%R<=9)
		{
			ans[m++]='0'+N%R;	
		}
		else if(N%R>9)
		{
			ans[m++]='A'+N%R-10;	
		}
		N/=R;	
	} 
	if(m==0)
		printf("0");
	else
	{
		for(int i=m-1;i>=0;i--)
		{
			printf("%c",ans[i]);
		}	
	}
	printf("\n");
	return 0;
}

