//分数线
/*
为了鼓励大家，老师希望获奖人数不少于参赛总人数的一半。因此，老师需要确定一个获奖分数线，所有得分在分数线及以上的同学可以获奖。
在满足上面条件的情况下，老师希望获奖分数线越高越好。

请同学们通过程序设计的方法来解决以上问题，确定获奖分数线和总获奖人数。
输入格式
第一行为一个整数  表示参赛总人数。

第二行为 n 个整数，分别表示 n（1<=n<=100000）个同学参加的分数,所有的分数都为0-100的整数，包含0和100，（中间用一个空格隔开）


*/
//C语言解 
/*#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int num[100005];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	sort(num,num+n);
	int avg=n/2;
	printf("%d %d\n",num[avg-1],n-avg+1);
	return 0;
}*/
//C++解 
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int num[1000005];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);
	int avg=n/2;
	cout<<num[avg-1]<<" "<<n-avg+1<<endl;
	return 0;
}
/*
7
76 71 42 4 27 27 20
*/
