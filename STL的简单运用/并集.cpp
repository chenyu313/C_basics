//����
/*
���� 
�����ʽ��
		��һ������n,m(0<=n,m<=10000)�ֱ��ʾ����A�ͼ���BԪ�صĸ���
		����������Ԫ��
  �����ʽ��
  		���һ�����ݣ�Ҫ���С�������
*/
//������STL����set���������� 
#include<iostream>
#include<set>
using namespace std;
set<int> s;
int main()
{
	int n,m,x;
	int cnt=0;
	cin>>n>>m;
	for(int i=0;i<n+m;i++)	//���������˼���û���ظ�������(����һ�����ص����Ծ�����������) 
	{
		cin>>x;
		s.insert(x);
	}
	//������ֻ��Ҫע�����������У���Ϊ��֪�����ϵ��еľ��������������Ҫ �õ�������
	for(set<int>::iterator it=s.begin();it!=s.end();it++) 
	{
		if(cnt!=s.size()-1)
		{
			cout<<(*it)<<" ";
			cnt++;
		}else{
			cout<<(*it)<<endl;
		}
	}
	return 0;
}
/*
3 4
3 2 1
3 4 5 2
*/
