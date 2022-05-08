//警察破案
/*最近有一个犯罪团伙，警察会根据他们的身高，体重，年龄判断这几个人是不是
本市的
输入格式：
		输入n(1<=n<=2*10^5)和m(1<=m<=10^4),n代表本市人口数目,m代表犯罪团伙
	的数目。
		后面n行有三个数字，代表本市每个人的身高,体重,年龄；然后会有m行代表
	犯罪团伙的。
输出格式:
		输出m行，每行输出'yes'或'no'。
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
/*样例
3 2
166 50 30
178 60 30
132 40 15
167 50 30
178 60 23
*/ 
