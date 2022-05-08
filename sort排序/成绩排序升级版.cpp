/*成绩排序升级版 
学校考了语文，数学，英语，科学，现在要求表扬每门考试得分前四名和总分前四名
要求成绩相同时先表扬名字字典典序在前的

输入：
第一行为学生人数N
之后N行依次为每个学生的姓名和语文、数学、英语、科学这四门课的成绩(成绩大于0小于100) 
输出：
第一行为语文成绩要表扬的四名同学的姓名，中间用空格隔开
第二行为数学...
第三行为英语...
第四行为科学...
第五行为总分... 
*/
//排序+结构体 
#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
struct Student
{
	char name[105];
	int score[4];		//表示成绩:语文、数学、英语和科学 
}S[105];
//语文 
bool cmp1(Student a,Student b)
{
	if(a.score[0]!=b.score[0])	//若两人成绩不相等 
	{
		return a.score[0]>b.score[0];
	}
	else
	{
		return strcmp(a.name,b.name)<0;	//比较名字的字典序 
	}
} 
//数学
bool cmp2(Student a,Student b)
{
	if(a.score[1]!=b.score[1])	//若两人成绩不相等 
	{
		return a.score[1]>b.score[1];
	}
	else
	{
		return strcmp(a.name,b.name)<0;	//比较名字的字典序 
	}
}
//英语
bool cmp3(Student a,Student b)
{
	if(a.score[2]!=b.score[2])	//若两人成绩不相等 
	{
		return a.score[2]>b.score[2];
	}
	else
	{
		return strcmp(a.name,b.name)<0;	//比较名字的字典序 
	}
}
//科学
bool cmp4(Student a,Student b)
{
	if(a.score[3]!=b.score[3])	//若两人成绩不相等 
	{
		return a.score[3]>b.score[3];
	}
	else
	{
		return strcmp(a.name,b.name)<0;	//比较名字的字典序 
	}
}
//总分
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
//输出
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

 /*样例1 
 5
 Alice 99 98 97 96
 Bob 98 97 96 94
 Coy 94 94 95 96
 Dan 93 95 96 97
 Evan 0 94 95 95 
 */
