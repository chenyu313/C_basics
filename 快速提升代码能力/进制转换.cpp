/*进制转换
输入一个十进制数N，把它转化为R进制数输出。在10<=N<=16的情况下，用A表示10，B表示11，C表示12，D表示13
E表示14，F表示15；
输入格式：
输入两个整数N(N<10000)和R(2<=R<=16)
注意N可能是负数

输出格式：
输出一行表示转换后的数

样例输入：
23 12

样例输出：
1B 
*/ 
#include<cstdio>
using namespace std;
char ans[1005];
int main()
{
	int N,R;
	scanf("%d%d",&N,&R);
	if(N<0)
	{
		printf("-");	//先输出负号
		N=-N; 
	}
	int m=0;	//计步器
	while(N)
	{
		if(N%R<=9)
		{
			ans[m++]='0'+N%R;	
		}
		else if(N%R>9)
		{
			ans[m++]='A'+N%R-10;	
		}
		N/=R;	
	} 
	if(m==0)
		printf("0");
	else
	{
		for(int i=m-1;i>=0;i--)
		{
			printf("%c",ans[i]);
		}	
	}
	printf("\n");
	return 0;
}

