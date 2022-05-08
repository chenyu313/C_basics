/*枚举n到m之间的所有质数*/
#include<stdio.h>
int main()
{
	int n,m;
	
	scanf("%d%d",&n,&m);
	if(n>m)
	{
		int t;
		t=n;
		n=m;
		m=t;
	} 
	for(int i=n;i<=m;i++)
	{
		bool is_prime=true;
		if(i==1||i==0)
			continue;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
				is_prime=false;
		}
		if(is_prime)
			printf("%d\n",i);
	}
	return 0;	
} 
