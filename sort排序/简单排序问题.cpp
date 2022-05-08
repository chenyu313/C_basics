//≈≈–ÚŒ Ã‚
#include<iostream>
#include<algorithm>
using namespace std;
int A[1005];
bool cmp(int a,int b)
{
	return a<b;
}
int main() 
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
		cin>>A[i];
	sort(A,A+N,cmp);
	for(int j=0;j<N;j++)
		cout<<A[j]<<" ";
	cout<<endl;
	return 0;
}
