/*某君的年龄比他儿子大27岁，且把他的年龄的两位数交换就是他儿子的年龄,计算一下
他的年龄有多少种可能*/
#include<stdio.h>
int  main()
{
	int sum=0;
	for(int i=10;i<=99;i++)
	{
		if(i-(i%10)*10-i/10==27)
			sum++;
	}
	printf("%d\n",sum);
	return 0;
}
