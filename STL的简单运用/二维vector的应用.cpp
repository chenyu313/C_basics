//��ӡ1��5�ĳ˷���(��άvector������)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<vector<int> > vct2;
	for(int i=0;i<5;i++)
		vct2.push_back(vector<int>());//�ȶ������� ������δȷ�� 
	for(int i=0;i<vct2.size();i++)
		for(int j=0;j<=i;j++)
			vct2[i].push_back((i+1)*(j+1));//��ÿһ�в���Ԫ��
	for(int a=0;a<vct2.size();a++)
		{
			for(int b=0;b<vct2[a].size();b++)
				cout<<a+1<<"*"<<b+1<<"="<<vct2[a][b]<<"\t";//��ӡ����\t��Ϊ�Ʊ�� 
			cout<<endl;
		}
	return 0;
 } 
