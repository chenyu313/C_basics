//K����֮��
#include<iostream>
using namespace std;
int n,K,sum,ans=0;
int p[40];
void dfs(int i,int cnt,int s)
{
	//��֦
	if(cnt>K)
	{
		return;
	 } 
	 if(s>sum)
	 {
	 	return;
	 }
	if(i==n)
	{
		if(cnt==K&&s==sum)
		{
			ans++;
		}
		return;
	}
	dfs(i+1,cnt,s);			//��ѡ 
	dfs(i+1,cnt+1,s+p[i]);	//ѡ 
}
int main()
{
	n=30;
	K=8;
	sum=200;
	for(int i=0;i<n;i++)
		p[i]=i+1;
	dfs(0,0,0);
	cout<<ans<<endl;
	return 0;
 } 
