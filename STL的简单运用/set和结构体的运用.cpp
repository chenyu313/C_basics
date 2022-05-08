// set和结构体练习
/*存储一串二维坐标系上的集合(不含重复点),N代表点的个数，最后并输出*/
#include<iostream>
#include<set>
#include<string>
using namespace std;
//因set会自动排序,而结构体是自定义的,所以要定义一个重载运算符 
struct Node
{
	int x,y;
	bool operator<(const Node &rhs) const//重载小于号,其他的与sort一样用 
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
	set<Node> v;	//定义一个集合
	cin>>N;
	for(int i=0;i<N;i++)
	{
		Node P;
		cin>>P.x>>P.y;
		v.insert(P);	//将点插入集合 
	} 
	for(set<Node>::iterator it=v.begin();it!=v.end();it++)
		cout<<"("<<(*it).x<<","<<(*it).y<<")"<<endl;
	return 0;
}
/*样例
6
5 6
1 2
2 1
3 4
1 2
1 1
*/ 
 
