//WERTYU
/*���ַ��ڼ����ϣ��Բ�ע��ͻ����Ҵ�һλ������������Q�ͻ�������W������J�ͻ�������K�ȡ�
������ĸ����д
���룺
	O S, GOMR YPFSU/
�����
	I AM FINE TODAY. 
*/ 
//�ַ���ת�� 
#include<stdio.h>
char s[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";//�м��"\\"��Ϊ��ת�� 
int main()
{
	char c;
	while((c=getchar())!=EOF){
		int i;
		for(i=1;s[i]&&s[i]!=c;i++);			//ע���зֺţ�������Ϊ���ҵ���Ӧ��λ��
		if(s[i])
			printf("%c",s[i-1]); 
		else
			putchar(c); 					//����ַ��������ַ���Ҳ���� 
	}
	return 0;
}
