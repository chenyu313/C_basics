//并集
/*
并集 
输入格式：
		第一行输入n,m(0<=n,m<=10000)分别表示集合A和集合B元素的个数
		后两行输入元素
  输出格式：
  		输出一行数据，要求从小到大输出
*/
//分析：STL库中set函数的运用 
#include<iostream>
#include<set>
using namespace std;
set<int> s;
int main()
{
	int n,m,x;
	int cnt=0;
	cin>>n>>m;
	for(int i=0;i<n+m;i++)	//这里利用了集合没有重复的特性(还有一个隐藏的特性就是他会排序) 
	{
		cin>>x;
		s.insert(x);
	}
	//接下来只需要注意如何输出就行，因为不知道集合当中的具体个数，所以需要 用到迭代器
	for(set<int>::iterator it=s.begin();it!=s.end();it++) 
	{
		if(cnt!=s.size()-1)
		{
			cout<<(*it)<<" ";
			cnt++;
		}else{
			cout<<(*it)<<endl;
		}
	}
	return 0;
}
/*
3 4
3 2 1
3 4 5 2
*/
