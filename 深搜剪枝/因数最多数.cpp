//因数最多的数
/*某同学对一个数的因数产生兴趣，他想知道在1到n的范围内，因数个数最多的数是多少，如果有多个，他想知道
最小的那一个
输入格式：
		第一行输入一个T，表示数据的组数
		接下来T行每行输入一个正整数n(1<=T<=100;1<=n<=10^16)
输出格式：
		一共输出T行，每一行一个正整数表示最多因数个数的那个数*/
#include<iostream>
using namespace std;
int T;
long long n,ans,mc;
const int prime[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
//u表示当前选择了多少个质因子，m表示可选的最高次项是多少，x表示当前的数是多少，cnt表示因子的个数 
void dfs(int u,int m,long long x,long long cnt)
{
	if(cnt>mc) 
	{
		mc=cnt;
		ans=x;
	}
	else if(cnt==mc&&x<ans)
	{
		ans=x;
	}
	if(u==15)
		return;
	for(int i=1;i<=m;i++)
	{
		x=x*prime[u];
		if(x>n)
		break;
		dfs(u+1,i,x,cnt*(i+1));
	}
}		
int main()
{
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>n;
		mc=0;
		dfs(0,60,1,1);
		cout<<ans<<endl;
	}
	return 0;
 } 
 /*样例
3
10
100
1000
*/ 
