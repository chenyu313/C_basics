//���δ�
/*
�������ַ��������дһ�������жϣ��ڶ����ַ���ͨ�������Ƿ���Ա�ɵ�һ���ַ���
*/
/*#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
char c1[1005],c2[1005];
int main()
{
	string s1,s2;
	bool f=true;
	cin>>s1;
	cin>>s2;
	int len1=s1.size();
	int len2=s2.size();
	for(int i=0;i<len1;i++)
	{
		c1[i]=s1[i];
	}
	for(int j=0;j<len2;j++)
	{
		c2[j]=s2[j];
	}
	sort(c1,c1+len1);
	sort(c2,c2+len2);
	if(len1!=len2)
	{
		f=false;
	}
	else
	{
		for(int i=0;i<len1;i++)
		{
			if(c1[i]!=c2[i])
			{
				f=false;
				break;
			}
		}
	}
	if(f)
		cout<<"OK"<<endl;
	else
		cout<<"ON"<<endl;
	return 0;	
}*/
//˼·�����ַ�������ַ����������Ȼ��һһ�ж�

//˼·2��Ascii��ⷨ(��������)
#include<iostream>
#include<string>
using namespace std;
int ABC[105];
int main()
{
	string s1,s2;
	bool f=true;
	cin>>s1;
	cin>>s2;
	int len1=s1.size();
	int len2=s2.size();
	if(len1!=len2)
		f=false;
	for(int i=0;i<len1;i++)
	{
		ABC[s1[i]-'0']++;		//��ASCII�뵱�±��ַ 
	}
	for(int j=0;j<len2;j++)
	{
		ABC[s2[j]-'0']--;
		if(ABC[s2[j]-'0']<0)
		{
			f=false;
			break;
		}
	}
	if(f)
		cout<<"OK"<<endl;
	else
		cout<<"ON"<<endl;
}
//û�����򣬺͸�������飬������ʱ��Ϳռ� 
