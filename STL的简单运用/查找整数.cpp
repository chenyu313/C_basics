//��������
/*��������
����һ������n�����������У�������a�������еĵ�һ�γ����ǵڼ�����
�����ʽ
��һ�а���һ������n��
�ڶ��а���n���Ǹ�������Ϊ���������У������е�ÿ������������10000��
�����а���һ������a��Ϊ�����ҵ�����
�����ʽ
���a�������г����ˣ��������һ�γ��ֵ�λ��(λ�ô�1��ʼ���)���������-1��
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> A;
int main()
{
	int n,x,a,t=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		A.push_back(x);
	}
	cin>>a;
	for(int j=0;j<n;j++)
	{
		if(A[j]==a)
		{
			cout<<j+1<<endl;
			t=1;
			break;
		}	
	}
	if(t==0)
		cout<<-1<<endl;	
	return 0;
  }  
