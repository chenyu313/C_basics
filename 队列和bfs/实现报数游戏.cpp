//ʵ�ֱ�����Ϸ
/*һ����n���ˣ�����m���˳��У�ֱ�����һ���� 
�����ʽ��
		����n��m
�����ʽ��
		�������Ǹ���*/
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int> q;
	int n,m;
	cin>>n>>m;
	//��� 
	for(int i=1;i<=n;i++)
	{
		q.push(i);
	}
	int t=1;		//��������
	//��ʼ���� 
	while(q.size()>1)
	{
		int x=q.front();
		q.pop(); 
		if(t==m)
		{
			t=1;
		} 
		else
		{
			q.push(x);
			t++;
		}
	} 
	cout<<q.front()<<endl;
	return 0;
 } 
