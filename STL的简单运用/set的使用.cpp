//计算集合中的和
#include<iostream>
#include<set>
using namespace std;
int main()
{
	int a[6]={2,2,3,4,10,10};
	int sum=0;
	set<int> x;
	for(int i=0;i<6;i++)
		x.insert(a[i]);
	for(set<int>::iterator it=x.begin();it!=x.end();it++)
		sum+=*it;
	cout<<sum<<endl;
	return 0;
 } 
