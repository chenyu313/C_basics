//基础练习 阶乘计算
/*问题描述
　　输入一个正整数n，输出n!的值。
　　其中n!=1*2*3*…*n。
算法描述
　　n!可能很大，而计算机能表示的整数范围有限，需要使用高精度计算的方法。使用一个数组A来表示一个大整数a，A[0]表示a的个位，A[1]表示a的十位，依次类推。
　　将a乘以一个整数k变为将数组A的每一个元素都乘以k，请注意处理相应的进位。
　　首先将a设为1，然后乘2，乘3，当乘到n时，即得到了n!的值。*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> num;
int main()
{
	int n,carry=0;		//carry用来进位 
	num.push_back(1);
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		carry=0;
		for(int j=0;j<num.size();j++)
		{
			int t=num[j];
			num[j]=(num[j]*i+carry)%10;
			carry=(t*i+carry)/10;
		} 
		if(carry>0)
		{
			while(carry>=1)
			{
				num.push_back(carry%10);
				carry/=10;
			}
		}
	}
	for(int k=num.size()-1;k>=0;k--)
		cout<<num[k];
	cout<<endl;
	return 0;
}
