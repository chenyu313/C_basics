//������
/*ĳ������һ�����ӣ�����֪����������ÿ���һ�����ӻ����һ�������˵�n�컹ʣ
1����������һ�����˶��ٸ�����*/
#include<iostream>
using namespace std;
int n;
int f(int x)
{
	if(x==n)
		return 1;
	else
	{
		return 2*f(x+1)+2;
	}
}
int main()
{
	cin>>n;
	cout<<f(1)<<endl;
	return 0;
} 
