//���ɰ�
/*һ��С�������һ�����ɰ��ϣ�С������һ�����ɰ�󣬻ᵯ��ĳһ���ص㣬ֱ���������ɰ�����ĵط�*/
#include<iostream>
using namespace std;
int T[10005];
int m=-1;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>T[i];
	for(int i=1;i<=n;i++)
	{
		int t=0;
		for(int j=i;j<=n;j+=T[j])
		{
			t++;
		}
		m=max(t,m);
	}
	cout<<m<<endl;
	return 0;
} 
