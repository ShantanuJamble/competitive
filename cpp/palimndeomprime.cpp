#include<iostream>
#include<stdio.h>
using namespace std;
int checkPallindrome(long n)
{
	long tmp,sum=0;
	int d;
	tmp=n;
	cout<<tmp<<sum<<endl;
	while(tmp)
	{
		d=tmp%10;
		sum+=d*10;
		cout<<sum<<endl;
		tmp=tmp/10;
	}
	cout<<sum<<endl;
	return sum==n;
}
int main()
{
	cout<<checkPrime(121);
}
