//堆积木(动态数组)
/*蒜头君有n块积木，编号分别为1到n。一开始，蒜头把第i块积木放在位置i。
蒜头君进行m次操作，每次操作，蒜头把位置b上的积木整体移动到位置a上面。
比如1位置的积木是1，2位置的积木是2，那么把位置2的积木移动到位置1后，位置1上的积木从下到上依次为1,2。

输入格式
第一行输入2个整数 n,m(1≤n≤10000,0≤m≤10000)。
接下来m行，每行输入2个整数 a,b(1≤a,b≤n)，如果a，b相等则本次不需要移动。

输出格式
输出n行，第i行输出位置i从下到上的积木编号，如果该行没有积木输出一行空行。

样例输入1

2 2
1 2
1 2
样例输出1

1 2
 
样例输入2

4 4
3 1
4 3
2 4
2 2
样例输出2

 
2 4 3 1
*/
//分析：因为每个数组的长度未定，所以可以用动态数组来装
#include<iostream>
#include<vector>
using namespace std;
vector<int> v[10005];
int main()
{
	int n,m;
	int a,b;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		v[i].push_back(i);
	}
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		if(a==b)
			continue;
		for(int j=0;j<v[b].size();j++)
		{
			v[a].push_back(v[b][j]);
		}
		vector<int>().swap(v[b]);
	}
	for(int i=1;i<=n;i++)
	{
		if(v[i].empty())
		{
			cout<<endl;	
		}else
		{
			for(int j=0;j<v[i].size();j++)
			{
				if(j!=v[i].size()-1)
				{
					cout<<v[i][j]<<" ";		
				}
				else
				{
					cout<<v[i][j];
				}
			}
		}	
	} 
	return 0;	
} 

 /*样例1
2 2
1 2
1 2

样例2
4 4
3 1
4 3
2 4
2 2
*/  
