#include<iostream>
#include<cstdio>
using namespace std;
long long n,m,ans,num;
int gcd(int a,int b)
{
	return ((a%b==0)?b:gcd(b,a%b));
}
int main()
{
	scanf("%d%d",&n,&m);
	long long a_b=n*m;
	for(int i=n;i<=m;++i)
	{
		num=a_b/i;
		if(num*i!=a_b) continue;
		if(gcd(num,i)==n)
			++ans;	
	}
	printf("%d\n",ans);
	return 0;
}
