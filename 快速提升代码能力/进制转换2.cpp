//16����ת��8����
/*
��Ŀ������ 
��������n��ʮ��������������������Ƕ�Ӧ�İ˽�������

�����ʽ�� 
��������ĵ�һ��Ϊһ��������n ��1<=n<=10����
����������n�У�ÿ��һ����0~9����д��ĸA~F��ɵ��ַ�������ʾҪת����ʮ��������������ÿ��ʮ�����������Ȳ�����100000��

�����ʽ�� 
�������n�У�ÿ��Ϊ�����Ӧ�İ˽����������� 
*/
//˼·1: 
//��16����ת10������ת8���� (����,long long�Ų���)
#include<stdio.h>
#include<string.h>
long long sum[10];
char ans[100005]; 
long long Transform1(char A[])
{
	long long s=0;
	int len=strlen(A),k;
	for(k=0;k<len;k++)
	{
		int t;
		if(A[k]<='9')
			t=A[k]-'0';
		else
			t=A[k]-'A'+10;
		s=s*16+t;
	}
	return s;
}
int main()
{
	int N,i,j;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		int len,n,m=0;
		char A[100005],ans[100005]={0};
		scanf("%s",&A);
		sum[i]=Transform1(A);
		while(sum[i])
		{
			ans[m++]=sum[i]%8+'0';
			sum[i]/=8;
		}
		len=strlen(ans);
		for(n=len-1;n>=0;n--)
			printf("%c",ans[n]);
		printf("\n");
	}
	return 0;
 } 
 //˼·2��
 //��16����ת2������ת8����
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string a,b,c;	//�ֱ����16��8,2����
	cin>>n;
	while(n--)
	{
		a="",b="",c="";
		cin>>a;		//16����
		for(int i=0;i<a.size();i++)
		{
			switch(a[i])		//ת��2���� 
			{
				case '0':b+="0000";break;
				case '1':b+="0001";break;
				case '2':b+="0010";break;
				case '3':b+="0011";break;
				case '4':b+="0100";break;
				case '5':b+="0101";break;
				case '6':b+="0110";break;
				case '7':b+="0111";break;
				case '8':b+="1000";break;
				case '9':b+="1001";break;
				case 'A':b+="1010";break;
				case 'B':b+="1011";break;
				case 'C':b+="1100";break;
				case 'D':b+="1101";break;
				case 'E':b+="1110";break;
				case 'F':b+="1111";break;
				default:break;
			}
		} 
		if((b.size()%3)==1)		//2����ת��8�����Ȳ���0λ
			b.insert(0,"00");
		else if((b.size()%3)==2)
			b.insert(0,"0"); 
		int n_eight;		//�ݴ�8���Ƶ���
		for(int j=0;j<b.size();j+=3)
		{
			n_eight=4*(b[j]-'0')+2*(b[j+1]-'0')+(b[j+2]-'0');
			c+=(n_eight+'0');
		} 
		int k=0;
		while(c[k]=='0')
			k++;
		for(;k<c.size();k++)
		{
			cout<<c[k];
		} 
		cout<<endl;
	} 
	return 0;
 }  
