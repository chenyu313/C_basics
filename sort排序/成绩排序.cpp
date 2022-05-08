/*成绩排序，每个人有一个编号，请将每个人的成绩从高到低输出，再输出编号*/
#include<stdio.h>
#include<algorithm>
using namespace std;
struct student
{
	int num;	//编号 
	int sorce;	//成绩 
}stu[105];
bool cmp(student a,student b)
{
	return a.sorce>b.sorce;
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
		{
			stu[i].num=i;
			scanf("%d",&stu[i].sorce);
		}
	sort(stu+1,stu+N+1,cmp);
	for(int j=1;j<=N;j++)
		printf("%d ",stu[j].sorce);
	printf("\n");
	for(int k=1;k<=N;k++)
		printf("%d ",stu[k].num);
	printf("\n");
	return 0;
} 
/*5
97 68 51 85 73*/
