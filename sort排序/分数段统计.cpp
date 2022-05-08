/*把N名同学的成绩放在A数组中；把成绩为100的放在B[1]中，把90~99的放在B[2]...60分以下
放在B[6]中*/
#include<stdio.h>
#include<algorithm>
#include<functional>
using namespace std;
int A[35]={-1},B[10];
int main()
{
	int N,k=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	sort(A,A+N,greater<int>());//降序排序
	while(A[k]==100)
	{
		B[1]++;
		k++;
	}
	while(A[k]>=90)
	{
		B[2]++;
		k++;
	}
	while(A[k]>=80)
	{
		B[3]++;
		k++;
	}
	while(A[k]>=70)
	{
		B[4]++;
		k++;
	}
	while(A[k]>=60)
	{
		B[5]++;
		k++;
	}
	while(A[k]>=0&&k<N)
	{
		B[6]++;
		k++;
	}
	for(int x=0;x<N;x++)
		printf("%d\n",A[x]);
	for(int j=1;j<=6;j++)
		printf("%d ",B[j]);
	printf("\n");
	return 0;
}
/*10
93 85 77 68 59 100 43 94 75 82
*/