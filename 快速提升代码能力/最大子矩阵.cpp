/*����Ӿ���*/
/*
��������
��������һ��n*m�ľ���A����A�е�һ���ǿ��Ӿ���ʹ����Ӿ����е�Ԫ�غ����

�������У�A���Ӿ���ָ��A���к��о�������һ�顣
�����ʽ
��������ĵ�һ�а�����������n, m���ֱ��ʾ����A��������������
����������n�У�ÿ��m����������ʾ����A��
�����ʽ
�������һ�У�����һ����������ʾA�������Ӿ����е�Ԫ�غ͡�
��������
3 3
-1 -4 3
3 4 -1
-5 -2 8
�������
10
*/

/*#include<iostream>
using namespace std;
int A[505][505];
int main()
{
	int n,m,maxs=-1000005;
	cin>>n>>m;
	//���� 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
			maxs=max(A[i][j],maxs);
		}
	}
	//����
	for(int up=0;up<n;up++)	//�� 
	{
		for(int down=up;down<n;down++)	//�� 
		{
			for(int left=0;left<m;left++)	//�� 
			{
				for(int right=left;right<m;right++)	//��
				{
					//������Ӿ��� 
					int sum=0;
					for(int i=up;i<=down;i++)
					{
						for(int j=left;j<=right;j++)
						{
							sum+=A[i][j];
						}
					}
					//�Ƚ� 
					if(maxs<sum)
					{
						maxs=sum;
					}
				} 
			}
		} 
	} 
	cout<<maxs<<endl; 
	return 0;
} */
/*����1
 3 3
 2 -4 1
 -1 2 1
 4 -2 2
*/
//�����ⷨ�����������̬�滮�ⷨ 

/*#include <iostream>
#include <cstring>
using namespace std;
int maxsub(int a[],int n)
{
    int i,max=-5005,b=0;
    for(i=0;i<n;i++)
    {
        if(b > 0)
            b += a[i];
        else
            b = a[i];
        if(b > max)
            max = b;
    }
    return max;
}

int main()
{
    int n,m,i,j,k,ans,maxsubarr;
    int dp[505][505],arr[505];
  	cin>>n>>m;
    for(i=0;i<n;i++)
    	for(j=0;j<m;j++)
            cin>>dp[i][j];
     ans=-5005;
     for(i=0;i<n;i++)
     {
         memset(arr,0,sizeof(arr));
         for(j=i;j<n;j++)
         {
             for(k=0;k<m;k++)
                 arr[k] += dp[j][k];
             maxsubarr = maxsub(arr,m);
             if(maxsubarr > ans) ans = maxsubarr;
         }
     }
     cout<<ans<<endl;
}*/

//��̬�滮������ά���鿴��һά���飬������ֶ�
/*
˼·�����ҳ�����������У�Ȼ��תΪһά���鴫����������е����� 
*/ 
#include<iostream>
#include<cstring>
using namespace std;
int arr[505][505],dp[505];
//������Ӵ�(��) 
int maxsub(int a[],int m)
{
	int maxs=-5005;
	int sum=0;
	for(int i=0;i<m;i++)
	{
		if(sum>0)
		{
			sum+=a[i];
		}
		else
		{
			sum=a[i];
		}
		if(maxs<sum)
		{
			maxs=sum;
		}
	}
	return maxs;	
} 
int main()
{
	int n,m;
	//���� 
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int ans=-5005;
	int maxsubarr=0;
	//���������
	for(int i=0;i<n;i++)	//��Ϊ����� 
	{
		memset(dp,0,sizeof(dp)); 
		for(int j=i;j<n;j++)	//�� 
		{
			for(int k=0;k<m;k++)	//�� 
			{
				dp[k]+=arr[j][k];	//��ÿ��ѹ��	
			} 
			maxsubarr=maxsub(dp,m);	//��ѹ���������Ϊһά���鴫�� 
			if(maxsubarr>ans)
			{
				ans=maxsubarr;
			}
		}	
	} 
	cout<<ans<<endl;
	return 0;
}
