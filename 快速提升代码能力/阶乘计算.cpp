//������ϰ �׳˼���
/*��������
��������һ��������n�����n!��ֵ��
��������n!=1*2*3*��*n��
�㷨����
����n!���ܴܺ󣬶�������ܱ�ʾ��������Χ���ޣ���Ҫʹ�ø߾��ȼ���ķ�����ʹ��һ������A����ʾһ��������a��A[0]��ʾa�ĸ�λ��A[1]��ʾa��ʮλ���������ơ�
������a����һ������k��Ϊ������A��ÿһ��Ԫ�ض�����k����ע�⴦����Ӧ�Ľ�λ��
�������Ƚ�a��Ϊ1��Ȼ���2����3�����˵�nʱ�����õ���n!��ֵ��*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> num;
int main()
{
	int n,carry=0;		//carry������λ 
	num.push_back(1);
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		carry=0;
		for(int j=0;j<num.size();j++)
		{
			int t=num[j];
			num[j]=(num[j]*i+carry)%10;
			carry=(t*i+carry)/10;
		} 
		if(carry>0)
		{
			while(carry>=1)
			{
				num.push_back(carry%10);
				carry/=10;
			}
		}
	}
	for(int k=num.size()-1;k>=0;k--)
		cout<<num[k];
	cout<<endl;
	return 0;
}
