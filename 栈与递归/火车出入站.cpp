//火车出入栈
//给定 n 个数的排列 a 和一个栈，n 个值的入栈顺序为 1,2...n，判断出栈顺序是否可以是排列 a。(判断出栈顺序是否正确)
//栈问题：stack 
/*
样例输入：
5
1 3 2 5 4
样例输出：
legal

样例输入：
5
1 5 3 2 4
样例输出：
illegal 
*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
stack<int> s; 
int main()
{
	int n;
	cin>>n; 
	vector<int> arr(n);
	for(int i=0;i<n;i++)		//这里输出的出栈顺序，到时候用来对比的 
	{
		cin>>arr[i];
	}
	bool f=true;	//用来判出栈顺序是否合法
	int cur=1;		//计数
	for(int j=0;j<n;j++)
	{
		while((s.empty()||s.top()!=arr[j]) && cur<=n)	//当栈为空时or栈顶元素不匹配，则压栈 
		{
			s.push(cur);
			cur++; 
		}
		if(s.empty() || s.top()!=arr[j])	//如果压栈后还不匹配的话or栈为空，则可以断定这个出栈顺序为错误的
		{
			f=false;
			break; 
		}
		else
		{
			s.pop();		//否则就出栈	
		}	
	} 
	if(f)
	{
		cout<<"legal"<<endl;	
	} else
	{
		cout<<"illegal"<<endl;
	}
	return 0;
}

/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];			//出栈顺序 
	int f=1;
	int cur=1;
	stack<int> s;
	for(int j=0;j<n;j++)
	{
		while((s.empty() || s.top()!=a[j]) && cur<=n)		//当栈顶元素不匹配时或栈空 
		{
			s.push(cur);	//压栈 
			cur++;
		}
	
		if(s.empty()||s.top()!=a[j])
		{
			f=0;
			break;
		}
		else
		{
			s.pop();
		}
	}
	
	if(f)
		cout<<"legal"<<endl;
	else
		cout<<"illegal"<<endl;
	return 0;
 }*/ 
