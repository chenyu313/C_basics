#include<stdio.h>
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int y,m,d,k;
	scanf("%d%d%d%d",&y,&m,&d,&k);
	for(int i=0;i<k;i++)				//迭代加日期
	{
		if((y%100!=0&&y%4==0)||y%400==0)//若是闰年则2月为29天
			month[2]=29;
		d++;							//天数增加
		if(d==month[m])					//若天数达到当前月数的极限
		{
			d=1;
			m++;
		}
		if(m==13)						//月份达到当前年的极限
		{
			m=1;
			y++;
		}
	}
	printf("%04d-%02d-%02d\n",y,m,d);
	return 0;
}