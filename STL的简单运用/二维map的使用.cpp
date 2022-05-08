//二维map的使用
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	map<int,map<string,int> > info;		//第一个整型表示的是班级，第二个表示的是这个人名的个数
	int N;								//班级个数 
	cin>>N;
	for(int i=0;i<N;i++)
	{
		int class_id;
		string name;
		cin>>class_id>>name;
		info[class_id][name]++;			//人名个数自增，考虑同班同名 
	} 
	for(map<int,map<string,int> >::iterator it1=info.begin();it1!=info.end();it1++)
	{
		for(map<string,int>::iterator it2=it1->second.begin();it2!=it1->second.end();it2++)
		{
			cout<<"class:"<<it1->first<<" "<<"name:"<<it2->first<<" "<<"numble:"<<it2->second<<endl;
		}
	}
	return 0;
} 
/*样例
6
1 chenyu
2 chenyu
1 chenyu
2 xiaoyu
3 xixixix
2 xixixix
*/ 
