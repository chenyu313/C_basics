//������
/*����һ����n��������һ��ֻ��0,1��ɵ�ʮ������m��Ҫ�������m���Ա�n����
�����ʽ:
		����һ������n
�����ʽ:
		���m����Ӧֵ��Ҫ��������ֳ���С��19λ����*/
#include<iostream>
using namespace std;
int n;
bool ok;
void dfs(long long sum,int cnt)
{
	if(cnt>=19)
	{
		return;
	}
	if(ok)
	{
		return;
	}
	if(sum%n==0)
	{
		ok=true;
		cout<<sum<<endl;
		return;
	}
	dfs(sum*10,cnt+1);		//�����0 
	dfs(sum*10+1,cnt+1);	//�����1 
}
int main()
{
	cin>>n;
	dfs(1,0);
	return 0;
 } 
