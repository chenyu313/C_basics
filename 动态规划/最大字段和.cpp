//����Ӷκ�(dp)
#include<iostream>
using namespace std;
const int f=-100000;
int main()
{
	int n,sum=0,ans=f;
	int A[105];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		ans=max(ans,A[i]);		//��֤ans��A[i]�е����ֵ 
	}	
	if(ans<=0)
	{
		cout<<ans<<endl;	//����ȫΪ������� 
	}
	else	//ȫΪ������� 
	{
		for(int j=0;j<n;j++)
		{
			sum+=A[j];
			if(sum<0)		//��֤sum��Ϊ���� 
				sum=0;
			if(sum>ans)		//��������ans����֤��� 
				ans=sum; 
		}
	cout<<ans<<endl; 
	} 
	return 0;
} 
/*����
6
-2 11 -4 13 -5 -2
*/ 
