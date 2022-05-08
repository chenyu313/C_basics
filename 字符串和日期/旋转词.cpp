//旋转词
/*判断A串是否是B串的旋转字符串
A:abcdef
B:bcdefa	-->true

A:abcdef
B:bcd	-->true

A:bcd
B:cbd	-->false
*/
//像这类的旋转词的题，可以想这样  bcdbcd-->cbd --->false(将A串复制两次)
#include<iostream>
#include<string>
using namespace std;
string A,B;
bool f=false;
int n=0;
int main()
{
	cin>>A;
	cin>>B;
	int len1=A.size();
	int len2=B.size();
	A=A+A;
	if(len2>len1)
	{
		f=false;
	}
	for(int i=0;i<2*len1;i++)
	{
		n=0;
		for(int j=i;j<2*len1;j++)	//从i开始判断A串 
		{
			if(A[j]==B[n])
			{
				n++;
			}
			else
			{
				n=0;
			}
			if(n==len2)
			{
				f=true;
				break;
			}
		}
		if(f)
			break;
	}
	if(f)
		cout<<"OK"<<endl;
	else
		cout<<"ON"<<endl;
	return 0;	
} 
