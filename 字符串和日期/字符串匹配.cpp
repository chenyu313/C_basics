//�ַ���ƥ��-- Rabin-Karp�㷨
/*
�ж��ַ���A"ABA"�ǲ����ַ���B"ABABABA"���Ӵ��� 
������λ�� 

�����ƥ���ַ����ĳ���ΪN��Ŀ���ַ����ĳ���ΪM��M>N�������ȼ����ƥ���ַ�����hashֵ������Ŀ���ַ���
ǰN���ַ���hashֵ���Ƚ�ǰ����������hashֵ���Ƚϴ���M-N+1����hashֵ����ȣ����������Ŀ���ַ�������
һ������ΪN���ַ��Ӵ���hashֵ����hashֵ��ͬ������Ҫʹ�ñȽ��ַ��Ƿ�����ٴ��ж��Ƿ�Ϊ��ͬ���Ӵ�(����
��hashֵ��ͬ����ֱ�ӿ����жϴ�ƥ���ַ�����Ŀ���ַ������Ӵ���֮������Ҫ�ٴ��ж��ַ��Ƿ���ȣ�����Ϊ��
ͬ���ַ����������hashֵ�п�����ȣ���֮Ϊhash��ͻ��hash��ײ���������Ǽ�С�ĸ��ʣ����Ժ��Բ���)��
*/
#include<iostream>
#include<string>
using namespace std;
long long seed=31;	//������ 
//ת��hash 
long long Hash(string s)
{
	long long h=0;
	for(int i=0;i<s.size();i++)
	{
		h=h*seed+s[i];
	}
	cout<<h<<endl;
	return h;
}
//ƥ�� 
void match(string p,string s)
{
	long long hash_p=Hash(p);
	int len_p=p.size();
	for(int i=0;i+len_p<=s.size();i++)
	{
		long long hash_i=Hash(s.substr(i,len_p));	//��ʾ��iλ��ȡlen_p�� 
		cout<<len_p<<endl;
		if(hash_i==hash_p)
		{
			cout<<"match:"<<i<<endl;
		}
	}
}
int main()
{
	string s ="ABABABA";
    string p ="ABA";
    match(p,s);
	return 0;
}
