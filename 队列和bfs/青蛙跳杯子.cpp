//����������
/*
X��������г��������ܣ�һ����������ɫ����ɫ�ͺ�ɫ��
X����ľ���ϲ�������Ƿ���һ�Ų豭��������Թ۲�����������ȥ��
����ͼ����һ�ű��ӣ���ߵ�һ���ǿ��ŵģ��ұߵı��ӣ�ÿ�������һֻ���ܡ�

*WWWBBB

  ���У�W��ĸ��ʾ��ɫ���ܣ�B��ʾ��ɫ���ܣ�*��ʾ�ձ��ӡ�

  X�ǵ����ܺ���Щ�ã�����ֻ��3������֮һ��
  1. �������ڵĿձ����
  2. ����1ֻ���������ܣ����ʲô��ɫ�������ձ����
  3. ����2ֻ���������ܣ����ʲô��ɫ�������ձ����

  ������ͼ�ľ��棬ֻҪ1�����Ϳ�������ͼ���棺

WWW*BBB

��������������֪��ʼ���棬ѯ��������Ҫ����������������һ��Ŀ����档

����Ϊ2�У�2��������ʾ��ʼ�����Ŀ����档
���Ҫ��Ϊһ����������ʾ������Ҫ���ٲ�����������

���磺
���룺
*WWBB
WWBB*

�����Ӧ�������
2

�����磬
���룺
WWW*BBB
BBB*WWW

�����Ӧ�������
10

����Լ��������Ĵ��ĳ��Ȳ�����15
*/
//˼·1��dfs
/* 
#include<iostream>
#include<string>
#define MAX 100005
using namespace std;
string s1,s2;
int ans=MAX;
int len;
int Find(string s)
{
	for(int i=0;i<s.length();i++){
		if(s[i]=='*')
			return i;
	}
}
void dfs(string s,int n)
{
	if(Find(s)>=n||Find(s)<0)	//���ձ��ӵ�λ�ô��ڵ����������ȣ����� 
	{
		return;
	}
	if(s==s2){
		if(n<ans)
			ans=n;
		return;
	}
	int k=Find(s);
	string *ss=s;
	ss[k] 
}
int main()
{
	cin>>s1;
	cin>>s2;
	len=s1.length();
	dfs(s1,0);
	cout<<ans<<endl;
	return 0;	
} 
//û�������������ڻ�λ�ĵط�������Ҫ���������µı�����װ�µ�״̬�����ܻᳬʱor���ռ� 
*/


//˼·2��bfs
#include<iostream>
#include<string>
#include<queue>
#include<map>
using namespace std;
map<string,int>	mp;		//�����ж��Ƿ��߹�����·�� 
string s1,s2;
int ans; 
struct Node
{
	string s;
	int step;
	Node(string ss,int sp){	//��ʼ�� 
		s=ss;
		step=sp;
	}
};
void bfs()
{
	queue<Node> q;
	q.push(Node(s1,0));
	while(!q.empty()) 
	{
		Node t=q.front();
		q.pop();
		if(t.s==s2){		//�ݹ�� 
			ans=t.step;
			return;
		}
		int len=t.s.size();
		for(int i=0;i<len;i++){
			for(int j=-3;j<=3;j++){
				string temp=t.s;
				if(i+j<0 || i+j>=len || t.s[i+j]!='*')	//������or����������"*"������� 
				{
					continue;
				}
				temp[i+j]=temp[i];	//���� 
				temp[i]='*';
				
				if(!mp[temp])	//��δ��ǹ�
				{
					mp[temp]=1;	//���
					q.push(Node(temp,t.step+1));	//ѹ����� 
				} 
			}
		} 
	}
	
} 
int main()
{
	cin>>s1;
	cin>>s2;
	bfs();
	cout<<ans<<endl;
	return 0;
}
