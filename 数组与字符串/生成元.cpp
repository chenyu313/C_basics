//����Ԫ
/*���x����x�ĸ�������֮�͵õ�y����˵x��y������Ԫ������n(1<=n<=100000),����С����Ԫ��
�޽����0��
���룺
	1
	216
�����
	198
*/
//���������һ��һ��ö�ٵĻ���ʱ�䲻����ֻ��һ��ö�ٴ洢������
#include<iostream>
#define max 100005
using namespace std;
int ans[max];
int main()
{
	int n,a;
	for(int i=1;i<max;i++){
		int x=0,t=i;
		x+=t;
		while(t){
			x+=(t%10);
			t/=10;
		}
		if(ans[x]==0||ans[x]>i){
			ans[x]=i;
		}
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cout<<ans[a]<<endl;
	}
	return 0;
}
 
