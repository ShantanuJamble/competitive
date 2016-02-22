#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
	long long t;
	long long n,st,end;
	cin>>t;
	while(t--)
	{
		cin>>n;
		st=pow((double)10,(double)(n-1));
		end=pow((double)10,(double)n);
		cout<<end;
	}
}
