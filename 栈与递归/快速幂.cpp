//������
/*x^y��������ȡģ*/
#include<iostream>
using namespace std;
long long f(int x,int y,int p)
{
	if(y==0)
		return 1%p;
	else if(y%2==0)
	{
		long long temp=f(x,y/2,p);			//��ֹ�ظ����� 
		return temp*temp%p;
	}
	else
	{
		long long temp=f(x,y/2,p);
		return temp*temp%p*x%p;			//��ȡ����㣬��ֹը�� 
	}
}
int main()
{
	int x,y,p,n;
	cin>>n;
	cin>>x>>y>>p;
	while(n--)
	{
		cout<<f(x,y,p)<<endl;
	}
	return 0;
 } 
