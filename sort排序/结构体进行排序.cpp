/*以结构体中姓名排序*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//结构体
struct Student
{
	string name;
	int score;
	Student(){}		//结构体的基本构造函数
	Student(string n,int s):name(n),score(s){}	//初始化列表
};
//结构体排序
bool cmp(Student x,Student y)//以学生姓名排序
{
	return x.name<y.name;
}
int main()
{
	Student stu[3];
	for(int i=0;i<3;i++)
	{
		int s;
		string n;
		cin>>n>>s;
		stu[i]=Student(n,s);
	}
	sort(stu,stu+3,cmp);
	for(int j=0;j<3;j++)
	{
		cout<<stu[j].name<<" "<<stu[j].score<<endl;
	}
	return 0;
}