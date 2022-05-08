/*机器人
蒜头君收到了一份礼物，是一个最新版的机器人。这个机器人有 4 种指令：

forward x，前进 x 米。
back x，先向后转，然后前进 x 米。
left x，先向左转，然后前进 x 米。
right x，先向右转，然后前进 x 米。
现在把机器人放在坐标轴原点，起始朝向为 x轴正方向。经过一系列指令以后，你能告诉蒜头君机器人的坐标位置吗。
坐标轴上一个单位长度表示 1米。

输入格式
第一行输入一个整数 n(1 <= n <=100)示指令的个数。

接下里 n 行，每行输入形如上面的指令，其中 -1000 <=x <=1000

输出格式
输出两个整数 x,y 表示机器人最后坐标。用空格隔开。

样例输入
10
back -9
left 3
left 8
back 15
right 10
right -7
right -3
left 11
right 17
left 3

样例输出
9 -7
*/
//以我一开始的思路的话，是准备一个变量记录我当前的状态，然后根据当前不同的状态去分不同的情况

//而下面的思路则是利用dx与dy数组存放方向，然后根据每一次的变换改变方向(即修正方向，无论是以x轴的正半轴还是其他轴
//它始终将方向修正后行走)
#include<iostream>
using namespace std;
//上左下右，逆时针 
int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};
char op[15]; 
int main()
{
	int n,x,d,nowx,nowy;
	nowx=0;
	nowy=0;
	d=3;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>op>>x;
		if(op[0]=='b')	//这是以x正半轴为基础，做出方向修正 
		{
			d=(d+2)%4;	//x轴正半轴向后退则是向左走 
		}
		else if(op[0]=='l')
		{
			d=(d+3)%4;	
		} 
		else if(op[0]=='r')
		{
			d=(d+1)%4;
		}
		nowx+=dx[d]*x;
		nowy+=dy[d]*x;
	}
	cout<<nowx<<" "<<nowy<<endl;
	return 0;	
} 
/*样例1
10
back -9
left 3
left 8
back 15
right 10
right -7
right -3
left 11
right 17
left 3
*/
//该方法可以通用与方向类问题，像那种当前方向不是固定的题 
