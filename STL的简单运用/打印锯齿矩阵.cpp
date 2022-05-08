//打印锯齿矩阵
/* 
题目描述:锯齿矩阵是指每一行包含的元素个数不同的矩阵

输入格式：
(1)第一行输入n，m；n代表行数，m代表总的元素个数
(2)接下来的m行输入x和y(1<=x<=n,0<=10000<=y),表示在x末尾插入y

输出格式：
每一行换行输出即可

考点：动态数组 
 */
#include<iostream>
#include<vector>
using namespace std;
vector<int> A[10005];			//动态定义二维数组，行数已知，列数未知 
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		A[x].push_back(y);			//在x行末尾插入y 
	}
	for(int i=1;i<=n;i++)
	{	for(int j=0;j<A[i].size();j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	} 
	return 0;
} 
/*样例
3 6
1 3
1 5
2 6
3 4
1 2
2 1
*/ 
