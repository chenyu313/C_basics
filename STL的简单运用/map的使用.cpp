//map��ʹ��
#include<iostream>
#include<map>
#include<string>
#include<utility>			//pair���ͷ�ļ� 
using namespace std; 
int main()
{
	map<string,int> dict;
	dict.insert(make_pair("xiaoyu",1));		//{"xiaoyu"->1},���ֱȽϸ���һ�㲻�� 
	dict["xiaoxiang"]=1;					//{"xiaoyu"->1,"xiaoxiang"->1} 
	dict["xiaotian"]=2;						//{"xiaoyu"->1,"xiaoxiang"->1,"xiaotian"->2}
	for(map<string,int>::iterator it=dict.begin();it!=dict.end();it++)	//���� 
	{
		//map�ڲ�Ҳ���Զ������ܣ�����first������ͬ�ٱȽ�second 
		cout<<it->first<<"->"<<it->second<<endl;
	}
	return 0;
}
