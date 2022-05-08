#include<stdio.h>
#include<string.h>
char A[5000000];
int main()
{
	int n,len=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		strcat(A+len+1,A);//在len的后面连接A
		A[len]='A'+i-1;
		len=strlen(A);
	}
	printf("%s\n",A);
	
	return 0;
}
