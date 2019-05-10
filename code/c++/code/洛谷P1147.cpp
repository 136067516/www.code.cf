#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	for(long long i=1;i<=n;++i)
	{
		long long c=i*i+i-2*n,a=-1,b=1;
		long long delta=b*b-4*a*c;
		long long x1=(-b+sqrt(delta))/(2*a),x2=(-b-sqrt(delta))/(2*a);
		if(int(sqrt(delta))!=double(sqrt(delta))) continue;
		if(int((-b+sqrt(delta))/(2*a))!=double((-b+sqrt(delta))/(2*a))) continue;
		if((x1>0)?x1:x2==i) continue;
		printf("%lld %lld\n",min((x1>0)?x1:x2,i),max((x1>0)?x1:x2,i));
	}
	return 0;
}
