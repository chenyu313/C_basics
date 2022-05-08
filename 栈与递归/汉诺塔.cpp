//汉诺塔
#include<iostream>
#include<stack>
using namespace std;
stack<int> S[3];
void move(int x,int y)
{
	int temp=S[x].top();
	S[x].pop();
	S[y].push(temp);
	cout<<x<<"-->"<<y<<endl;
}
void hanoi(int A,int B,int C,int n)		//将塔A的栈顶经过塔B移到搭C 
{
	if(n<=1)
	{
		move(A,C);
		return;
	}
	hanoi(A,C,B,n-1);
	move(A,C);
	hanoi(B,A,C,n-1); 
}
int main()
{
	int n;
	cin>>n;
	for(int i=n;i>0;i--)
		S[0].push(i);		//给第一个塔赋值 
	hanoi(0,1,2,n);
	while(!S[2].empty())
	{
		cout<<S[2].top()<<" ";
		S[2].pop();
	}
	return 0;
 } 
