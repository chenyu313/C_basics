//����ƥ��
#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
char s[50005];
stack<int> st;		//�����������ŵ�λ��(�±�) 
int ans[50005];
int main()
{
	bool f=true;
	scanf("%s",s);
	int len=strlen(s);
	for(int i=1;i<=len;i++)
	{
		if(s[i-1]=='(')
		{
			st.push(i);		//�������ŵ�λ��ѹ��ջ�� 
		}
		else				//���������� 
		{
			if(st.empty())	//���û����������֮ƥ��
			{
				f=false;
				break;
			} 
			else
			{
				ans[i]=st.top();		//�����ŵ�λ��i��ƥ��������st.top() 
				st.pop();	
			}
		} 
	}
	if(!st.empty())				//��ƥ������������ж�� 
	{
		f=false;
	}
	if(!f)
	printf("No\n");
	else
	{
		printf("Yes\n");
		for(int i=1;i<=len;i++)
		{
			if(ans[i])
				printf("%d %d\n",ans[i],i);	
		}
	}
	return 0;
 } 
