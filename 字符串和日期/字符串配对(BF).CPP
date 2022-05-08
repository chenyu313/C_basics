#include<stdio.h>
#include<string.h>
char s1[1005],s2[1005];
int main()
{
	int len1,len2,ans=0;
	fgets(s1,1004,stdin);//(主串)fgets输入字符串
	fgets(s2,1004,stdin);//(模式串)
	len1=strlen(s1)-1;//这里的长度要-1，因为回车算进去了
	len2=strlen(s2)-2;
	for(int i=0;len2+i-1<len1;i++)//若len2的长度大于len1则退出
	{
		bool matched=true;
		for(int j=0;j<len2;j++)
		{
			if(s1[i+j]!=s2[j])
			{
				matched=false;
				break;
			}
		}
		if(matched)
			ans++;
	}
	printf("%d\n",ans);
	return 0;
}