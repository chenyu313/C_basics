//��ƽ����
/*
��Ŀ��
����ƽ����ʱ������ϣ���þ������ٵ�������ϳƳ������ܶ��������
���ֻ��5�����룬�����ֱ���1��3��9��27��81
�����ǿ�����ϳƳ�1��121֮��������������������������������������У���

����ĿҪ����ʵ�֣����û�����������������������Ϸ�����
���磺
�û����룺
5
���������
9-3-1
�û����룺
19
���������
27-9+1
Ҫ����������������Ǵ�����ǰС���ں�
���Լ����û�����������ַ��Ϸ�Χ1~121��
*/ 
//˼·1��dfs
/*#include<iostream>
#include<vector>
using namespace std;
int a[10005];
vector<int> v;	//����װ�� 
int n; 
//x��ʾa[i]���±�
//sum��ʾ����Ҫ����� 
void dfs(int x,int sum)
{
	if(sum==n)
	{
		int len=v.size();
		for(int i=0;i<len;i++)
		{
			if(v[i]>0 && i!=0)
				cout<<"+";
			cout<<v[i];
		} 
		return;	
	}
	if(sum<0)	//���������� 
		return;
	if(x<0)		//û�и�С��������ʱ 
		return;
	//��ǡ�ó���
	dfs(x-1,sum);
	
	//��sum����ʱ
	v.push_back(a[x]);
	dfs(x-1,sum+a[x]);
	v.pop_back();	//���� 
	
	//��sun̫��ʱ
	v.push_back(-a[x]);
	dfs(x-1,sum-a[x]); 
	v.pop_back();	//���� 
}
int main()
{
	int m=0;
	cin>>n;
	a[0]=1;
	while(n>=a[m])
	{
		m++;
		a[m]=a[m-1]*3;
	}
	dfs(m,0);
	return 0;
}*/
//�о��ٶȻ������

//˼·2������ת��
#include <iostream>
#include <cstdlib>
using namespace std;
int a[10] = {1,3,9,27,81};
const int maxn = 121;
//��3���Ʊ��ֲ������ʾ 
void f(int n, int radix){
    int cur = 0;
    int res[10];
    //3����ת������ 
    while(n > 0){
        int tmp = n % radix;
        if(tmp == 2){
            res[cur++] = -1;
            n = (n + 1) / radix;
        }
        else{
            res[cur++] = tmp;
            n /= radix;
        }
    }
    //�����ʾ  
    int i = cur - 1;
    while(res[i] == 0) --i; 
    cout<<a[i] * res[i];

    for(i = i - 1; i >= 0; --i){
        if(res[i] > 0){
            cout<<"+"<<a[i] * res[i];
        }
        if(res[i] < 0){
            cout<<a[i] *res[i];
        }
    }
    cout<<endl;
}

int main(){
    //��ӡ��1��121�������
    for(int i = 1; i <= maxn; ++i){
        cout<<i<<":";
        f(i,3);      
    }   
    return 0;
}  
