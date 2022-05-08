/*·½³Ìa^2+b^2+c^2=n,ÇÒa<b<c,Êä³öa£¬b£¬c*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int a=1;a*a<n;a++)
		for(int b=a+1;a*a+b*b<n;b++)
			for(int c=b+1;a*a+b*b+c*c<=n;c++)
				{
					if(a*a+b*b+c*c==n)
						printf("%d %d %d\n",a,b,c);
				}
	return 0;
} 
