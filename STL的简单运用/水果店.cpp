//ˮ����
/*
��ͷ����Ӫ��һ�������ˮ���ꡣ����Ϊ����֮�����Ǿ�Ӫ���ܹ˿ͻ�ӭ��ˮ������������Ҫһ��ˮ�������������ϸ��
�����Ϳ��Ժ�������������ˮ������������ˡ���ͷ��������ÿһ�����ۼ�¼��ˮ�����ƣ����غ����۵��������������������ϸ��

�����ʽ
��һ����һ������ N(0<N��1000)����ʾ����N�γɹ��Ľ��ס������N�����ݣ�ÿ�б�ʾһ�ν��ף�
��ˮ������(Сд��ĸ��ɣ����Ȳ�����100)��ˮ������(Сд��ĸ��ɣ����Ȳ�����100)�ͽ��׵�ˮ����Ŀ(��������������1000)���.

�����ʽ
�������һ���Ű��ʽ��ȷ(������������)��ˮ�����������ϸ�������ϸ���������ˮ���Ĳ��ء����ƺ�������Ŀ����Ϣ��
ˮ���Ȱ����ط��࣬���ذ���ĸ˳�����У�ͬһ���ص�ˮ�����������������ư���ĸ˳������

��������
5
apple shandong 3
pineapple guangdong 1
sugarcane guangdong 1
pineapple guangdong 3
pineapple guangdong 1

�������
guangdong

   |----pineapple(5)

   |----sugarcane(1)

shandong

   |----apple(3)


*/
//map��������ʹ��+��άmap��ʹ��
#include<iostream> 
#include<map>
#include<string>
using namespace std;
//ע�������>>Ҫ��һ��Ȼ��������ʶ�𲻳��� 
map<string,map<string,int> > mp;
int main()
{
	string s1,s2;
	int n,d;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s1>>s2>>d;			//s1Ϊˮ����s2Ϊ�ص㣬dΪ���� 
		mp[s2][s1]+=d;
	}
	//���������
	for(map<string,map<string,int> >::iterator it=mp.begin();it!=mp.end();it++)
	{
		cout<<(it->first)<<endl;
		//ע��ڶ���ѭ�� 
		for(map<string,int>::iterator it2=(it->second.begin());it2!=(it->second.end());it2++)
		{
			cout<<"   "<<"|----"<<it2->first<<"("<<it2->second<<")"<<endl;
		}	
	} 
	return 0;
}
/*#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string,map<string,int> > s;
int main()
{
	int n,nmb;
	string name,form;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>name>>form>>nmb;
		s[form][name]+=nmb;
	}
	for(map<string,map<string,int> >::iterator it1=s.begin();it1!=s.end();it1++)
	{
		cout<<it1->first<<endl;
		for(map<string,int>::iterator it2=it1->second.begin();it2!=it1->second.end();it2++)
		{
			cout<<"   "<<"|----"<<it2->first<<"("<<it2->second<<")"<<endl;
		}
	}	
	return 0;
 } 
 */
 /*����
5
apple shandong 3
pineapple guangdong 1
sugarcane guangdong 1
pineapple guangdong 3
pineapple guangdong 1
*/
  
