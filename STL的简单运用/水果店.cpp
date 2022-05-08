//水果店
/*
蒜头君经营着一个不大的水果店。他认为生存之道就是经营最受顾客欢迎的水果。现在他想要一份水果销售情况的明细表，
这样就可以很容易掌握所有水果的销售情况了。蒜头君告诉你每一笔销售记录的水果名称，产地和销售的数量，请你帮他生成明细表。

输入格式
第一行是一个整数 N(0<N≤1000)，表示工有N次成功的交易。其后有N行数据，每行表示一次交易，
由水果名称(小写字母组成，长度不超过100)，水果产地(小写字母组成，长度不超过100)和交易的水果数目(正整数，不超过1000)组成.

输出格式
请你输出一份排版格式正确(请分析样本输出)的水果销售情况明细表。这份明细表包括所有水果的产地、名称和销售数目的信息。
水果先按产地分类，产地按字母顺序排列；同一产地的水果按照名称排序，名称按字母顺序排序。

样例输入
5
apple shandong 3
pineapple guangdong 1
sugarcane guangdong 1
pineapple guangdong 3
pineapple guangdong 1

样例输出
guangdong

   |----pineapple(5)

   |----sugarcane(1)

shandong

   |----apple(3)


*/
//map迭代器的使用+二维map的使用
#include<iostream> 
#include<map>
#include<string>
using namespace std;
//注意这里的>>要空一格不然编译器会识别不出来 
map<string,map<string,int> > mp;
int main()
{
	string s1,s2;
	int n,d;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s1>>s2>>d;			//s1为水果，s2为地点，d为数量 
		mp[s2][s1]+=d;
	}
	//迭代器输出
	for(map<string,map<string,int> >::iterator it=mp.begin();it!=mp.end();it++)
	{
		cout<<(it->first)<<endl;
		//注意第二层循环 
		for(map<string,int>::iterator it2=(it->second.begin());it2!=(it->second.end());it2++)
		{
			cout<<"   "<<"|----"<<it2->first<<"("<<it2->second<<")"<<endl;
		}	
	} 
	return 0;
}
/*#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string,map<string,int> > s;
int main()
{
	int n,nmb;
	string name,form;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>name>>form>>nmb;
		s[form][name]+=nmb;
	}
	for(map<string,map<string,int> >::iterator it1=s.begin();it1!=s.end();it1++)
	{
		cout<<it1->first<<endl;
		for(map<string,int>::iterator it2=it1->second.begin();it2!=it1->second.end();it2++)
		{
			cout<<"   "<<"|----"<<it2->first<<"("<<it2->second<<")"<<endl;
		}
	}	
	return 0;
 } 
 */
 /*样例
5
apple shandong 3
pineapple guangdong 1
sugarcane guangdong 1
pineapple guangdong 3
pineapple guangdong 1
*/
  
