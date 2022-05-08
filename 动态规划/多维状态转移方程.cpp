//¶àÎ¬×´Ì¬×ªÒÆ
#include<iostream>
using namespace std;
int inf=1000000;
int f[100][100][100];
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	for(int i=0;i<=x;i++)
		for(int j=0;j<=y;j++)
			for(int k=0;k<=z;k++)
				cin>>f[i][j][k];
	
	for(int a=0;a<=x;a++)
		for(int b=0;b<=y;b++)
			for(int c=0;c<=z;c++)
			{
				int mi=inf;
				if(a!=0)
				{
					mi=min(f[a-1][b][c],mi);
				}
				if(b!=0)
				{
					mi=min(f[a][b-1][c],mi);
				}
				if(c!=0)
				{
					mi=min(f[a][b][c-1],mi);
				}
				if(mi!=inf)
				{
					f[a][b][c]+=mi;
				}
			} 
	cout<<f[x][y][z]<<endl;
	return 0;
} 
/*ÑùÀý
2 2 2
1 2 3
4 5 6
7 8 9
1 2 3
4 5 6
7 8 9
1 2 3
4 5 6
7 8 9
*/ 
