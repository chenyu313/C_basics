//��ת��
/*�ж�A���Ƿ���B������ת�ַ���
A:abcdef
B:bcdefa	-->true

A:abcdef
B:bcd	-->true

A:bcd
B:cbd	-->false
*/
//���������ת�ʵ��⣬����������  bcdbcd-->cbd --->false(��A����������)
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
		for(int j=i;j<2*len1;j++)	//��i��ʼ�ж�A�� 
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
