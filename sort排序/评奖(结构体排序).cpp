/*班级有N名同学，期末考了数学、语文、英语、地理。班主任要选三名总分最高的
请输出他们的名字*/
#include<iostream>
#include<algorithm>
#include<string>
//#include<functional>
using namespace std;
//学生结构体
struct Student
{
	string name;
	int score[4];
};
//结构体排序
bool cmp(Student x,Student y)
{
	int sum1,sum2;
	sum1=x.score[0]+x.score[1]+x.score[2]+x.score[3];
	sum2=y.score[0]+y.score[1]+y.score[2]+y.score[3];
	return sum1>sum2;
}
int main()
{
	int N;
	Student stu[45];
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		cin>>stu[i].name;
		for(int j=0;j<4;j++)
			cin>>stu[i].score[j];
	}
	sort(stu,stu+N,cmp);
	for(int k=0;k<3;k++)
		cout<<stu[k].name<<" ";
	cout<<endl;
	return 0;
}
/*4
jing 98 90 87 74
ming 96 92 85 97
jun 95 78 6 91
hong 95 100 85 78
*/