#include<stdio.h>
#include<string.h>
#define Maxsize 120
/*int main()
{
	char *A;
	int sum=0,i=0;
	A=new char[Maxsize];
	fgets(A,100,stdin);
	while(A[i]!=0)
	{
		if(A[i]=='A')
			sum++;
		i++;
	}
	printf("%d\n",sum);
	 return 0;
}*/
//Αν½β
int main()
{
	char s[105];
	int len=0,sum=0;
	scanf("%s",s);
	len=strlen(s);
	for(int i=0;i<len;i++)
		if(s[i]=='A')
			sum++;
		printf("%d\n",sum);
		return 0;
}