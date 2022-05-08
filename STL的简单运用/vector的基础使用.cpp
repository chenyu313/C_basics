#include<iostream>
#include<vector>	//动态数组头文件
using namespace std;
vector<int> A;
int main()
{
	for(int i=1;i<=10;i++)
		A.push_back(i*i);
	for(int j=0;j<10;j++)
		cout<<A[j]<<" ";
	cout<<endl;
	return 0;
} 
