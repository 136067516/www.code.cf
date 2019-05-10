#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int gcd(int a,int b)
{
	return((a%b==0)?b:gcd(b,a%b));
}
int main()
{
	
	return 0;
}
