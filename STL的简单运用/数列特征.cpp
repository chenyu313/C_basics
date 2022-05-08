//数列特征
/*问题描述
给出n个数，找出这n个数的最大值，最小值，和。
输入格式
第一行为整数n，表示数的个数。
第二行有n个数，为给定的n个数，每个数的绝对值都小于10000。
输出格式
输出三行，每行一个整数。第一行表示这些数中的最大值，第二行表示这些数中的最小值，第三行表示这些数的和。
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
