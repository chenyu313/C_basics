#include<stdio.h>
#include<string.h>
int Whatday(int y,int m,int d)
{
	int ans=0;
//��
	for(int i=1;i<y;i++)
	{
		if((i%100!=0&&i%4==0)||i%400==0)
		{
			ans+=366%7;//ȡһ���ڶ��������
			ans%=7;//���ۼӴ���7����ȡ��7
		}
		else
		{
			ans+=365%7;
			ans%=7;
		}
	}
//��
	for(int j=1;j<m;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
		{
			ans+=31%7;
			ans%=7;
		}
		else if(j==4||j==6||j==9||j==11)
		{
			ans+=30%7;
			ans%=7;
		}
		else if((y%100!=0&&y%4==0)||y%400==0)//����
		{
			ans+=29%7;
			ans%=7;
		}
		else
		{
			ans+=28%7;
			ans%=7;
		}
	}
	ans+=d-1;//�����1����Ϊ���鰴0��ʼ����������꣬�´�1��ʼһ��
	return ans%7;
}
char* weekday[7]={"Monday","Tuesday","Wednesday","Thusday","Friday","Saturday","Sunday"};//c�ж����ַ�������
int main()
{
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	printf("%s\n",weekday[Whatday(year,month,day)]);
	return 0;
}