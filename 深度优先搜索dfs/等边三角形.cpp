//等边三角形
/*现在手中有一些木棍，他们长短不一，某同学想将这个木棍拼出一个等边三角形，并且每个木棍都要用到
输入格式：
		输入n(3<=n<=10)，表示木棍数，pi表示木棍的长度
输出格式：
		若能拼出等边三角形则输出'Yes',否则输出'No'	*/
#include<iostream>
using namespace std;
int p[15],n,sum=0;
bool f=false;
bool vis[15];
void dfs(int cnt,int len,int s)		//cnt表示符合条件的木棍数，len表示木棍的长度，s表示加的那个木棍 
{
	if(f)				//如果找到了返回 
	{
		return;
	}
	if(cnt==3)			//如果三根木棍都找到了，返回 
	{
		f=true;
		return;
	}
	if(len==sum/3)		
	{
		dfs(cnt+1,0,0);
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(!vis[i])
		{
			vis[i]=true;
			dfs(cnt,len+p[i],i+1);			//顺序找，防止找到多余的 
			vis[i]=false;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<n;i++)
	{
		sum+=p[i];
	}
	if(sum%3!=0)
		cout<<"no"<<endl;
	else
	{
		dfs(0,0,0);
		if(f)
		{
			cout<<"yes"<<endl;
		}
		else
			cout<<"no"<<endl;
	} 
	return 0;
 } 
