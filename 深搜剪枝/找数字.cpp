//找数字
/*给定一个数n，让你找一个只由0,1组成的十进制数m，要求这个数m可以被n整除
输入格式:
		输入一个整数n
输出格式:
		输出m的相应值，要求这个数字长度小于19位长度*/
#include<iostream>
using namespace std;
int n;
bool ok;
void dfs(long long sum,int cnt)
{
	if(cnt>=19)
	{
		return;
	}
	if(ok)
	{
		return;
	}
	if(sum%n==0)
	{
		ok=true;
		cout<<sum<<endl;
		return;
	}
	dfs(sum*10,cnt+1);		//后面加0 
	dfs(sum*10+1,cnt+1);	//后面加1 
}
int main()
{
	cin>>n;
	dfs(1,0);
	return 0;
 } 
