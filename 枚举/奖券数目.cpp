/*ĳ�齱������5λ����Ҫ�����в���4�ĺ��룬����n��m�����Է��ж�����*/
#include<stdio.h>
bool Judge(int n)
{
	int a=n/10000,b=n/1000%10,c=n/100%10,d=n/10%10,e=n%10;
	if(a==4||b==4||c==4||d==4||e==4)
		return false;
	else
		return true;
}
int main()
{
	int n,m,sum=0;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++)
	{
		if(Judge(i))
			sum++;
	}
	printf("%d\n",sum);
	return 0;
} 
