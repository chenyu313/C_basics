//FJ���ַ���
/*��������
����FJ��ɳ����д������һЩ�ַ�����
����A1 = ��A��
����A2 = ��ABA��
����A3 = ��ABACABA��
����A4 = ��ABACABADABACABA��
������ ��
���������ҳ����еĹ��ɲ�д���е�����AN��
�����ʽ
��������һ������N �� 26��
�����ʽ
�����������Ӧ���ַ���AN����һ�����з�����������в��ú��ж���Ŀո���С��س�����*/
#include<iostream>
#include<string>
using namespace std;
int n;
string s[30];
int main()
{
	cin>>n;
	s[1]="A";
	for(int i=2;i<=n;i++)
	{
		s[i]+=s[i-1];
		s[i].push_back('A'+i-1);
		s[i]+=s[i-1];
	}
	cout<<s[n]<<endl;
	return 0;
}
