//��άmap��ʹ��
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	map<int,map<string,int> > info;		//��һ�����ͱ�ʾ���ǰ༶���ڶ�����ʾ������������ĸ���
	int N;								//�༶���� 
	cin>>N;
	for(int i=0;i<N;i++)
	{
		int class_id;
		string name;
		cin>>class_id>>name;
		info[class_id][name]++;			//������������������ͬ��ͬ�� 
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
/*����
6
1 chenyu
2 chenyu
1 chenyu
2 xiaoyu
3 xixixix
2 xixixix
*/ 
