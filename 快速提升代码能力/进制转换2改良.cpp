//16进制转8进制
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string a,b,c;	//分别代表16，8,2进制
	cin>>n;
	while(n--)
	{
		a="",b="",c="";
		cin>>a;		//16进制
		for(int i=0;i<a.size();i++)
		{
			switch(a[i])		//转成2进制 
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
		if((b.size()%3)==1)		//2进制转成8进制先补足0位
			b.insert(0,"00");
		else if((b.size()%3)==2)
			b.insert(0,"0"); 
		int n_eight;		//暂存8进制的数
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
