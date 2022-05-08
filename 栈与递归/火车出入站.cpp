//�𳵳���ջ
//���� n ���������� a ��һ��ջ��n ��ֵ����ջ˳��Ϊ 1,2...n���жϳ�ջ˳���Ƿ���������� a��(�жϳ�ջ˳���Ƿ���ȷ)
//ջ���⣺stack 
/*
�������룺
5
1 3 2 5 4
���������
legal

�������룺
5
1 5 3 2 4
���������
illegal 
*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
stack<int> s; 
int main()
{
	int n;
	cin>>n; 
	vector<int> arr(n);
	for(int i=0;i<n;i++)		//��������ĳ�ջ˳�򣬵�ʱ�������Աȵ� 
	{
		cin>>arr[i];
	}
	bool f=true;	//�����г�ջ˳���Ƿ�Ϸ�
	int cur=1;		//����
	for(int j=0;j<n;j++)
	{
		while((s.empty()||s.top()!=arr[j]) && cur<=n)	//��ջΪ��ʱorջ��Ԫ�ز�ƥ�䣬��ѹջ 
		{
			s.push(cur);
			cur++; 
		}
		if(s.empty() || s.top()!=arr[j])	//���ѹջ�󻹲�ƥ��Ļ�orջΪ�գ�����Զ϶������ջ˳��Ϊ�����
		{
			f=false;
			break; 
		}
		else
		{
			s.pop();		//����ͳ�ջ	
		}	
	} 
	if(f)
	{
		cout<<"legal"<<endl;	
	} else
	{
		cout<<"illegal"<<endl;
	}
	return 0;
}

/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];			//��ջ˳�� 
	int f=1;
	int cur=1;
	stack<int> s;
	for(int j=0;j<n;j++)
	{
		while((s.empty() || s.top()!=a[j]) && cur<=n)		//��ջ��Ԫ�ز�ƥ��ʱ��ջ�� 
		{
			s.push(cur);	//ѹջ 
			cur++;
		}
	
		if(s.empty()||s.top()!=a[j])
		{
			f=0;
			break;
		}
		else
		{
			s.pop();
		}
	}
	
	if(f)
		cout<<"legal"<<endl;
	else
		cout<<"illegal"<<endl;
	return 0;
 }*/ 
