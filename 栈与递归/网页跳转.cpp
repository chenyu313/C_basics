//��ҳ��ת
/*һ������������ֲ�������ҳ�桢���ˡ�ǰ��
	(1)��ҳ��:��һ����ַ������ת
	(2)����:������һ�η��ʵ�ҳ��
	(3)ǰ��:������һ�λ���ǰ��ҳ�棬�����һ���Ǵ�ҳ�棬���޷�ǰ��
�����ʽ:
		��һ������һ������n����ʾ��������
		Ȼ��n�������ַ���VISIT��BACK��FORWARD
�����ʽ:
		�ɹ��������ַ���������Ignore*/
#include<iostream>
#include<string>
#include<stack>
using namespace std;
string op,s;			//op��ָ�s����ַ 
stack<string> s1,s2;	//s1��Ŵ�ҳ�����ַ��s2��Ż���ҳ�����ַ 
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>op;
		if(op=="VISIT")
		{
			cin>>s;
			s1.push(s);
			while(!s2.empty())		//������ַ���Ͳ��ܻ��� 
			{
				s2.pop();
			}
		}
		
		else if(op=="BACK")
		{
			if(s1.size()>1)			//��Ҫ��������s1Ҫ��һ����һ������ 
			{
				s2.push(s1.top());
				s1.pop();
			}
			else
			{
				cout<<"Ignore"<<endl;
			}	
		}
		
		else
		{
			if(!s2.empty())
			{
				s1.push(s2.top());
				s2.pop();
			}
			else
			{
				cout<<"Ignore"<<endl;
			}
		}
		cout<<s1.top()<<endl;
	}
	return 0;
 } 
 /*����
10
VISIT http://www.xiaoyu.com/course/476
VISIT http://www.taobao.com
BACK
BACK
FORWARD
FORWARD
BACK
VISIT http://www.xiaoyu.com/course/429
FORWARD
BACK
*/
