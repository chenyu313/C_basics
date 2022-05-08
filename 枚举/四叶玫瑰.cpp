/*判断一个思四位数，它的各个位的四次幂之和是否等于它本身*/
#include<stdio.h>
bool rose(int n)
{
	int a=n/1000,b=n/100%10,c=n/10%10,d=n%10;
	int sum=a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d;
	if(sum==n)
		return true;
	else
		return false;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n<1000||n>=10000)
		printf("Error!\n");
	else
		for(int i=1000;i<=9999;i++)
			{
				if(rose(i))
					printf("%d\n",i);
			}
	return 0;
} 
