//쳲���������
/*��f(n)=af(n-1)+bf(n-2)
�����ʽ��
		����4��������n(1<=n<=100),a(1<=a<=10),b(1<=b<=10),p(1<=p<=2000)
�����ʽ:
		���f��pȡģ��ֵ*/
#include<iostream>
using namespace std;
int n,a,b,p;
int f(int i,int x,int y,int z)
{
	if(i==1||i==2)
		return (1%z);
	else
	{
		return (x*f(i-1,x,y,z)%z+y*f(i-2,x,y,z)%z);
	}
}
int main()
{
	int t;
	cin>>n>>a>>b>>p;
	t=f(n,a,b,p);
	cout<<t<<endl;
	return 0;
 } 
