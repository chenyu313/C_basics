//����
/*ѧ�Լ����������飬��ô������ж��ٱ���ͬ��
�����ʽ��
		��һ�������鼮����n(1<=n<=10^6)��
		Ȼ����n������(����ΪӢ���ַ���������С��100)
�����ʽ:
		��һ�������ͬ�鼮��������Ȼ���������ֵ����������������
*/
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	map<string,int> s;		//����ӳ�䣻���ֺ�����
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string name;
		cin>>name;
		s[name]++;			//���ﲻ��ʹ��insert()��������ֱ��++��������뵽ӳ���� 
	} 
	cout<<s.size()<<endl;
	for(map<string,int>::iterator it=s.begin();it!=s.end();it++)
		cout<<it->first<<" "<<it->second<<endl;
} 
/*����
4
English
Math
Chinese
Chinese
*/ 
