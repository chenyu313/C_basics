// set�ͽṹ����ϰ
/*�洢һ����ά����ϵ�ϵļ���(�����ظ���),N�����ĸ�����������*/
#include<iostream>
#include<set>
#include<string>
using namespace std;
//��set���Զ�����,���ṹ�����Զ����,����Ҫ����һ����������� 
struct Node
{
	int x,y;
	bool operator<(const Node &rhs) const//����С�ں�,��������sortһ���� 
	{
		if(x==rhs.x)
			return y<rhs.y;
		else
			return x<rhs.x;
	} 
};
int main()
{
	int N;
	set<Node> v;	//����һ������
	cin>>N;
	for(int i=0;i<N;i++)
	{
		Node P;
		cin>>P.x>>P.y;
		v.insert(P);	//������뼯�� 
	} 
	for(set<Node>::iterator it=v.begin();it!=v.end();it++)
		cout<<"("<<(*it).x<<","<<(*it).y<<")"<<endl;
	return 0;
}
/*����
6
5 6
1 2
2 1
3 4
1 2
1 1
*/ 
 
