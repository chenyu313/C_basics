//全排列函数
/*
next_permutation(start,end);	求当前排列的下一个排列 
prev_permutation(start,end);	求当前排列的上一个排列
注意： 
1.返回bool型
2.使用前需要对排序数列按升序排列
3.next_permutation(start,end,cmp)可以自定义排序方式对cmp进行排序
4.需要引进<algorithm> 
*/ 
/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	char num[3]={'A','B','C'};
	do
	{
		cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<endl;
	}while(next_permutation(num,num+3));
	return 0;
}*/

//递归求解法
#include<iostream>
using namespace std;
//num表示数组
//n表示当前层数
//m表示数组长度 
void Perm(char *num,int n,int m)	//求解全排列 
{
	if(n==m)	//若当前层数到达m 
	{
		for(int i=0;i<m;i++)
		{
			cout<<num[i]<<" ";	
		} 
		cout<<endl;
	} 
	for(int j=n;j<m;j++)
	{
		swap(num[j],num[n]);	//交换
		Perm(num,n+1,m);
		//swap(num[j],num[n]);	//回溯 
	}
} 
int main()
{
	char num[3]={'A','B','C'};
	Perm(num,0,3);
	return 0;	
} 
