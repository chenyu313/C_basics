/*���������
���룺
��һ������һ������N��ʾ����
�ڶ�������N������
�����
������������ 
*/
//����1��ö�ٷ���һ��һ�ε��ԣ������������� 
/*#include<iostream>
using namespace std;
int N;
int num[1005];
int Max=-1e-6;
int main()
{
	int temp;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<N;i++)
	{
		temp=0;
		for(int j=i;j<N;j++)
		{
			temp+=num[j];
			if(temp>Max)
			{
				Max=temp;
			}
		}
	}
	cout<<Max<<endl;
	return 0;
}
*/

//����2����̬�滮-���������
//˼·����������dp[i]��ʾǰi���������� 
#include<iostream>
using namespace std;
int N;
int num[1005];
int dp[1005]; 
int Max=1e-9;
int main()
{
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>num[i];
		dp[i]=num[i];
	}
	//��ʼ�����������Ӷ�
	for(int i=1;i<N;i++)
	{
		dp[i]=max(dp[i],dp[i-1]+num[i]);	
	} 
	//���ݸ����Ӷ�������Ӷ�
	for(int j=0;j<N;j++)
	{
		Max=max(Max,dp[j]);	
	} 
	cout<<Max<<endl;
	return 0;
 } 
//�ܽ᣺ʱ�临�Ӷȴ�o(n^2)�䵽��o(n) 
/*����1
5
-1 2 -1 2 -1
*/ 
