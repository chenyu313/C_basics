//������
/*
Ϊ�˹�����ң���ʦϣ�������������ڲ�����������һ�롣��ˣ���ʦ��Ҫȷ��һ���񽱷����ߣ����е÷��ڷ����߼����ϵ�ͬѧ���Ի񽱡�
��������������������£���ʦϣ���񽱷�����Խ��Խ�á�

��ͬѧ��ͨ��������Ƶķ���������������⣬ȷ���񽱷����ߺ��ܻ�������
�����ʽ
��һ��Ϊһ������  ��ʾ������������

�ڶ���Ϊ n ���������ֱ��ʾ n��1<=n<=100000����ͬѧ�μӵķ���,���еķ�����Ϊ0-100������������0��100�����м���һ���ո������


*/
//C���Խ� 
/*#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int num[100005];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	sort(num,num+n);
	int avg=n/2;
	printf("%d %d\n",num[avg-1],n-avg+1);
	return 0;
}*/
//C++�� 
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int num[1000005];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);
	int avg=n/2;
	cout<<num[avg-1]<<" "<<n-avg+1<<endl;
	return 0;
}
/*
7
76 71 42 4 27 27 20
*/
