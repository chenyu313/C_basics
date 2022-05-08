//TeX中的引号
/*在TeX中，左引号是“＂”,右引号是“"” 。输入一篇包含双引号的文章，请将它转换成TeX格式
输入：
	"To be or not to be," quoth the Bard,"that is the question".
输出：
	＂To be or not to be,”quoth the Bard,＂that is the question”.
*/
//方法1：getchar的使用 
/*#include<stdio.h>
int main()
{
	char c;
	int f=1;
	while((c=getchar())!=EOF){
		if(c=='"'){
			printf("%s",f?"＂":"”");
			f=!f;
		}else{
			printf("%c",c);
		}
	} 
	return 0;
}*/
//方法2：string
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	bool f=true;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='"'){
			cout<<f?"＂":"”";
			f=!f;
		}else{
			cout<<s[i];
		}
	}
	cout<<endl;
	return 0;	
} 
//结论：string无法写入空格，到“To”后面就无法写入字符串，故方法2无法实行 

