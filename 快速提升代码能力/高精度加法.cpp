//������ϰ �߾��ȼӷ�
/*�㷨����
��������a��b���Ƚϴ����Բ���ֱ��ʹ�������еı�׼�����������洢�������������⣬һ��ʹ������������
��������һ������A��A[0]���ڴ洢a�ĸ�λ��A[1]���ڴ洢a��ʮλ���������ơ�ͬ��������һ������B���洢b��
��������c = a + b��ʱ�����Ƚ�A[0]��B[0]��ӣ�����н�λ��������ѽ�λ�����͵�ʮλ��������r���Ѻ͵ĸ�λ������C[0]����C[0]����(A[0]+B[0])%10��Ȼ�����A[1]��B[1]��ӣ���ʱ��Ӧ����λ��������ֵrҲ����������C[1]Ӧ����A[1]��B[1]��r�������ĺͣ�������н�λ���������Կɽ��µĽ�λ���뵽r�У��͵ĸ�λ�浽C[1]�С��������ƣ��������C������λ��
�������C������ɡ�
�����ʽ
��������������У���һ��Ϊһ���Ǹ�����a���ڶ���Ϊһ���Ǹ�����b������������������100λ�����������λ������0��
�����ʽ
�������һ�У���ʾa + b��ֵ��*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> A,B,C;
int main()
{
	int carry=0,m=0;
	string s1,s2;
	cin>>s1>>s2;
	if(s1.size()>s2.size())	//��֤A����������� 
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
