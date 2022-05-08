//青蛙跳杯子
/*
X星球的流行宠物是青蛙，一般有两种颜色：白色和黑色。
X星球的居民喜欢把它们放在一排茶杯里，这样可以观察它们跳来跳去。
如下图，有一排杯子，左边的一个是空着的，右边的杯子，每个里边有一只青蛙。

*WWWBBB

  其中，W字母表示白色青蛙，B表示黑色青蛙，*表示空杯子。

  X星的青蛙很有些癖好，它们只做3个动作之一：
  1. 跳到相邻的空杯子里。
  2. 隔着1只其它的青蛙（随便什么颜色）跳到空杯子里。
  3. 隔着2只其它的青蛙（随便什么颜色）跳到空杯子里。

  对于上图的局面，只要1步，就可跳成下图局面：

WWW*BBB

本题的任务就是已知初始局面，询问至少需要几步，才能跳成另一个目标局面。

输入为2行，2个串，表示初始局面和目标局面。
输出要求为一个整数，表示至少需要多少步的青蛙跳。

例如：
输入：
*WWBB
WWBB*

则程序应该输出：
2

再例如，
输入：
WWW*BBB
BBB*WWW

则程序应该输出：
10

我们约定，输入的串的长度不超过15
*/
//思路1：dfs
/* 
#include<iostream>
#include<string>
#define MAX 100005
using namespace std;
string s1,s2;
int ans=MAX;
int len;
int Find(string s)
{
	for(int i=0;i<s.length();i++){
		if(s[i]=='*')
			return i;
	}
}
void dfs(string s,int n)
{
	if(Find(s)>=n||Find(s)<0)	//若空杯子的位置大于等于整个长度，返回 
	{
		return;
	}
	if(s==s2){
		if(n<ans)
			ans=n;
		return;
	}
	int k=Find(s);
	string *ss=s;
	ss[k] 
}
int main()
{
	cin>>s1;
	cin>>s2;
	len=s1.length();
	dfs(s1,0);
	cout<<ans<<endl;
	return 0;	
} 
//没有做出来，卡在换位的地方，想着要不断设置新的变量来装新的状态，可能会超时or超空间 
*/


//思路2：bfs
#include<iostream>
#include<string>
#include<queue>
#include<map>
using namespace std;
map<string,int>	mp;		//用于判断是否走过这种路线 
string s1,s2;
int ans; 
struct Node
{
	string s;
	int step;
	Node(string ss,int sp){	//初始化 
		s=ss;
		step=sp;
	}
};
void bfs()
{
	queue<Node> q;
	q.push(Node(s1,0));
	while(!q.empty()) 
	{
		Node t=q.front();
		q.pop();
		if(t.s==s2){		//递归基 
			ans=t.step;
			return;
		}
		int len=t.s.size();
		for(int i=0;i<len;i++){
			for(int j=-3;j<=3;j++){
				string temp=t.s;
				if(i+j<0 || i+j>=len || t.s[i+j]!='*')	//若超界or交换对象不是"*"，则继续 
				{
					continue;
				}
				temp[i+j]=temp[i];	//交换 
				temp[i]='*';
				
				if(!mp[temp])	//若未标记过
				{
					mp[temp]=1;	//标记
					q.push(Node(temp,t.step+1));	//压入队列 
				} 
			}
		} 
	}
	
} 
int main()
{
	cin>>s1;
	cin>>s2;
	bfs();
	cout<<ans<<endl;
	return 0;
}
