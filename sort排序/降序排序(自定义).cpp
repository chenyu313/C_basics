#include<stdio.h>
#include<algorithm>
#include<functional>
using namespace std;
bool cmp(int x,int y)//�Զ��庯������������
{
	return x>y;		 //�����С�=����
}
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	sort(arr,arr+10,cmp);
	for(int j=0;j<10;j++)
		printf("%d ",arr[j]);
	printf("\n");
	return 0;
}
/*1 3 5 2 7 4 8 6 9 10*/