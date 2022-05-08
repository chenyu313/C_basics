#include<iostream>
using namespace std;
int map[15][15];
int n,ans=0;
int vy[15],vd1[20],vd2[20]; 
void dfs(int x,int p)
{
	if(x==n && p==2)
	{
		ans++;
		return;
	}
	if(x==n)
	{
		dfs(0,p+1);
		return;
	}
	for(int i=0;i<n;i++)
	{
		//map[x][i]Î´·ÃÎÊ  
		if(map[x][i]!=0 && (vy[i]!=p&&vy[i]!=3) && (vd1[x+i]!=p&&vd1[x+i]!=3) && (vd2[x-i+n]!=p&&vd2[x-i+n]!=3))
		{
			map[x][i]=0;
			vy[i]+=p;
			vd1[x+i]+=p;
			vd2[x-i+n]+=p;
			
			dfs(x+1,p);
			
			vy[i]-=p;
			vd1[x+i]-=p;
			vd2[x-i+n]-=p;
			map[x][i]=1;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		cin>>map[i][j];
	dfs(0,1);
	cout<<ans<<endl; 
	return 0;
} 
