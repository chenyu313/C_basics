//��������
/*��nյ�ƣ����Ϊ1~n����1���˰����еƴ򿪣���2���˰������б��Ϊ2�ı����Ŀ��أ���3���˰������б��Ϊ3 
�ı����Ŀ��أ����йص��ĵƽ����򿪣����ŵĵƽ����ص������Դ����ơ�һ����k���ˣ��ʵ������Щ����
���ŵ�
���룺
	����n��k
�����
	������ŵƵı�� 
*/ 
#include<iostream>
#include<string.h>	//���ڳ�ʼ������
using namespace std;
#define max 1010
int a[max];
int main()
{
	int n,k;
	memset(a,0,sizeof(a));		//��ʼ��a���� 
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			if(j%i==0)
				a[j]=!a[j];		//������֮ǰû������������õ� 
		}
	}
	bool first=true;			//�����ж��Ƿ��ǵ�һ�� 
	for(int i=1;i<=n;i++){
		if(a[i]){
			if(first){
				first=false;
		}else{
			cout<<" ";			//���˵�һ��֮��ÿ�����������ĵ�ǰ������ո� 
		}
		cout<<i;
		}
	}
	cout<<endl;	
	return 0;
}
