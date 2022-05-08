//浮点数排序
/*
我们有 N 个正浮点数，均小于 10000.0。现在需要将这些浮点数按照离它最近的整数的差从小到大排序，浮点数与距离最近的整数的差越小，
这个浮点数的排位越靠前；如果差相等，按照浮点数的值从小到大排序。

输入格式
输入有 2 行

第一行为一个整数 N，0 < N < 101；
第二行为用空格隔开的 N 个正浮点数，均小于 10000.0。
输出格式
输出有 1 行，为按照题目要求排序后的 N 个正浮点数，四舍五入保留 6 位小数，用空格隔开。
*/
#include<cstdio>
#include<algorithm>
#include<cmath>
#define EP 1e-6			//当两个数的差小于10e-6时，可以当这两个数相等
using namespace std;
double num[105]; 
bool cmp(double a,double b)
{
	double da=fabs(a-round(a));		//round()为四舍五入函数，可以求与a最近的整数 
	double db=fabs(b-round(b));
	if(fabs(da-db)<EP)			//当两个数的差小于10e-6时，可以当做相等 
	{
		return a<b;		
	} 
	return da<db;			//返回比较结果 
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%lf",&num[i]); 
	}
	sort(num,num+N,cmp);
	for(int j=0;j<N;j++)
	{
		if(j!=N-1)			//防止行末空格 
		{
			printf("%.6lf ",num[j]);
		}
		else
		{
			printf("%.6lf\n",num[j]);
		}
		
	}
	return 0;
} 

/*
9
1.001 2.1 3.2 4.0001 5.000001 6.9 7.2 8.001 9.0
*/
