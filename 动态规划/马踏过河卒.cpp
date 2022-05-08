//��̤������
/*��A(0,0)��һ��������,��Ҫ�ߵ�Ŀ��B(n,m)��.���������߹��򣺿������»������ҡ�ͬʱ�������ϵ���һ����һ���Է�����
��Ҫ���䲻��ͨ���Է���Ŀ��Ƶ��ߵ�B*/
#include<iostream>
using namespace std;
int dir[8][2]={{1,2},{2,1},{1,-2},{-2,1},{-1,2},{2,-1},{-1,-2},{-2,-1}};
bool d[30][30];
long long dp[30][30];		//��ʾ���ߵ���B�ķ����� 
int main()
{
	int n,m,cx,cy;		//n,m�����̴�С��cx,cy�����λ��
	cin>>n>>m>>cx>>cy;
	d[cx][cy]=true;
	for(int k=0;k<8;k++)
	{
		int tx=cx+dir[k][0];
		int ty=cy+dir[k][1];
		if(0<=tx&&tx<=n&&0<=ty&&ty<=m)
		{
			d[tx][ty]=true;
		}
	}
	dp[0][0]=1;
	for(int i=0;i<=n;i++)
		for(int j=0;j<=m;j++)
		{
			if(!d[i][j])
			{
				if(i)
					dp[i][j]+=dp[i-1][j];	//B����߷�����������ĸ��Ӽ�������ߵĸ��� 
				if(j)
					dp[i][j]+=dp[i][j-1];
			}
		} 
	cout<<dp[n][m]<<endl; 
	return 0;
} 
