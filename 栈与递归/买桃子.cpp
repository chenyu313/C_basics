//吃桃子
/*某君买了一堆桃子，但不知道个数，他每天吃一半桃子还多吃一个，到了第n天还剩
1个，求他第一天买了多少个桃子*/
#include<iostream>
using namespace std;
int n;
int f(int x)
{
	if(x==n)
		return 1;
	else
	{
		return 2*f(x+1)+2;
	}
}
int main()
{
	cin>>n;
	cout<<f(1)<<endl;
	return 0;
} 
