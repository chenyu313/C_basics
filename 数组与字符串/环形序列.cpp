//环形序列
/*长度为n的环形串有n种表示方法，分别为从某个位置开始顺时针得到，在这些表示法中，字典序最小的
称为“最小表示”。
输入一个长度为n的（n<=100）的环形DNA串（只包含A、C、G、T）的一种表示法，你的任务是输出最小表示
输入：
	第一行输入样例个数n
	接下来n行输入字符串
输出：
	输出n个最小表示*/
#include<iostream>
#include<string.h>
using namespace std;
bool f(string s,int p,int q)
{
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[(p+i)%len]!=s[(q+i)%len]){		//找出最小的头 
			return  s[(p+i)%len]<s[(q+i)%len];
		}
	} 
	return false;		//相等 
}
int main()
{
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int ans=0;
		int len=s.length();
		for(int i=0;i<len;i++){
			if(f(s,i,ans))
				ans=i;
		}
		for(int j=0;j<len;j++){
			cout<<s[(ans+j)%len];
		}
		cout<<endl;
	}
	return 0;	
}
/*样例
2
CTCC
CGAGTCAGCT 
*/
