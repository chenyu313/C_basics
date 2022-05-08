//弹簧板
/*一个小球掉落在一串弹簧板上，小球落在一个弹簧板后，会弹到某一个地点，直到弹到弹簧板以外的地方*/
#include<iostream>
using namespace std;
int T[10005];
int m=-1;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>T[i];
	for(int i=1;i<=n;i++)
	{
		int t=0;
		for(int j=i;j<=n;j+=T[j])
		{
			t++;
		}
		m=max(t,m);
	}
	cout<<m<<endl;
	return 0;
} 
