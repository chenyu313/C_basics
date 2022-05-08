//基础练习 高精度加法
/*算法描述
　　由于a和b都比较大，所以不能直接使用语言中的标准数据类型来存储。对于这种问题，一般使用数组来处理。
　　定义一个数组A，A[0]用于存储a的个位，A[1]用于存储a的十位，依此类推。同样可以用一个数组B来存储b。
　　计算c = a + b的时候，首先将A[0]与B[0]相加，如果有进位产生，则把进位（即和的十位数）存入r，把和的个位数存入C[0]，即C[0]等于(A[0]+B[0])%10。然后计算A[1]与B[1]相加，这时还应将低位进上来的值r也加起来，即C[1]应该是A[1]、B[1]和r三个数的和．如果又有进位产生，则仍可将新的进位存入到r中，和的个位存到C[1]中。依此类推，即可求出C的所有位。
　　最后将C输出即可。
输入格式
　　输入包括两行，第一行为一个非负整数a，第二行为一个非负整数b。两个整数都不超过100位，两数的最高位都不是0。
输出格式
　　输出一行，表示a + b的值。*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> A,B,C;
int main()
{
	int carry=0,m=0;
	string s1,s2;
	cin>>s1>>s2;
	if(s1.size()>s2.size())	//保证A数组里的数多 
	{
		for(int i=0;i<s1.size();i++)
			A.push_back(s1[i]-'0');
		for(int j=0;j<s2.size();j++)
			B.push_back(s2[j]-'0');
	}
	else
	{
		for(int i=0;i<s2.size();i++)
			A.push_back(s2[i]-'0');
		for(int j=0;j<s1.size();j++)
			B.push_back(s1[j]-'0');
	} 
	int min=A.size()<B.size()?A.size():B.size();
	int max=A.size()>B.size()?A.size():B.size();
	for(int i=max-1;i>=0;i--,min--)
	{
		if(min-1<0)
		{
			C.push_back((A[i]+carry)%10);
			carry=(A[i]+carry)/10;
		}
		else
		{
			C.push_back((A[i]+B[min-1]+carry)%10);
			carry=(A[i]+B[min-1]+carry)/10;
		}
	
		
	}
	while(carry)
		{
			C.push_back(carry);
			carry/=10;
		}
	for(int i=C.size()-1;i>=0;i--)
		cout<<C[i];
	cout<<endl;
	return 0;
}
