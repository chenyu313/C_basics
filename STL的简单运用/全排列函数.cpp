//ȫ���к���
/*
next_permutation(start,end);	��ǰ���е���һ������ 
prev_permutation(start,end);	��ǰ���е���һ������
ע�⣺ 
1.����bool��
2.ʹ��ǰ��Ҫ���������а���������
3.next_permutation(start,end,cmp)�����Զ�������ʽ��cmp��������
4.��Ҫ����<algorithm> 
*/ 
/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	char num[3]={'A','B','C'};
	do
	{
		cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<endl;
	}while(next_permutation(num,num+3));
	return 0;
}*/

//�ݹ���ⷨ
#include<iostream>
using namespace std;
//num��ʾ����
//n��ʾ��ǰ����
//m��ʾ���鳤�� 
void Perm(char *num,int n,int m)	//���ȫ���� 
{
	if(n==m)	//����ǰ��������m 
	{
		for(int i=0;i<m;i++)
		{
			cout<<num[i]<<" ";	
		} 
		cout<<endl;
	} 
	for(int j=n;j<m;j++)
	{
		swap(num[j],num[n]);	//����
		Perm(num,n+1,m);
		//swap(num[j],num[n]);	//���� 
	}
} 
int main()
{
	char num[3]={'A','B','C'};
	Perm(num,0,3);
	return 0;	
} 
