#include<stdio.h>
#include<string.h>
int Whatday(int y,int m,int d)
{
	int ans=0;
//年
	for(int i=1;i<y;i++)
	{
		if((i%100!=0&&i%4==0)||i%400==0)
		{
			ans+=366%7;//取一年内多余的天数
			ans%=7;//若累加大于7，则取余7
		}
		else
		{
			ans+=365%7;
			ans%=7;
		}
	}
//月
	for(int j=1;j<m;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
		{
			ans+=31%7;
			ans%=7;
		}
		else if(j==4||j==6||j==9||j==11)
		{
			ans+=30%7;
			ans%=7;
		}
		else if((y%100!=0&&y%4==0)||y%400==0)//闰年
		{
			ans+=29%7;
			ans%=7;
		}
		else
		{
			ans+=28%7;
			ans%=7;
		}
	}
	ans+=d-1;//这里减1是因为数组按0开始，和上面的年，月从1开始一样
	return ans%7;
}
char* weekday[7]={"Monday","Tuesday","Wednesday","Thusday","Friday","Saturday","Sunday"};//c中定义字符串数组
int main()
{
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	printf("%s\n",weekday[Whatday(year,month,day)]);
	return 0;
}