//计数
/*给定n个整数，求里面出现次数最多的数
输入格式：
		第一行输入一个整数n(1<=n<=100000),接下来输入n个整数
输出格式：
		输出出现次数最多的那个数,并输出出现的次数 (若有出现次数相同的输出值较大的那个) 
*/
#include<iostream>
#include<map>
#include<algorithm> 
using namespace std;
map<int,int> ans;
int a[100005]; 
int main()
{
	int n,b,max=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ans[a[i]]++;
	}
	sort(a,a+n);
	for(int j=0;j<n;j++)
	{
		if(max<=ans[a[j]])
		{
			max=ans[a[j]];
			b=j;
		}
	}
	cout<<a[b]<<" "<<max<<endl;
	return 0;
 } 
 /*样例
10
10 10 27 4 9 9 3 1 2 6
*/ 
