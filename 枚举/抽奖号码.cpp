/*ĳ�齱������nλ����Ҫ�����в���'4'���ҵ�һλ��Ϊ'0'�����ж��ٸ���ȯ*/
#include<stdio.h>
int main()
{
	int n,sum=8;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
		sum*=9;
	printf("%d\n",sum);
	return 0;
} 
