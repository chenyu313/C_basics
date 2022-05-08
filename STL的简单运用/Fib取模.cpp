//Fibonacci取模
/*
问题描述： 
		Fibonacci数列的递推公式为：Fn=Fn-1+Fn-2，其中F1=F2=1。
		当n比较大时，Fn也非常大，现在我们想知道，Fn除以10007的余数是多少。
输入格式： 
		输入包含一个整数n。
输出格式： 
		输出一行，包含一个整数，表示Fn除以10007的余数。 
*/
#include<iostream>
using namespace std;
int Fib[1000005];
int main()
{
	int N,ans;
	cin>>N;
	Fib[1]=1,Fib[2]=1;
	for(int i=3;i<=N;i++)
	{
		Fib[i]=(Fib[i-1]+Fib[i-2])%10007;//边取余边存，防止溢出	
	}
	cout<<Fib[N]<<endl;
	return 0;
} 
