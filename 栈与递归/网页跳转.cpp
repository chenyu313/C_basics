//网页跳转
/*一个浏览器有三种操作：打开页面、回退、前进
	(1)打开页面:打开一个网址，并跳转
	(2)回退:返回上一次访问的页面
	(3)前进:返回上一次回退前的页面，如果上一次是打开页面，则无法前进
输入格式:
		第一行输入一个整数n，表示操作次数
		然后n行输入字符串VISIT、BACK、FORWARD
输出格式:
		成功则输出网址，否则输出Ignore*/
#include<iostream>
#include<string>
#include<stack>
using namespace std;
string op,s;			//op是指令，s是网址 
stack<string> s1,s2;	//s1存放打开页面的网址，s2存放回退页面的网址 
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>op;
		if(op=="VISIT")
		{
			cin>>s;
			s1.push(s);
			while(!s2.empty())		//打开新网址，就不能回退 
			{
				s2.pop();
			}
		}
		
		else if(op=="BACK")
		{
			if(s1.size()>1)			//想要回退至少s1要有一个或一个以上 
			{
				s2.push(s1.top());
				s1.pop();
			}
			else
			{
				cout<<"Ignore"<<endl;
			}	
		}
		
		else
		{
			if(!s2.empty())
			{
				s1.push(s2.top());
				s2.pop();
			}
			else
			{
				cout<<"Ignore"<<endl;
			}
		}
		cout<<s1.top()<<endl;
	}
	return 0;
 } 
 /*样例
10
VISIT http://www.xiaoyu.com/course/476
VISIT http://www.taobao.com
BACK
BACK
FORWARD
FORWARD
BACK
VISIT http://www.xiaoyu.com/course/429
FORWARD
BACK
*/
