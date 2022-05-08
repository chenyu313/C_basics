#include<iostream>
#include<algorithm>
#include<functional>//greater增加参数
using namespace std;
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
		cin>>arr[i];
	sort(arr,arr+10);
	for(int j=0;j<10;j++)
		cout<<arr[j]<<" ";
	cout<<endl;
	sort(arr,arr+10,greater<int>());
	for(int k=0;k<10;k++)
		cout<<arr[k]<<" ";
	cout<<endl;
	return 0;
}