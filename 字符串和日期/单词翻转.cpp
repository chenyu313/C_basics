//单词翻转
/*
将 here you are 变成 you are here
*/
//方法1：使用string.h中的strrev函数-->strrev(s); 注意这个要用字符数组   
//方法2：使用algorithm中的reverse函数-->reverse(s.begin(),s.end());
//思路：先将整个字符串翻转，然后将单个单词翻转
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
char s[255];
void reverse(int low,int high)
{
	while (low < high)
	{
		int tmp = s[high];
		s[high] = s[low];
		s[low] = tmp;
		low++;
		high--;
	}
}

int main()
{
	cin.getline(s,255);
	int len=strlen(s);
	strrev(s);
	int num=0;
	for(int i=0;i<=len;i++)
	{
		if(s[i]==' ' || s[i]=='\0')
		{
			reverse(i-num,i-1);
			num = 0;
		}
		else
		{
			num++;
		}
	}
	cout<<s<<endl;
	return 0;
} 
//需要用到字符串的几个函数 
