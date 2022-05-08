#include<stdio.h>
#include<algorithm>
#include<functional>
using namespace std;
int A[105];
bool cmp(int x,int y)
{
	if(x%3!=y%3)
		return x%3<y%3;
	else
		return x<y;
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	sort(A,A+N,cmp);
	for(int j=0;j<N;j++)
		printf("%d ",A[j]);
	printf("\n");
	return 0;
}
/*9
1 2 3 4 5 6 7 8 9*/