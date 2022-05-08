//括号匹配
#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
char s[50005];
stack<int> st;		//用来存左括号的位置(下标) 
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
			st.push(i);		//将左括号的位置压入栈中 
		}
		else				//遇到右括号 
		{
			if(st.empty())	//如果没有左括号与之匹配
			{
				f=false;
				break;
			} 
			else
			{
				ans[i]=st.top();		//右括号的位置i，匹配左括号st.top() 
				st.pop();	
			}
		} 
	}
	if(!st.empty())				//若匹配完后左括号有多的 
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
