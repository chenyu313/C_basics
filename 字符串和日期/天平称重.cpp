//天平称重
/*
题目：
用天平称重时，我们希望用尽可能少的砝码组合称出尽可能多的重量。
如果只有5个砝码，重量分别是1，3，9，27，81
则它们可以组合称出1到121之间任意整数重量（砝码允许放在左右两个盘中）。

本题目要求编程实现：对用户给定的重量，给出砝码组合方案。
例如：
用户输入：
5
程序输出：
9-3-1
用户输入：
19
程序输出：
27-9+1
要求程序输出的组合总是大数在前小数在后。
可以假设用户的输入的数字符合范围1~121。
*/ 
//思路1：dfs
/*#include<iostream>
#include<vector>
using namespace std;
int a[10005];
vector<int> v;	//用来装答案 
int n; 
//x表示a[i]的下标
//sum表示输入要求的数 
void dfs(int x,int sum)
{
	if(sum==n)
	{
		int len=v.size();
		for(int i=0;i<len;i++)
		{
			if(v[i]>0 && i!=0)
				cout<<"+";
			cout<<v[i];
		} 
		return;	
	}
	if(sum<0)	//不符合条件 
		return;
	if(x<0)		//没有更小的数再用时 
		return;
	//当恰好除尽
	dfs(x-1,sum);
	
	//当sum不够时
	v.push_back(a[x]);
	dfs(x-1,sum+a[x]);
	v.pop_back();	//回溯 
	
	//当sun太大时
	v.push_back(-a[x]);
	dfs(x-1,sum-a[x]); 
	v.pop_back();	//回溯 
}
int main()
{
	int m=0;
	cin>>n;
	a[0]=1;
	while(n>=a[m])
	{
		m++;
		a[m]=a[m-1]*3;
	}
	dfs(m,0);
	return 0;
}*/
//感觉速度还蛮快的

//思路2：进制转换
#include <iostream>
#include <cstdlib>
using namespace std;
int a[10] = {1,3,9,27,81};
const int maxn = 121;
//求3进制变种并输出显示 
void f(int n, int radix){
    int cur = 0;
    int res[10];
    //3进制转换变种 
    while(n > 0){
        int tmp = n % radix;
        if(tmp == 2){
            res[cur++] = -1;
            n = (n + 1) / radix;
        }
        else{
            res[cur++] = tmp;
            n /= radix;
        }
    }
    //输出显示  
    int i = cur - 1;
    while(res[i] == 0) --i; 
    cout<<a[i] * res[i];

    for(i = i - 1; i >= 0; --i){
        if(res[i] > 0){
            cout<<"+"<<a[i] * res[i];
        }
        if(res[i] < 0){
            cout<<a[i] *res[i];
        }
    }
    cout<<endl;
}

int main(){
    //打印了1到121所有情况
    for(int i = 1; i <= maxn; ++i){
        cout<<i<<":";
        f(i,3);      
    }   
    return 0;
}  
