//��������
/*����Ϊn�Ļ��δ���n�ֱ�ʾ�������ֱ�Ϊ��ĳ��λ�ÿ�ʼ˳ʱ��õ�������Щ��ʾ���У��ֵ�����С��
��Ϊ����С��ʾ����
����һ������Ϊn�ģ�n<=100���Ļ���DNA����ֻ����A��C��G��T����һ�ֱ�ʾ������������������С��ʾ
���룺
	��һ��������������n
	������n�������ַ���
�����
	���n����С��ʾ*/
#include<iostream>
#include<string.h>
using namespace std;
bool f(string s,int p,int q)
{
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[(p+i)%len]!=s[(q+i)%len]){		//�ҳ���С��ͷ 
			return  s[(p+i)%len]<s[(q+i)%len];
		}
	} 
	return false;		//��� 
}
int main()
{
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int ans=0;
		int len=s.length();
		for(int i=0;i<len;i++){
			if(f(s,i,ans))
				ans=i;
		}
		for(int j=0;j<len;j++){
			cout<<s[(ans+j)%len];
		}
		cout<<endl;
	}
	return 0;	
}
/*����
2
CTCC
CGAGTCAGCT 
*/
