//��ͷ��������
/*
��ͷ�����⳧���Ե�ʱ��������������һ�������⣺
���� n����������������ִ���������������ж���ظ����ֵ��������ֵ����һ����
��ʱ�����Ǹ���ͷ����ס�ˡ�������ͷ���������㡣

�����ʽ
��һ������һ������ n ( 1 �� n �� 100000 ) ��������һ������ n �� int ��Χ�ڵ�������

�����ʽ
������ִ����������ͳ��ֵĴ������м���һ���ո����������ж���ظ����ֵ��������ֵ�����Ǹ���

��������
5
1 1 2 3 4

�������
1 2

��������
10
9 10 27 4 9 10 3 1 2 6

�������
10 2
*/ 
//����1��������洢 
/*#include<iostream>
#include<algorithm>
using namespace std;
int A[100005];
int cnt[100005];
int main()
{
	int n;
	int Max,Maxcnt;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		cnt[A[i]]++;
	}
	sort(A,A+n);
	Max=A[0];
	Maxcnt=cnt[A[0]];
	for(int i=0;i<n;i++)
	{
		if(Max<A[i]&&Maxcnt<=cnt[A[i]])
		{
			Max=A[i];
			Maxcnt=cnt[A[i]];
		}
	}
	cout<<Max<<" "<<Maxcnt<<endl;
	return 0;
}*/

//����2����map�洢
#include<iostream>
#include<map>
using namespace std;
map<int ,int> m;
int main()
{
	int n,ans1,ans2;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		m[x]++;
	}
	map<int,int>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		if((it->second)>=ans2)
		{
			ans2=(it->second);
			ans1=(it->first);
		}
	}
	cout<<ans1<<" "<<ans2<<endl;
	return 0;
} 
