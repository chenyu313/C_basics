//TeX�е�����
/*��TeX�У��������ǡ�����,�������ǡ�"�� ������һƪ����˫���ŵ����£��뽫��ת����TeX��ʽ
���룺
	"To be or not to be," quoth the Bard,"that is the question".
�����
	��To be or not to be,��quoth the Bard,��that is the question��.
*/
//����1��getchar��ʹ�� 
/*#include<stdio.h>
int main()
{
	char c;
	int f=1;
	while((c=getchar())!=EOF){
		if(c=='"'){
			printf("%s",f?"��":"��");
			f=!f;
		}else{
			printf("%c",c);
		}
	} 
	return 0;
}*/
//����2��string
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	bool f=true;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='"'){
			cout<<f?"��":"��";
			f=!f;
		}else{
			cout<<s[i];
		}
	}
	cout<<endl;
	return 0;	
} 
//���ۣ�string�޷�д��ո񣬵���To��������޷�д���ַ������ʷ���2�޷�ʵ�� 

