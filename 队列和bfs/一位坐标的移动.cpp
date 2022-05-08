//һά������ƶ�(bfs)
/*��һ������Ϊn���������ϣ�С�����A���ƶ���B�㡣�����ƶ��������£�
(1)��ǰһ������������1
(2)���һ�����������1
(3)��Ծһ����ʹ����x2
С�������ƶ�������С��0������n��λ�ã����A��B���ٵĲ���
�����ʽ��
		��һ��������������n,A,B(0<=A,B<=n<=5000)
�����ʽ��
		������ٲ���*/
#include<iostream>
#include<queue>
using namespace std;
int n,A,B;
int dir[3]={1,2,3};
//ģ��� 
struct Node
{
	int o,step;//��ǰ��Ͳ��� 
	Node(int oo,int s)
	{
		o=oo;
		step=s;
	}
};
//�Ƿ��ڷ�Χ�� 
bool in(int x)
{
	return 0<x&&x<n;
}
//����������� 
int bfs(int x,int y)
{
	queue<Node> q;		
	q.push(Node(x,0));	//¼���һ�����λ�úͲ��� 
	while(!q.empty())	//���зǿ�ʱ 
	{
		Node now=q.front();		
		q.pop();					//���׳��� 
		for(int i=0;i<3;i++)
		{
			int tx;
			//ģ��λ����ǰ 
			if(i==0)			
			{
				tx=now.o+1;
				if(tx==y)
				{
					return now.step+1;
				}
				if(in(tx))
				{
					q.push(Node(tx,now.step+1));		//���������� 
				}
			}
			//ģ��λ����� 
			if(i==1)
			{
				tx=now.o-1;
				if(tx==y)
				{
					return now.step+1;
				}
				if(in(tx))
				{
					q.push(Node(tx,now.step+1));
				}
			}
			//ģ��λ����Ծ
			if(i==2)
			{
				tx=now.o*2;
				if(tx==y)
				{
					return now.step+1;
				}
				if(in(tx))
				{
					q.push(Node(tx,now.step+1));
				}
			}
		}
	}
	return -1; 
}
int main()
{
	cin>>n>>A>>B;
	cout<<bfs(A,B)<<endl;
	return 0;
 }
 /*����
 10 2 7
 */ 
