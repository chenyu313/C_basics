//蒜头君学英语(集合)
/*题目描述
蒜头君快要考托福了，这几天，蒜头君每天早上都起来记英语单词。花椰妹时不时地来考一考蒜头君：花椰妹会询问蒜头君一个单词，
如果蒜头君背过这个单词，蒜头君会告诉花椰妹这个单词的意思，不然蒜头君会跟花椰妹说还没有背过。单词是由连续的大写或者小
写字母组成。注意单词中字母大小写是等价的。比如You和you是一个单词。

输入格式
首先输入一个n(1≤n≤100000) 表示事件数。接下来 n 行，每行表示一个事件。
每个事件输入为一个整数 d 和一个单词 word（单词长度不大于 20），用空格隔开。
如果 d=0，表示蒜头君记住了 word 这个单词，如果 d=1，表示这是一个 测试，
测试蒜头君是否认识单词 word（花椰妹永远不会告诉蒜头君这个单词的意思）。
事件的输入是按照时间先后顺序输入的。

输出格式

对于花椰妹的每次 测试，如果蒜头君认识这个单词，输出一行Yes, 否则输出一行No。

样例输入1

5
0 we
0 are
1 family
0 Family
1 Family

样例输出1

No
Yes

样例输入2

4
1 jisuanke
0 Jisuanke
0 JISUANKE
1 JiSuanKe

样例输出2

No
Yes
*/
#include<iostream>
#include<set>
#include<string>
using namespace std;
set<string> w;
int main()
{
	int n,op;
	string s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>op>>s;
		if(op==0)
		{
			for(int j=0;j<s.size();j++)
			{
				if(s[i]>='A'&&s[i]<='Z')	//大写转小写 
				{
					s[i]='a'+s[i]-'A';
				}
				
			}
			w.insert(s); 
		}else{
			if(w.count(s)){
				cout<<"Yes"<<endl;
			}else{
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
}
/*样例
5
0 we
0 are
1 family
0 Family
1 Family 
*/
