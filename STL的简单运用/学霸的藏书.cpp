//藏书
/*学霸家中有许多藏书，这么多藏书有多少本不同的
输入格式：
		第一行输入书籍总量n(1<=n<=10^6)。
		然后有n行书名(书名为英文字符串，长度小于100)
输出格式:
		第一行输出不同书籍的数量，然后按书名的字典序输出书名和数量
*/
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	map<string,int> s;		//定义映射；名字和数量
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string name;
		cin>>name;
		s[name]++;			//这里不能使用insert()，但可以直接++，它会插入到映射里 
	} 
	cout<<s.size()<<endl;
	for(map<string,int>::iterator it=s.begin();it!=s.end();it++)
		cout<<it->first<<" "<<it->second<<endl;
} 
/*样例
4
English
Math
Chinese
Chinese
*/ 
