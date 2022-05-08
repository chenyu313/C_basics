//Georgia and Bob
/*
乔治亚和鲍勃决定玩一个自己发明的游戏。他们在纸上画一行网格，从左到右按1、2、3……对网格进行编号，
并在不同的网格上放置N个棋子，如下图所示：

乔治亚和鲍勃轮流移动棋子。每当一个玩家选择一个棋子，并将它移到左边，而不越过任何其他棋子或
越过左边的边缘。棋手可以自由选择棋子移动的步数，约束条件是棋子至少移动一步，
一个格最多只能包含一个棋子。不能移动的玩家将输掉比赛。

自从“女士优先”之后，乔治亚总是第一名。假设乔治亚和鲍勃在比赛中都尽了最大的努力，也就是说，
如果他们中的一个知道赢这场比赛的方法，他或她就能做到。

考虑到n个棋子的初始位置，你能预测谁最终会赢得这场比赛吗？

Sample Input
2
3
1 2 3
8
1 5 6 7 9 12 14 17

Sample Output
Bob will win
Georgia will win
*/
//阶梯Nim博弈
//尼姆堆问题的变种，双方不断地去走，当有一方不能走时，另一方获胜，主要用异或来解题 
#include<iostream>
#include<algorithm>
using namespace std;
int a[1005];
int main()
{
	int T,n,sum;
	cin>>T;
	while(T--)
	{
		cin>>n;
		sum=0;		//初始化 
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n+1);		//排序，输入可能是乱序的
		for(int j=1;j<=n;j+=2)
		{
			sum^=a[n-j+1]-a[n-j]-1;	
		}
		if(!sum)
			cout<<"Bob will win"<<endl;
		else
			cout<<"Georgia will win"<<endl;
	}
	return 0;
}
//说实话，还是有些弄不懂这内部是咋操作的，但以后遇到这种题好歹知道用Nim堆(异或)来解 
