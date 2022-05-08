#include<stdio.h>
#include<string.h>
char name[105],ans[105];
int maxlen=0;
int main()
{
	int n,len;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",name);
		len=strlen(name);
		if(len>maxlen)
		{
			maxlen=len;
			strcpy(ans,name);
		}
	}
	printf("%s\n",ans);
	return 0;
}