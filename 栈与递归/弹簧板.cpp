//���ɰ�
/*һ��С��������һ�������ĵ��ɰ��ϣ�С�����һ�����ɰ��ϵ�������n������
�ĵ��ɰ壬��i�����ɰ���ѡ��a[i]��b[i]�����롣
�����ʽ��
		��һ������n����n�����ɰ�
		�ڶ�������n�����֣���ʾa[i]
		����������n�����֣���ʾb[i]
�����ʽ:
		���һ����������ʾС����С����Ĵ���
*/
#include<iostream>
#include<algorithm>
using namespace std;
int n;
int a[205],b[205];
int ans[205];
bool vis[205];
int f(int x)
{
	if(x>=n)
		return 0;
	if(vis[x])				//�ж��Ƿ���ʹ� 
		return ans[x];		//��ֹ�ظ����� 
	vis[x]=true;
	return min(f(x+a[x]),f(x+b[x]))+1;
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cout<<f(0)<<endl;
	return 0;
} 
/*����
5
2 2 3 1 2
1 2 3 4 1
*/ 
