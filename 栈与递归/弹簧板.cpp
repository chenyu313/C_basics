//弹簧板
/*一个小球会掉落在一串连续的弹簧板上，小球会在一个弹簧板上弹起，设有n个连续
的弹簧板，第i个弹簧板能选择a[i]或b[i]个距离。
输入格式：
		第一行输入n代表n个弹簧板
		第二行输入n个数字，表示a[i]
		第三行输入n个数字，表示b[i]
输出格式:
		输出一个整数，表示小球最小弹起的次数
*/
#include<iostream>
#include<algorithm>
using namespace std;
int n;
int a[205],b[205];
int ans[205];
bool vis[205];
int f(int x)
{
	if(x>=n)
		return 0;
	if(vis[x])				//判断是否访问过 
		return ans[x];		//防止重复运算 
	vis[x]=true;
	return min(f(x+a[x]),f(x+b[x]))+1;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cout<<f(0)<<endl;
	return 0;
} 
/*样例
5
2 2 3 1 2
1 2 3 4 1
*/ 
