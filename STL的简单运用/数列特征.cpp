//��������
/*��������
����n�������ҳ���n���������ֵ����Сֵ���͡�
�����ʽ
��һ��Ϊ����n����ʾ���ĸ�����
�ڶ�����n������Ϊ������n������ÿ�����ľ���ֵ��С��10000��
�����ʽ
������У�ÿ��һ����������һ�б�ʾ��Щ���е����ֵ���ڶ��б�ʾ��Щ���е���Сֵ�������б�ʾ��Щ���ĺ͡�
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> list;
int max_1(vector<int> a)
{
	int s=-10000;
	for(int i=0;i<a.size();i++)
	{
		if(s<a[i])
			s=a[i];
	}
	return s;
} 
int min_1(vector<int> a)
{
	int s=10000;
	for(int i=0;i<a.size();i++)
	{
		if(s>a[i])
			s=a[i];
	}
	return s;
}
int main()
{
	int n,Max,Min,sum,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		list.push_back(x);
	}
	Max=max_1(list);
	Min=min_1(list);
	for(int j=0;j<n;j++)
		sum+=list[j];
	cout<<Max<<endl;
	cout<<Min<<endl;
	cout<<sum<<endl;	
	return 0;
} 
