//�ؼ�
/*ĳͬѧҪ�ؼң���֪�������½�(1,1)�����������Ͻ�(n,n)����û��һ�����ӻỨ��һЩ������������ֻ��
���ϻ����ң���������֪���ؼ����ٻ��ѵ�����*/
#include<iostream>
#include<algorithm>
using namespace std;
int a[100][100];		//��ʾ��ͼ 
int n;
int d[100][100];		//��ʾ���һ��ѵ����� 
int main()
{
	d[1][1]=0; 
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int x=1;x<=n;x++)
		for(int y=1;y<=n;y++)
		{
			if(x==1&&y==1)
				continue;
			else if(x==1)
			{
				d[x][y]=d[x][y-1]+a[x][y];
			}
			else if(y==1)
			{
				d[x][y]=d[x-1][y]+a[x][y];
			}
			else
			{

				d[x][y]=(d[x-1][y]>d[x][y-1]?d[x][y-1]:d[x-1][y])+a[x][y];
			}
		}
	cout<<d[n][n]<<endl; 
	return 0;
} 
/*����
3
0 3 4
6 2 5
5 4 3
*/ 
