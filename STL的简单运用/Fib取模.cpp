//Fibonacciȡģ
/*
���������� 
		Fibonacci���еĵ��ƹ�ʽΪ��Fn=Fn-1+Fn-2������F1=F2=1��
		��n�Ƚϴ�ʱ��FnҲ�ǳ�������������֪����Fn����10007�������Ƕ��١�
�����ʽ�� 
		�������һ������n��
�����ʽ�� 
		���һ�У�����һ����������ʾFn����10007�������� 
*/
#include<iostream>
using namespace std;
int Fib[1000005];
int main()
{
	int N,ans;
	cin>>N;
	Fib[1]=1,Fib[2]=1;
	for(int i=3;i<=N;i++)
	{
		Fib[i]=(Fib[i-1]+Fib[i-2])%10007;//��ȡ��ߴ棬��ֹ���	
	}
	cout<<Fib[N]<<endl;
	return 0;
} 
