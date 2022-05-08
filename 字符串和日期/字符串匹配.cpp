//字符串匹配-- Rabin-Karp算法
/*
判断字符串A"ABA"是不是字符串B"ABABABA"的子串。 
并返回位置 

假设待匹配字符串的长度为N，目标字符串的长度为M（M>N）；首先计算待匹配字符串的hash值，计算目标字符串
前N个字符的hash值；比较前面计算的两个hash值，比较次数M-N+1：若hash值不相等，则继续计算目标字符串的下
一个长度为N的字符子串的hash值，若hash值相同，则需要使用比较字符是否相等再次判断是否为相同的子串(这里
若hash值相同，则直接可以判断待匹配字符串是目标字符串的子串，之所以需要再次判断字符是否相等，是因为不
同的字符计算出来的hash值有可能相等，称之为hash冲突或hash碰撞，不过这是极小的概率，可以忽略不计)。
*/
#include<iostream>
#include<string>
using namespace std;
long long seed=31;	//进制数 
//转化hash 
long long Hash(string s)
{
	long long h=0;
	for(int i=0;i<s.size();i++)
	{
		h=h*seed+s[i];
	}
	cout<<h<<endl;
	return h;
}
//匹配 
void match(string p,string s)
{
	long long hash_p=Hash(p);
	int len_p=p.size();
	for(int i=0;i+len_p<=s.size();i++)
	{
		long long hash_i=Hash(s.substr(i,len_p));	//表示第i位起，取len_p个 
		cout<<len_p<<endl;
		if(hash_i==hash_p)
		{
			cout<<"match:"<<i<<endl;
		}
	}
}
int main()
{
	string s ="ABABABA";
    string p ="ABA";
    match(p,s);
	return 0;
}
