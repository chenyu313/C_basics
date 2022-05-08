//过河
/*在一个很黑的晚上，有n个小朋友在桥的一边，现在他们需要过河，但由于桥很窄，每次只允许不超过两个人通过
他们只有一个手电筒，所以每次过桥后需要有人把手电筒带回来，第i号小朋友过桥的时间为a[i]，两人过桥总时间为
二者中时间长者。问所有小朋友过桥时间最短是多少？
输入格式： 
		输入一个整数n
		第二行输入n个整数ai;
输出格式：
		输出一个整数表示最短过桥时间*/
#include<iostream>
using namespace std;
int a[1010];
int dp[1010];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+max(a[i],a[i-1]);
		a[i]=min(a[i],a[i-1]);
	}
	cout<<dp[n]<<endl;
	return 0;
}
/*样例
4
1 2 5 10
*/ 
