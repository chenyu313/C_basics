//����
/*����n����������������ִ���������
�����ʽ��
		��һ������һ������n(1<=n<=100000),����������n������
�����ʽ��
		������ִ��������Ǹ���,��������ֵĴ��� (���г��ִ�����ͬ�����ֵ�ϴ���Ǹ�) 
*/
#include<iostream>
#include<map>
#include<algorithm> 
using namespace std;
map<int,int> ans;
int a[100005]; 
int main()
{
	int n,b,max=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ans[a[i]]++;
	}
	sort(a,a+n);
	for(int j=0;j<n;j++)
	{
		if(max<=ans[a[j]])
		{
			max=ans[a[j]];
			b=j;
		}
	}
	cout<<a[b]<<" "<<max<<endl;
	return 0;
 } 
 /*����
10
10 10 27 4 9 9 3 1 2 6
*/ 
