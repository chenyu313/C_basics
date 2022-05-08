//新游戏
/*某同学传娃娃，可以往左传或者往右传，当喊停时，手里拿着娃娃的人就是败者
1->2->3->1     1->3->2->1
输入格式：
		n,m(3<=n<=30,1<=m<=30)，表示一共有n个同事一起游戏，一共传m次娃娃
输出格式：
		输出一个整数表示有多少种传娃娃的方法*/
#include<iostream>
using namespace std;
int f[30][30];		//前面一个记录传了多少次，后面表示第几个同事； 
int main()
{
	int n,m;
	cin>>n>>m;
	f[0][1]=1;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			if(j==1)
			{
				f[i][j]=f[i-1][2]+f[i-1][n];	
			}
			else if(j==n)
			{
				f[i][j]=f[i-1][1]+f[i-1][n-1];
			}
			else
			{
				f[i][j]=f[i-1][j-1]+f[i-1][j+1];
			}
		}
	cout<<f[m][1]<<endl;
	return 0;
} 
/*样例
3 3

 */
