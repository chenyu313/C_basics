//模运算规律
/*
if 
	a%m==b%m  and  c%m==d%m   //a与b同余，c与d同余 
则
	(a+b)%m==(c+d)%m
	(a*b)%m==(c*d)%m 
	
求解模线性方程(线性同余方程)
用拓展欧几里得算法求解模线性方程：
同余方程a*x%n==b%n	(a*x==b(mod n))对于未知数x有解，当且仅当b是gcd(a,n)的倍数。 
且当方程有解时，方程有gcd(a,n)个解。 
求解方程a*x==b(mod n) 相当于求解方程 a*x+n*y=b -->a*x的n的y倍等于b(x,y为整数)
相当于：a*x=n*y1+余数
		b=n*y2+余数 
-->a*x+n*y=b

青蛙的约会 
两只青蛙在网上相识了，它们聊得很开心，于是觉得很有必要见一面。它们很高兴地发现它们住在同一条纬度线上，
于是它们约定各自朝西跳，直到碰面为止。可是它们出发之前忘记了一件很重要的事情，既没有问清楚对方的特征，
也没有约定见面的具体位置。不过青蛙们都是很乐观的，它们觉得只要一直朝着某个方向跳下去，总能碰到对方的。
但是除非这两只青蛙在同一时间跳到同一点上，不然是永远都不可能碰面的。为了帮助这两只乐观的青蛙，
你被要求写一个程序来判断这两只青蛙是否能够碰面，会在什么时候碰面。 
我们把这两只青蛙分别叫做青蛙A和青蛙B，并且规定纬度线上东经0度处为原点，由东往西为正方向，单位长度1米，
这样我们就得到了一条首尾相接的数轴。设青蛙A的出发点坐标是x，青蛙B的出发点坐标是y。青蛙A一次能跳m米，
青蛙B一次能跳n米，两只青蛙跳一次所花费的时间相同。纬度线总长L米。现在要你求出它们跳了几次以后才会碰面。 
Input

输入只包括一行5个整数x，y，m，n，L，其中x≠y < 2000000000，0 < m、n < 2000000000，0 < L < 2100000000。
Output

输出碰面所需要的跳跃次数，如果永远不可能碰面则输出一行"Impossible"
Sample Input

1 2 3 4 5
Sample Output

4 
*/
//分析：(x+k*m)%L=(y+k*n)%L		--->求k
//方法1：暴力解法 
/*#include<iostream>
using namespace std;
int x,y,m,n,L;
int main()
{
	cin>>x>>y>>m>>n>>L;
	bool f=false;
	for(long long k=0;k<=2000000000;k++)
	{
		if((x+k*m)%L==(y+k*n)%L)
		{
			cout<<k<<endl;
			f=true;
			break;	
		}	
	} 
	if(!f)
		cout<<"Impossible"<<endl;
	return 0;	
} */
//方法2：拓展欧几里得算法-->(m-n)*k+L*t=y-x--->相当于ax+by=m-->k与t未知，求解线性方程
#include<iostream>
#include<math.h>
using namespace std;
//拓展欧几里得算法求解x y
int ex_gcd(int a,int b,int &x,int &y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return a;
	}
	int ans=ex_gcd(b,a%b,x,y);
	int t=x;
	x=y;
	y=t-a/b*x;
	return ans;
}
//判断c是否可解
int cal(int a,int b,int c)
{
    int x, y;
    int gcd = ex_gcd(a, b, x, y);
    if(c % gcd)
    {
        return -1;
    }
    x *= c / gcd;
    b /= gcd;
    int ans = (x % b + b) % b;
    return ans;
}
int main()
{
	int x,y,m,n,L;
	cin>>x>>y>>m>>n>>L;
	int ans=cal(m-n,L,x-y);
	if(ans==-1)
		cout<<"Impossible"<<endl;
	else
		cout<<abs(ans)<<endl;
	return 0;
}

