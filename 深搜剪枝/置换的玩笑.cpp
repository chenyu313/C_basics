//�û�����Ц
/*ĳͬѧ��С�İ�ʵ�鱨���ϵĿո��ɾ�ˣ�����ԭ����¼��1��n�����б�ʾ����
�����ʽ��
		����һ���ַ���(������100����) 
�����ʽ��
		�������*/
#include<iostream>
#include<string>
using namespace std;
string s;
int n;		//��ʾ���������ĸ��� 
bool f;
int ans[100];
bool vis[100];
void dfs(int x,int cnt)		//x��ʾ�����еĵڼ�����cnt��ʾ�Ѿ��ֳ�����
{
	if(f)
	{
		return;
	}
	if(x==s.size()&&cnt==n) 
	{
		for(int i=0;i<n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		f=true;
		return;
	}
	int a=s[x]-'0';
	if(a<=n&&!vis[a])	//��ֵС��n����δ�����ʹ� 
	{
		ans[cnt]=a;
		vis[a]=true;
		dfs(x+1,cnt+1);
		vis[a]=false;
	}
	a=a*10+s[x+1]-'0';	//��λ�� 
	if(a<=n&&!vis[a])
	{
		ans[cnt]=a;
		vis[a]=true;
		dfs(x+2,cnt+1);
		vis[a]=false;
	}
} 
int main()
{
	cin>>s;
	n=(s.size()<=9?s.size():(s.size()-9)/2+9);	//�ж��Ƿ�����λ��
	dfs(0,0); 
	return 0;
} 
/*����
4111109876532
*/ 
