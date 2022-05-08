/*某抽奖号码是5位数，要求其中不带4的号码，输入n到m，可以发行多少张*/
#include<stdio.h>
bool Judge(int n)
{
	int a=n/10000,b=n/1000%10,c=n/100%10,d=n/10%10,e=n%10;
	if(a==4||b==4||c==4||d==4||e==4)
		return false;
	else
		return true;
}
int main()
{
	int n,m,sum=0;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++)
	{
		if(Judge(i))
			sum++;
	}
	printf("%d\n",sum);
	return 0;
} 
