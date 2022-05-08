/*某抽奖号码是n位数，要求其中不带'4'，且第一位不为'0'，共有多少个奖券*/
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
