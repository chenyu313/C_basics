//16进制转换8进制
/*
题目描述： 
　　给定n个十六进制正整数，输出它们对应的八进制数。

输入格式： 
　　输入的第一行为一个正整数n （1<=n<=10）。
　　接下来n行，每行一个由0~9、大写字母A~F组成的字符串，表示要转换的十六进制正整数，每个十六进制数长度不超过100000。

输出格式： 
　　输出n行，每行为输入对应的八进制正整数。 
*/
//思路1: 
//将16进制转10进制再转8进制 (错误,long long放不下)
#include<stdio.h>
#include<string.h>
long long sum[10];
char ans[100005]; 
long long Transform1(char A[])
{
	long long s=0;
	int len=strlen(A),k;
	for(k=0;k<len;k++)
	{
		int t;
		if(A[k]<='9')
			t=A[k]-'0';
		else
			t=A[k]-'A'+10;
		s=s*16+t;
	}
	return s;
}
int main()
{
	int N,i,j;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		int len,n,m=0;
		char A[100005],ans[100005]={0};
		scanf("%s",&A);
		sum[i]=Transform1(A);
		while(sum[i])
		{
			ans[m++]=sum[i]%8+'0';
			sum[i]/=8;
		}
		len=strlen(ans);
		for(n=len-1;n>=0;n--)
			printf("%c",ans[n]);
		printf("\n");
	}
	return 0;
 } 
 //思路2：
 //将16进制转2进制再转8进制
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string a,b,c;	//分别代表16，8,2进制
	cin>>n;
	while(n--)
	{
		a="",b="",c="";
		cin>>a;		//16进制
		for(int i=0;i<a.size();i++)
		{
			switch(a[i])		//转成2进制 
			{
				case '0':b+="0000";break;
				case '1':b+="0001";break;
				case '2':b+="0010";break;
				case '3':b+="0011";break;
				case '4':b+="0100";break;
				case '5':b+="0101";break;
				case '6':b+="0110";break;
				case '7':b+="0111";break;
				case '8':b+="1000";break;
				case '9':b+="1001";break;
				case 'A':b+="1010";break;
				case 'B':b+="1011";break;
				case 'C':b+="1100";break;
				case 'D':b+="1101";break;
				case 'E':b+="1110";break;
				case 'F':b+="1111";break;
				default:break;
			}
		} 
		if((b.size()%3)==1)		//2进制转成8进制先补足0位
			b.insert(0,"00");
		else if((b.size()%3)==2)
			b.insert(0,"0"); 
		int n_eight;		//暂存8进制的数
		for(int j=0;j<b.size();j+=3)
		{
			n_eight=4*(b[j]-'0')+2*(b[j+1]-'0')+(b[j+2]-'0');
			c+=(n_eight+'0');
		} 
		int k=0;
		while(c[k]=='0')
			k++;
		for(;k<c.size();k++)
		{
			cout<<c[k];
		} 
		cout<<endl;
	} 
	return 0;
 }  
