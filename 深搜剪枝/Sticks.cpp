//Sticks
/*
��������
����George took sticks of the same length and cut them randomly until all parts became at most 50 units
 long. Now he wants to return sticks to the original state, but he forgot how many sticks he had originally
  and how long they were originally. Please help him and design a program which computes the smallest possible
   original length of those sticks. All lengths expressed in units are integers greater than zero.
�����ʽ
����The input contains blocks of 2 lines. The first line contains the number of sticks parts after
 cutting, there are at most 64 sticks. The second line contains the lengths of those parts separated
by the space. The last line of the file contains zero.
�����ʽ
����The output should contains the smallest possible length of original sticks, one per line.
��������
9
5 2 1 5 2 1 5 2 1
4
1 2 3 4
0
�������
5
6
*/
//����������һn�����Ⱦ�ΪL��ľ�����ֳ�m�����Ȳ��ȵ�ľ������L��СΪ���� 
/*#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int m,sum,ans;
int a[1005]; 
int main()
{
	cin>>m;
	while(m!=0)
	{
		memset(a,0,sizeof(a));	//��ʼ�� 
		sum=0;
		ans=0;
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+m);
		for(int i=a[m-1];i<=sum;i++)
		{
			if(sum%i==0)
			{
				ans=i;
				break;
			}
		}
		cout<<ans<<endl;
		cin>>m;
	}
	return 0;
}*/
//���ַ������׺���һ�����⣬Сľ���Ƿ������ƴ�ش�ľ����

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int n,m;	//n��ʾԭ��ľ������Ŀ��m��ʾ�и��ľ������Ŀ
int sum;	//��ʾ����ľ�����ܺ� 
int ans;
int a[1005];
bool vis[1005];
void dfs(int s,int l,int index)	//s��ʾ���ľ������Ŀ��l��ʾ��ǰľ���ĳ��ȣ�index��ʾľ�����±�
{
	if(s==n)
	{
		ans=sum/n;
		return;
	}
	for(int i=index;i<m;i++)    
	{
                
		if(vis[i]||(i&&a[i]==a[i-1]&&!vis[i-1])) //��֦  
		{
			continue; 
		}
		if(a[i]+l==sum/n)      //�ɹ�ƴ��һ���ٶ����ȵ�Сľ�� 
		{
			vis[i]=true;
			dfs(s+1,0,0);  //s+1���ɹ�ƴ��������һ����ʼƴ��һ����������ʼ��Ϊ0
			vis[i]=false;            //���� 
		} 
		if(a[i]+l<sum/n)        //ûƴ�� 
		{
			vis[i]=true;
			dfs(s,a[i]+l,0);   //�ݹ����ѭ����֮ƴΪ���賤�� 
			vis[i]=false;
		 
		}
		if(i>=m&&s<n)
		{
			return;
		}
	}
	return;	
} 
int main()
{
	cin>>m;
	while(m!=0)
	{
		sum=0;
		ans=0;
		memset(a,0,sizeof(a));
	
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
			sum+=a[i];	
		}
		sort(a,a+m);
		for(int i=a[m-1];i<=sum;i++)
		{
			memset(vis,false,sizeof(vis));
			if(ans!=0)
			{
				break;
			}
			if(sum%i==0)	//������� 
			{
				n=sum/i; 
				dfs(1,0,0);
			}
		}
		cout<<ans<<endl;
		cin>>m;	
	} 
	return 0;	
}
//��Ҫ���ǵĶ����Ƚ϶࣬ϸ��Ҫע�⣬�����Ҫ��֦������ᳬʱ 
 
