//A/B
/*Problem Description
要求(A/B)%9973，但由于A很大，我们只给出n(n=A%9973)(我们给定的A必能被B整除，且gcd(B,9973) = 1)。
 

Input
数据的第一行是一个T，表示有T组数据。
每组数据有两个数n(0 <= n < 9973)和B(1 <= B <= 10^9)。
 

Output
对应每组数据输出(A/B)%9973。

Sample Input
2 
1000 53 
87 123456789

Sample Output
7922 6060
*/
/*分析：
设A = k * 9973 + n  ,A/ B = C, C = P * 9973 + x,x即为我们所求的答案。
易知，A = k* 9973 + n =B * P * 9973 + B * x,化简后得k * 9973 = B * P * 9973 + B * x - n； 
因此(B * x - n)%9973 = 0(因为k是整数),n的值知道，B的值知道，又因为x的取值范围是0到9972； 
因此枚举x的值即可，满足条件的就是答案。
*/
//数论 
#include<iostream>
using namespace std;
int main()
{
	int T,n,B;
	cin>>T;
	while(T--)
	{
		cin>>n>>B;
		for(int i=1;i<9973;i++)
		{
			if(((B%9973)*i%9973-n)%9973==0)
			{
				cout<<i<<endl;
				break;
			}	
		}	
	} 
	return 0;
}
