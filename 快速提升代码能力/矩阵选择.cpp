/*n*m的整数矩阵，顺时针90度输出*/
#include<stdio.h>
int A[205][205];
int B[205][205]; 
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			scanf("%d",&A[i][j]);
		}
	for(int b=0;b<m;b++)
		for(int x=n-1,y=0;x>=0;x--,y++)
		{
			B[b][y]=A[x][b];
		}
	for(int q=0;q<m;q++)
		for(int p=0;p<n;p++)
		{
			if(p<n-1)
				printf("%d ",B[q][p]);
			else
				printf("%d\n",B[q][p]);
		}
	return 0;	
 } 
 /*样例1
 3 4
 -1 3 6 3
 7 7 9 1
 10 3 4 6
 */ 
