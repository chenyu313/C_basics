/*
�����������
N������������Щ������ÿһλ������ӣ���С�������򣬼�����������ÿһλ������ӵĺ�ԽС��λԽ��ǰ��
�����λ��Ӻ���ȣ�����������ֵ��С������ 
���룺
4
20 12 1 11
�����
1 11 20 12 
*/
#include<iostream>
#include<algorithm>
using namespace std;
int num[10005];
bool cmp(int a,int b)
{
	int sum1=0,sum2=0;
	int a1=a;
	int b1=b;
	while(a1)
	{
		sum1+=a1%10;
		a1/=10;
	}
	while(b1)
	{
		sum2+=b1%10;
		b1/=10;
	}
	if(sum1!=sum2)
	{
		return sum1<sum2;
	}else
	{
		return a<b;
	}
}
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>num[i];
	}
	sort(num,num+N,cmp);
	for(int j=0;j<N;j++)
	{
		if(j!=N-1)
		{
			cout<<num[j]<<" ";
		}else
		{
			cout<<num[j]<<endl;
		}
	}
	return 0;
}

