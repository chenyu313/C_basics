//开灯问题
/*有n盏灯，编号为1~n。第1个人把所有灯打开，第2个人按下所有编号为2的倍数的开关，第3个人按下所有编号为3 
的倍数的开关（其中关掉的灯将被打开，开着的灯将被关掉），以此类推。一共有k个人，问到最后哪些灯是
开着的
输入：
	输入n和k
输出：
	输出开着灯的编号 
*/ 
#include<iostream>
#include<string.h>	//用于初始化数组
using namespace std;
#define max 1010
int a[max];
int main()
{
	int n,k;
	memset(a,0,sizeof(a));		//初始化a数组 
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			if(j%i==0)
				a[j]=!a[j];		//这是我之前没想过可以这样用的 
		}
	}
	bool first=true;			//用于判断是否是第一个 
	for(int i=1;i<=n;i++){
		if(a[i]){
			if(first){
				first=false;
		}else{
			cout<<" ";			//除了第一个之外每个符合条件的灯前面输出空格 
		}
		cout<<i;
		}
	}
	cout<<endl;	
	return 0;
}
