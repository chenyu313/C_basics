/*�Խṹ������������*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//�ṹ��
struct Student
{
	string name;
	int score;
	Student(){}		//�ṹ��Ļ������캯��
	Student(string n,int s):name(n),score(s){}	//��ʼ���б�
};
//�ṹ������
bool cmp(Student x,Student y)//��ѧ����������
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