#include<stdio.h>
char A[150][150];
int main()
{
	int x=0,y=2,n,t;
	scanf("%d",&n);
	t=n;
	for(int q=0;q<(4*n+5);q++)
		for(int p=0;p<(4*n+5);p++)
			A[q][p]='.';
	do
	{
	for(int i=2,j=0;i<(4*t+3);i++,j++)
	{
		A[x][y+j]=A[y+j][x]=A[4*n+5-1-x][y+j]=A[y+j][4*n+5-1-x]='$';//±ßÔµ
	}
	A[x+1][y]=A[x+2][y]=A[y][x+1]='$';//×óÉÏ½Ç
	A[x+1][4*n+5-1-y]=A[x+2][4*n+5-1-y]=A[y][4*n+5-1-x-1]='$';//ÓÒÉÏ½Ç
	A[4*n+5-1-x-1][y]=A[4*n+5-1-x-2][y]=A[4*n+5-1-y][x+1]='$';//×óÏÂ½Ç
	A[4*n+5-1-x-1][4*n+5-1-y]=A[4*n+5-1-x-2][4*n+5-1-y]=A[4*n+5-1-x-2][4*n+5-1-x-1]='$';//ÓÒÏÂ½Ç
	x+=2;
	y+=2;
	}while(t--);
	for(int j=0;j<(4*n+5);j++)
	{
		for(int k=0;k<(4*n+5);k++)
			printf("%c",A[j][k]);
		printf("\n");
	}
	return 0;
}