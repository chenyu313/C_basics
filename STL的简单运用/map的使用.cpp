//map的使用
#include<iostream>
#include<map>
#include<string>
#include<utility>			//pair库的头文件 
using namespace std; 
int main()
{
	map<string,int> dict;
	dict.insert(make_pair("xiaoyu",1));		//{"xiaoyu"->1},这种比较复杂一般不用 
	dict["xiaoxiang"]=1;					//{"xiaoyu"->1,"xiaoxiang"->1} 
	dict["xiaotian"]=2;						//{"xiaoyu"->1,"xiaoxiang"->1,"xiaotian"->2}
	for(map<string,int>::iterator it=dict.begin();it!=dict.end();it++)	//遍历 
	{
		//map内部也有自动排序功能，先拍first，若相同再比较second 
		cout<<it->first<<"->"<<it->second<<endl;
	}
	return 0;
}
