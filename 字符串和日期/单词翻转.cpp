//���ʷ�ת
/*
�� here you are ��� you are here
*/
//����1��ʹ��string.h�е�strrev����-->strrev(s); ע�����Ҫ���ַ�����   
//����2��ʹ��algorithm�е�reverse����-->reverse(s.begin(),s.end());
//˼·���Ƚ������ַ�����ת��Ȼ�󽫵������ʷ�ת
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
//��Ҫ�õ��ַ����ļ������� 
