//�����ư�
/*�����һ�������Ż�����������ǵ���ߣ����أ������ж��⼸�����ǲ���
���е�
�����ʽ��
		����n(1<=n<=2*10^5)��m(1<=m<=10^4),n�������˿���Ŀ,m�������Ż�
	����Ŀ��
		����n�����������֣�������ÿ���˵����,����,���䣻Ȼ�����m�д���
	�����Ż�ġ�
�����ʽ:
		���m�У�ÿ�����'yes'��'no'��
*/
#include<iostream>
#include<set>
using namespace std;
struct people
{
	int high,weight,year;
	bool operator <(const people &a)const
	{
		if(high!=a.high)
			return high<a.high;
		if(high==a.high)
			return weight<a.weight;
		else if(weight==a.weight)
			return year<a.year;
	} 
};
int main()
{
	set<people> s;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		people p;
		cin>>p.high>>p.weight>>p.year;
		s.insert(p);
	}
	for(int j=0;j<m;j++)
		{
			people q;
			cin>>q.high>>q.weight>>q.year;
			if(s.count(q))
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
		
	return 0;
} 
/*����
3 2
166 50 30
178 60 30
132 40 15
167 50 30
178 60 23
*/ 
