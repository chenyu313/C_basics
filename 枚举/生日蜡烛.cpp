/*
��������

ĳ����ĳ�꿪ʼÿ�궼�ٰ�һ������party������ÿ�ζ�Ҫ��Ϩ��������ͬ����������

��������������һ����Ϩ��236������

���ʣ����Ӷ����꿪ʼ������party�ģ�

����д����ʼ������party����������
ע�⣺���ύ��Ӧ����һ����������Ҫ��д�κζ�������ݻ�˵�������֡�
*/
#include<stdio.h>
bool Judge(int n)
{
	int sum=0;
	for(int i=n;sum<236;i++)
		sum+=i;
	if(sum==236)
		return true;
	else
		return false;
}
int main()
{
	for(int i=0;i<=200;i++)
	{
		if(Judge(i))
			printf("%d\n",i);
	} 
	return 0;	
} 
