/*Ã¶¾Ù×Ö·û*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	char s[10];
	for(int i=0;i<10;i++)
		{
			s[i]=char(65+rand()%26);	//65ÊÇAµÄAscallÂë 
			printf("%c",s[i]);
		}
		printf("\n");
	for(int j=0;j<10;j++)
		for(int k=0;k<26;k++)
		{
			if(s[j]==char(65+k))
			printf("%c",char(65+k));
		}
		return 0;
} 
