//K个数的和(抽象dfs)
/*从n个数中选K个数和为sum这个问题*/
#include<iostream>
using namespace std;
int n,K,sum,ans;
int A[55];
void dfs(int i,int count,int S)		//i为搜索了几个数，count记载用了几个数，S代表sum 
{
	if(i==n)
	{
		if(count==K&&S==sum)
			ans++;
		return;	
	} 
	dfs(i+1,count,S);		//不选第i个数
	dfs(i+1,count+1,S+A[i]);	//选第i个数 
	 
}
int main()
{
	cin>>n>>K>>sum;
	for(int i=0;i<n;i++)
		cin>>A[i];
	dfs(0,0,0);
	cout<<ans<<endl;
	return 0;
}
/*样例
5 3 9
1 2 3 4 5
*/
