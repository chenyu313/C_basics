//FJ的字符串
/*问题描述
　　FJ在沙盘上写了这样一些字符串：
　　A1 = “A”
　　A2 = “ABA”
　　A3 = “ABACABA”
　　A4 = “ABACABADABACABA”
　　… …
　　你能找出其中的规律并写所有的数列AN吗？
输入格式
　　仅有一个数：N ≤ 26。
输出格式
　　请输出相应的字符串AN，以一个换行符结束。输出中不得含有多余的空格或换行、回车符。*/
#include<iostream>
#include<string>
using namespace std;
int n;
string s[30];
int main()
{
	cin>>n;
	s[1]="A";
	for(int i=2;i<=n;i++)
	{
		s[i]+=s[i-1];
		s[i].push_back('A'+i-1);
		s[i]+=s[i-1];
	}
	cout<<s[n]<<endl;
	return 0;
}
