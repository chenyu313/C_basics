//ģ�������
/*
if 
	a%m==b%m  and  c%m==d%m   //a��bͬ�࣬c��dͬ�� 
��
	(a+b)%m==(c+d)%m
	(a*b)%m==(c*d)%m 
	
���ģ���Է���(����ͬ�෽��)
����չŷ������㷨���ģ���Է��̣�
ͬ�෽��a*x%n==b%n	(a*x==b(mod n))����δ֪��x�н⣬���ҽ���b��gcd(a,n)�ı����� 
�ҵ������н�ʱ��������gcd(a,n)���⡣ 
��ⷽ��a*x==b(mod n) �൱����ⷽ�� a*x+n*y=b -->a*x��n��y������b(x,yΪ����)
�൱�ڣ�a*x=n*y1+����
		b=n*y2+���� 
-->a*x+n*y=b

���ܵ�Լ�� 
��ֻ������������ʶ�ˣ������ĵúܿ��ģ����Ǿ��ú��б�Ҫ��һ�档���Ǻܸ��˵ط�������ס��ͬһ��γ�����ϣ�
��������Լ�����Գ�������ֱ������Ϊֹ���������ǳ���֮ǰ������һ������Ҫ�����飬��û��������Է���������
Ҳû��Լ������ľ���λ�á����������Ƕ��Ǻ��ֹ۵ģ����Ǿ���ֻҪһֱ����ĳ����������ȥ�����������Է��ġ�
���ǳ�������ֻ������ͬһʱ������ͬһ���ϣ���Ȼ����Զ������������ġ�Ϊ�˰�������ֻ�ֹ۵����ܣ�
�㱻Ҫ��дһ���������ж�����ֻ�����Ƿ��ܹ����棬����ʲôʱ�����档 
���ǰ�����ֻ���ֱܷ��������A������B�����ҹ涨γ�����϶���0�ȴ�Ϊԭ�㣬�ɶ�����Ϊ�����򣬵�λ����1�ף�
�������Ǿ͵õ���һ����β��ӵ����ᡣ������A�ĳ�����������x������B�ĳ�����������y������Aһ������m�ף�
����Bһ������n�ף���ֻ������һ�������ѵ�ʱ����ͬ��γ�����ܳ�L�ס�����Ҫ������������˼����Ժ�Ż����档 
Input

����ֻ����һ��5������x��y��m��n��L������x��y < 2000000000��0 < m��n < 2000000000��0 < L < 2100000000��
Output

�����������Ҫ����Ծ�����������Զ���������������һ��"Impossible"
Sample Input

1 2 3 4 5
Sample Output

4 
*/
//������(x+k*m)%L=(y+k*n)%L		--->��k
//����1�������ⷨ 
/*#include<iostream>
using namespace std;
int x,y,m,n,L;
int main()
{
	cin>>x>>y>>m>>n>>L;
	bool f=false;
	for(long long k=0;k<=2000000000;k++)
	{
		if((x+k*m)%L==(y+k*n)%L)
		{
			cout<<k<<endl;
			f=true;
			break;	
		}	
	} 
	if(!f)
		cout<<"Impossible"<<endl;
	return 0;	
} */
//����2����չŷ������㷨-->(m-n)*k+L*t=y-x--->�൱��ax+by=m-->k��tδ֪��������Է���
#include<iostream>
#include<math.h>
using namespace std;
//��չŷ������㷨���x y
int ex_gcd(int a,int b,int &x,int &y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return a;
	}
	int ans=ex_gcd(b,a%b,x,y);
	int t=x;
	x=y;
	y=t-a/b*x;
	return ans;
}
//�ж�c�Ƿ�ɽ�
int cal(int a,int b,int c)
{
    int x, y;
    int gcd = ex_gcd(a, b, x, y);
    if(c % gcd)
    {
        return -1;
    }
    x *= c / gcd;
    b /= gcd;
    int ans = (x % b + b) % b;
    return ans;
}
int main()
{
	int x,y,m,n,L;
	cin>>x>>y>>m>>n>>L;
	int ans=cal(m-n,L,x-y);
	if(ans==-1)
		cout<<"Impossible"<<endl;
	else
		cout<<abs(ans)<<endl;
	return 0;
}

