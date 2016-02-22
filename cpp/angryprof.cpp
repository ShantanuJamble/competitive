#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int n,m,p;
	while(t--)
	{
		cin>>n>>m;
		while(n--)
		{
			cin>>p;
			if(p<=0)
				m--;
		}
		if(m<=0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
