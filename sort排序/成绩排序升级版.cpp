/*�ɼ����������� 
ѧУ�������ģ���ѧ��Ӣ���ѧ������Ҫ�����ÿ�ſ��Ե÷�ǰ�������ܷ�ǰ����
Ҫ��ɼ���ͬʱ�ȱ��������ֵ������ǰ��

���룺
��һ��Ϊѧ������N
֮��N������Ϊÿ��ѧ�������������ġ���ѧ��Ӣ���ѧ�����ſεĳɼ�(�ɼ�����0С��100) 
�����
��һ��Ϊ���ĳɼ�Ҫ���������ͬѧ���������м��ÿո����
�ڶ���Ϊ��ѧ...
������ΪӢ��...
������Ϊ��ѧ...
������Ϊ�ܷ�... 
*/
//����+�ṹ�� 
#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
struct Student
{
	char name[105];
	int score[4];		//��ʾ�ɼ�:���ġ���ѧ��Ӣ��Ϳ�ѧ 
}S[105];
//���� 
bool cmp1(Student a,Student b)
{
	if(a.score[0]!=b.score[0])	//�����˳ɼ������ 
	{
		return a.score[0]>b.score[0];
	}
	else
	{
		return strcmp(a.name,b.name)<0;	//�Ƚ����ֵ��ֵ��� 
	}
} 
//��ѧ
bool cmp2(Student a,Student b)
{
	if(a.score[1]!=b.score[1])	//�����˳ɼ������ 
	{
		return a.score[1]>b.score[1];
	}
	else
	{
		return strcmp(a.name,b.name)<0;	//�Ƚ����ֵ��ֵ��� 
	}
}
//Ӣ��
bool cmp3(Student a,Student b)
{
	if(a.score[2]!=b.score[2])	//�����˳ɼ������ 
	{
		return a.score[2]>b.score[2];
	}
	else
	{
		return strcmp(a.name,b.name)<0;	//�Ƚ����ֵ��ֵ��� 
	}
}
//��ѧ
bool cmp4(Student a,Student b)
{
	if(a.score[3]!=b.score[3])	//�����˳ɼ������ 
	{
		return a.score[3]>b.score[3];
	}
	else
	{
		return strcmp(a.name,b.name)<0;	//�Ƚ����ֵ��ֵ��� 
	}
}
//�ܷ�
bool cmp5(Student a,Student b)
{
	int sum1,sum2;
	sum1=0;
	sum2=0;
	for(int i=0;i<4;i++)
	{
		sum1+=a.score[i];
	}
	for(int j=0;j<4;j++)
	{
		sum2+=b.score[j];
	}
	if(sum1!=sum2)
	{
		return sum1>sum2;
	}
	else
	{
		return strcmp(a.name,b.name)<0;
	}
}
//���
void print()
{
	for(int i=0;i<4;i++)
	{
		if(i!=3)
		{
			printf("%s ",S[i].name);	
		}else
		{
			printf("%s\n",S[i].name);	
		}	
	}	
} 
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",&S[i].name);
		for(int j=0;j<4;j++)
		{
			scanf("%d",&S[i].score[j]);	
		}	
	} 
	sort(S,S+n,cmp1); 
	print();
	sort(S,S+n,cmp2); 
	print();
	sort(S,S+n,cmp3); 
	print();
	sort(S,S+n,cmp4); 
	print();
	sort(S,S+n,cmp5); 
	print();
	return 0;	
} 

 /*����1 
 5
 Alice 99 98 97 96
 Bob 98 97 96 94
 Coy 94 94 95 96
 Dan 93 95 96 97
 Evan 0 94 95 95 
 */
