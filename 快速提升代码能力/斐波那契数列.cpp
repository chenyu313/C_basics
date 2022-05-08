#include<stdio.h>
const long long mod=1e18;
long long Fib[10005];
int main()
{
	int N,ans=0;
	scanf("%d",&N);
	Fib[1]=0,Fib[2]=1;
	for(int i=3;i<=N;i++)
	{
		Fib[i]=(Fib[i-1]+Fib[i-2])%mod;
		if(int(Fib[i])==N);
			{
				ans=i;
				break;
			}
			
	}
	if(ans!=0)
		printf("%d\n",ans);
	else
		printf("No Solution\n");
	return 0;
}
