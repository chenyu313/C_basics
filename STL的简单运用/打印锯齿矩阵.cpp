//��ӡ��ݾ���
/* 
��Ŀ����:��ݾ�����ָÿһ�а�����Ԫ�ظ�����ͬ�ľ���

�����ʽ��
(1)��һ������n��m��n����������m�����ܵ�Ԫ�ظ���
(2)��������m������x��y(1<=x<=n,0<=10000<=y),��ʾ��xĩβ����y

�����ʽ��
ÿһ�л����������

���㣺��̬���� 
 */
#include<iostream>
#include<vector>
using namespace std;
vector<int> A[10005];			//��̬�����ά���飬������֪������δ֪ 
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		A[x].push_back(y);			//��x��ĩβ����y 
	}
	for(int i=1;i<=n;i++)
	{	for(int j=0;j<A[i].size();j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	} 
	return 0;
} 
/*����
3 6
1 3
1 5
2 6
3 4
1 2
2 1
*/ 
