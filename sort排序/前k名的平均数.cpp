#include<stdio.h>
#include<algorithm>
#include<functional>
using namespace std;
int score[35];
int main()
{
	int n,k,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&score[i]);
	scanf("%d",&k);
	sort(score,score+n,greater<int>());
	for(int j=0;j<k;j++)
		sum+=score[j];
	printf("%.2f\n",1.0*sum/k);
	return 0;
}
/*10
93 85 77 68 59 100 43 94 75 82
4
*/
//93.00