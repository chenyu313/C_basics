//K�����ĺ�(����dfs)
/*��n������ѡK������Ϊsum�������*/
#include<iostream>
using namespace std;
int n,K,sum,ans;
int A[55];
void dfs(int i,int count,int S)		//iΪ�����˼�������count�������˼�������S����sum 
{
	if(i==n)
	{
		if(count==K&&S==sum)
			ans++;
		return;	
	} 
	dfs(i+1,count,S);		//��ѡ��i����
	dfs(i+1,count+1,S+A[i]);	//ѡ��i���� 
	 
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
/*����
5 3 9
1 2 3 4 5
*/
