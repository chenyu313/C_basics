/*�����������棬ѧ����������������䵽10e5�����øղŵķ�����ʱ��ᳬ����
������Ҳ�Ÿ���*/
#include<stdio.h>
#include<algorithm>
using namespace std;
int Ball[1005];
int ans[1005];
struct Student
{
	int id;		//ѧ���ı��
	int high;	//�����ĸ߶� 
} stu[1005];
//�����Ƚ� 
bool cmp(Student a,Student b)
{
	return a.high<b.high;
}
int main()
{
	int m,n;	//ѧ�����������������
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
	{
		stu[i].id=i;
		scanf("%d",&stu[i].high);
	}
	for(int j=1;j<=n;j++)
		scanf("%d",&Ball[j]);
	sort(Ball+1,Ball+n+1);
	sort(stu+1,stu+m+1,cmp);
	int k=1,w=1;		//k��������w����ѧ�� 
	while(k<=n&&w<=m)
	{
		if(Ball[k]<=stu[w].high)
		{
			k++;
			ans[stu[w].id]++;
		}
		else
			w++;
	}
	for(int a=1;a<=m;a++)
		printf("%d\n",ans[a]);
		return 0;
}
//����1 
 /*
 5 6
 3 7 9 6 4
 1 2 3 4 5 6
 */
 //����2 
 /*
 10 10
 1 2 3 4 5 6 7 8 9 10
 3 1 4 6 7 8 9 9 4 12
 */
