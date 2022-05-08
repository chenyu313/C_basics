//置换的玩笑
/*某同学不小心把实验报告上的空格给删了，导致原本记录从1到n的序列表示不清
输入格式：
		输入一组字符串(长度在100以内) 
输出格式：
		输出序列*/
#include<iostream>
#include<string>
using namespace std;
string s;
int n;		//表示序列中数的个数 
bool f;
int ans[100];
bool vis[100];
void dfs(int x,int cnt)		//x表示序列中的第几个，cnt表示已经分出几个
{
	if(f)
	{
		return;
	}
	if(x==s.size()&&cnt==n) 
	{
		for(int i=0;i<n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		f=true;
		return;
	}
	int a=s[x]-'0';
	if(a<=n&&!vis[a])	//该值小于n并且未被访问过 
	{
		ans[cnt]=a;
		vis[a]=true;
		dfs(x+1,cnt+1);
		vis[a]=false;
	}
	a=a*10+s[x+1]-'0';	//两位数 
	if(a<=n&&!vis[a])
	{
		ans[cnt]=a;
		vis[a]=true;
		dfs(x+2,cnt+1);
		vis[a]=false;
	}
} 
int main()
{
	cin>>s;
	n=(s.size()<=9?s.size():(s.size()-9)/2+9);	//判断是否有两位数
	dfs(0,0); 
	return 0;
} 
/*样例
4111109876532
*/ 
