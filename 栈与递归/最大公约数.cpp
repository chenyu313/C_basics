//最大公约数
#include<iostream>
using namespace std;
int f(int x,int y)
{
	if(y==0)
		return x;
	else
	{
		return f(y,x%y);
	}
}
int main()
{
	int n,x,y;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		cout<<f(x,y)<<endl;
	}
	return 0;
 } 
