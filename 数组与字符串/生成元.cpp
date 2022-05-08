//生成元
/*如果x加上x的各个数字之和得到y，就说x是y的生成元。给出n(1<=n<=100000),求最小生成元。
无解输出0。
输入：
	1
	216
输出：
	198
*/
//分析：如果一个一个枚举的话，时间不够，只能一次枚举存储后查表即可
#include<iostream>
#define max 100005
using namespace std;
int ans[max];
int main()
{
	int n,a;
	for(int i=1;i<max;i++){
		int x=0,t=i;
		x+=t;
		while(t){
			x+=(t%10);
			t/=10;
		}
		if(ans[x]==0||ans[x]>i){
			ans[x]=i;
		}
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cout<<ans[a]<<endl;
	}
	return 0;
}
 
